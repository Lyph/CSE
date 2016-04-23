function I2 = median_filter(I1, patch_size)

    for u = 1 : size(I1, 2)
        for v = 1 : size(I1, 1)
            x1 = u -floor(patch_size(2)/2); x2 = u+floor(patch_size(2)/2);
            y1 = v-floor(patch_size(1)/2); y2 = v+floor(patch_size(1)/2);
            
            if ( (x1 > 1) && (x2 < (size(I1, 2)-floor(patch_size(2)/2))) &&  (y1 > 1) && (y2 < (size(I1, 1)-floor(patch_size(1)/2)))  )
                patch = I1(y1:y2, x1:x2);
                 value = patch(:);
                 value = median(value);
            else
                value = zeros(1);
            end
            % matrix/vector operations
            I2(v, u) = value;
        end
    end
end