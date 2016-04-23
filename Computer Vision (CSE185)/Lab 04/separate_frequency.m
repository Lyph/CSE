function [low_pass_img, high_pass_img] = separate_frequency(img, ratio)

    %% apply FFT
    frequency_map = fft2(img);
    %figure, imshow( log(abs(frequency_map) + 1), []);
    %figure, imshow(frequency_map);
    
    %% shift the frequency map
    frequency_map_shifted = fftshift(frequency_map);
    %figure, imshow( log(abs(frequency_map_shifted) + 1), []);


    %% compute low-frequency mask
    % create a rectangular mask whose:
    %       height = ratio * image height
    y1 = size(img, 1)/2 - ratio*size(img, 1)/2;
    y2 =  size(img, 1)/2 + ratio*size(img, 1)/2;
    %       width = ratio * image width
    x1 = size(img, 2)/2 - ratio*size(img, 2)/2;
    x2 = size(img, 2)/2 + ratio*size(img, 2)/2;
    %       center of the rectangle is the center of the input image
    mask = zeros(size(img));
    mask(y1 : y2, x1 : x2, :) = 1;
    
    
    %% separate low-frequency and high-frequency maps
    low_frequency_map_shifted = frequency_map_shifted .* mask;
    high_frequency_map_shifted = frequency_map_shifted .* (1 - mask);
    
    
    %% shift frequency maps back
    low_frequency_map_shifted = ifftshift(low_frequency_map_shifted);
    high_frequency_map_shifted = ifftshift( high_frequency_map_shifted);
    
    
    %% apply Inverse FFT
    low_pass_img = real(ifft2(low_frequency_map_shifted)); % change frequency_map to your low-frequency map
    high_pass_img = real(ifft2(high_frequency_map_shifted)); % change frequency_map to your high-frequency map
    
end