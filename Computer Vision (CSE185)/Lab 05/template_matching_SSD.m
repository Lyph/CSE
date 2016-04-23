function [output, match] = template_matching_SSD(img, template, threshold)

output = img;
%% your code here
[a,b,c] = size(template);
shift_u = floor(a/2);
shift_v = floor(b/2);
for u = 1 + shift_u : size(img, 2) - shift_u
    for v = 1 + shift_v : size(img, 1) - shift_v
        x1 = u-shift_u; x2 = u+shift_u;
        y1 = v-shift_v; y2 = v+shift_v;
        patch = img(y1:y2, x1:x2);
        % SSD
        value = (patch - template).^2;
        value = value(:);
        value=sum(value);
        output(v, u) = value;
    end
end

%% threshold
match = (output < threshold);

end