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
	namedWindow("形态学处理操作", WINDOW_NORMAL);
	imshow("形态学处理操作", des1);
	imshow("形态学处理操作", des2);
	imshow("形态学处理操作", des3);
	imshow("形态学处理操作", des4);
	waitKey(0);
}