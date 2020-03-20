#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;
int main() {
	Mat src, des1, des2, des3, des4,kernel;
	src=imread("D:/coin.png");
	kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(src, des1, kernel);
	erode(src, des2, kernel);
	morphologyEx(src, des3, MORPH_OPEN, kernel);
	morphologyEx(src, des4, MORPH_CLOSE, kernel);
	namedWindow("≈Ú’Õ", WINDOW_NORMAL);
	namedWindow("∏Ø ¥", WINDOW_NORMAL);
	namedWindow("ø™‘ÀÀ„", WINDOW_NORMAL);
	namedWindow("±’‘ÀÀ„", WINDOW_NORMAL);
	imshow("≈Ú’Õ", des1);
	imshow("∏Ø ¥", des2);
	imshow("ø™‘ÀÀ„", des3);
	imshow("±’‘ÀÀ„", des4);
	waitKey(0);
}