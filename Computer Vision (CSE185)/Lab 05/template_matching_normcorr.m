function [output, match] = template_matching_normcorr(img, template, threshold)

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
        %normcorr
        patch = patch(:);
        template = template(:);
        H = mean(template);
        P = mean(patch);
        P = patch - P;
        H = template - H;
        P = P(:);
        H = H(:);
        
        Q = sum(P.*H);
        R = sum(P.^2);
        S = sum(H.^2);
        value = Q/sqrt(R*S);
        value = value(:);
        value=sum(value);
        output(v, u) = value;
    end
end

%% threshold
match = (output > threshold);

end