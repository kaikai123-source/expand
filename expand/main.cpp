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
	namedWindow("����", WINDOW_NORMAL);
	namedWindow("��ʴ", WINDOW_NORMAL);
	namedWindow("������", WINDOW_NORMAL);
	namedWindow("������", WINDOW_NORMAL);
	imshow("����", des1);
	imshow("��ʴ", des2);
	imshow("������", des3);
	imshow("������", des4);
	waitKey(0);
}