function I2 = sobel_filter(I1, kernel)

    for u = 1 : size(I1, 2)
        for v = 1 : size(I1, 1)
            
            if ( (u > 1) && (u < (size(I1, 2)-1))) &&  (v > 1) && (v < (size(I1, 1)-1))
                patch = I1(v-1:v+1, u-1:u+1);
                value = patch .* kernel;
                value = value(:);
                value = sum(value);
            else
                value = zeros(1);
            end
            % matrix/vector operations
            I2(v, u) = value;
        end
    end
end