#include <iostream>
#include <opencv2/opencv.hpp>
#include <windows.h>

using namespace cv;
void main()
{
	HWND h1;
	Mat img, i0;
	i0 = imread("0.png");
	namedWindow("p", WINDOW_NORMAL);
	h1 = GetForegroundWindow();
	MoveWindow(h1, 0, 0, 600, 600, true);
	imshow("p", i0);

	Canny(i0, img, 1, 1);
	namedWindow("pic", WINDOW_NORMAL);
	h1 = GetForegroundWindow();
	MoveWindow(h1, 600, 0, 600, 600, true);

	imshow("pic", img);

	waitKey(0);

	Mat el;
	el = getStructuringElement(MORPH_RECT, Size(10, 10));

	dilate(i0, img, el);
	imshow("pic", img);

	waitKey(0);

	erode(i0, img, el);
	imshow("pic", img);

	waitKey(0);

	resize(i0,img,Size(300,300));
	resizeWindow("pic", 300, 300);
	imshow("pic", img);

	waitKey(0);

	destroyAllWindows();
}