
img = im2double(imread('lena.jpg'));

sigma = 2.0;
hsize = 7;
scale = 5;


%% Gaussian Pyramid
I = img;
for s = 1:scale
    kernel = fspecial('gaussian', hsize, sigma);
    % Gaussian filtering
     for u = 1 : size(I, 2)
        for v = 1 : size(I, 1)
            x1 = u -floor(hsize/2); x2 = u+floor(hsize/2);
            y1 = v-floor(hsize/2); y2 = v+floor(hsize/2);
            
            if ( (x1 > 1) && (x2 < (size(I, 2)-floor(hsize/2))) &&  (y1 > 1) && (y2 < (size(I, 1)-floor(hsize/2)))  )
                patch = I(y1:y2, x1:x2);
                value = patch .* kernel;
                value = value(:);
                value = sum(value);
            else
                value = I(v,u);
            end
            % matrix/vector operations
            I(v, u) = value;
        end
     end
    % Save or show image
    imwrite(I, ['Gaussian_scale', num2str(s), '.jpg']); % change I to the output of Gaussian filter

    
    % Down-sampling
    I = imresize(I,1/2);
end


%% Laplacian Pyramid
I = img;
A = img;
for s = 1:scale
    
    % Gaussian filtering
        kernel = fspecial('gaussian', hsize, sigma);
    % Gaussian filtering
     for u = 1 : size(I, 2)
        for v = 1 : size(I, 1)
            x1 = u -floor(hsize/2); x2 = u+floor(hsize/2);
            y1 = v-floor(hsize/2); y2 = v+floor(hsize/2);
            
            if ( (x1 > 1) && (x2 < (size(I, 2)-floor(hsize/2))) &&  (y1 > 1) && (y2 < (size(I, 1)-floor(hsize/2)))  )
                patch = I(y1:y2, x1:x2);
                value = patch .* kernel;
                value = value(:);
                value = sum(value);
            else
                value = I(v,u);
            end
            % matrix/vector operations
            I(v, u) = value;
        end
     end
    % Laplacian filtering
    I = A - I;
    % Save or show image
    imwrite(I+0.5, ['Laplacian_scale', num2str(s), '.jpg']); % change I to the output of Laplacian filter

    % Down-sampling
        I = A;
        I = imresize(I,1/2);
        A = imresize(A,1/2);
end
