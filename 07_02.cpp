#include <iostream>
#include <opencv2/opencv.hpp>
#include <windows.h>

using namespace cv;
void main()
{
	HWND h1;
	Mat img,i0;
	i0 = imread("0.png");
	namedWindow("p", WINDOW_NORMAL);
	h1 = GetForegroundWindow();
	MoveWindow(h1, 0, 0, 600, 600, true);
	imshow("p", i0);

	cvtColor(i0,img,COLOR_BGR2GRAY);
	namedWindow("pic", WINDOW_NORMAL);
	h1 = GetForegroundWindow();
	MoveWindow(h1, 600, 0, 600, 600, true);

	imshow("pic", img);

	waitKey(0);

	threshold(img, img, 120, 255, cv::THRESH_OTSU);
	imshow("pic", img);

	waitKey(0);

	GaussianBlur(i0, img, Size(9, 9), 9,9);
	imshow("pic", img);

	waitKey(0);

	destroyAllWindows();
}  