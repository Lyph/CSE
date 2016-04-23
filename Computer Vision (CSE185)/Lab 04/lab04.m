%% Task 1: Split Frequency
img = im2double(imread('images/lena.jpg'));

ratio = 0.2;

[low_pass_img, high_pass_img] = separate_frequency(img, ratio);

    
figure, imshow(img); title('Input Image');
figure, imshow(low_pass_img); title('Low Frequency');
figure, imshow(high_pass_img + 0.5); title('High Frequency');

imwrite(low_pass_img, 'lena_low_0.2.jpg');
imwrite(high_pass_img + 0.5, 'lena_high_0.2.jpg');


%% Task 2: Hybrid Image

name1 = 'images/marilyn.jpg';   name2 = 'images/einstein.jpg';
%name1 = 'images/bird.jpg';      name2 = 'images/plane.jpg';
%name1 = 'images/cat.jpg';       name2 = 'images/dog.jpg';
%name1 = 'images/fish.jpg';      name2 = 'images/submarine.jpg';
%name1 = 'images/bicycle.jpg';   name2 = 'images/motorcycl.jpg';

img1 = im2double(imread(name1));
img2 = im2double(imread(name2));

ratio = 0.2;
img_merged = hybrid_image(img2, img1, ratio);

figure, imshow(img_merged);
imwrite(img_merged, 'hybrid_02.jpg');
