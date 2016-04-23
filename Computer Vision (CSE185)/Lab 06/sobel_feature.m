function [magnitude, orientation] = sobel_feature(I1)

    Hy = [1, 2, 1; 0, 0, 0; -1, -2, -1]; % horizontal edge
    Hx = [1, 0, -1; 2, 0, -2; 1, 0, -1]; % vertical edge
    
    %% Sobel filtering
   Gx = imfilter(I1, Hx);
   Gy = imfilter(I1, Hy);
    
    %% compute gradient magnitude and orientation
    
    %x = Gx(:);
    %y = Gy(:);
    orientation = atan2(Gy,Gx);
    %orientation = reshape(orientation, size(I1,2), size(I1,1),3);
    
    x = Gx.*Gx;
    y = Gy.*Gy;
    magnitude = sqrt(x+y);
   %magnitude = reshape(magnitude, size(I1,2), size(I1,1),3);
   % magnitude = I2; % change img to your gradient magnitude
   % orientation = I2; % change img to your gradient orientation
    
end