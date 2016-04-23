function I2 = gaussian_filter(I1, hsize, sigma)

    kernel = fspecial('gaussian', hsize, sigma);
    % your code here
       for u = 1 : size(I1, 2)
        for v = 1 : size(I1, 1)
            x1 = u -floor(hsize/2); x2 = u+floor(hsize/2);
            y1 = v-floor(hsize/2); y2 = v+floor(hsize/2);
            
            if ( (x1 > 1) && (x2 < (size(I1, 2)-floor(hsize/2))) &&  (y1 > 1) && (y2 < (size(I1, 1)-floor(hsize/2)))  )
                patch = I1(y1:y2, x1:x2);
                value = patch .* kernel;
                value = value(:);
                value = sum(value);
            else
                value = I1(v,u);
            end
            % matrix/vector operations
            I2(v, u) = value;
        end
    end
end
    
