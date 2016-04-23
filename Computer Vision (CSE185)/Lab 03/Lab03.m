
img1 = im2double(imread('lena_noisy.jpg'));
img2 = im2double(imread('lena.jpg'));

%% Median filter
%patch_size = [3, 3];
patch_size = [5, 5];

img_median = median_filter(img1, patch_size);

figure, imshow(img_median);
imwrite(img_median, 'median_5.jpg');



%% Sobel filter
%H = [1, 2, 1; 0, 0, 0; -1, -2, -1]; % horizontal edge
H = [1, 0, -1; 2, 0, -2; 1, 0, -1]; % vertical edge

img_sobel = sobel_filter(img2, H);

figure, imshow(img_sobel);
imwrite(img_sobel, 'sobel_v.jpg');


%% Gaussian filter
hsize = 5; sigma = 2;
%hsize = 9; sigma = 4;
img_gaussian = gaussian_filter(img2, hsize, sigma);

figure, imshow(img_gaussian);
imwrite(img_gaussian, 'gaussian_5.jpg');

