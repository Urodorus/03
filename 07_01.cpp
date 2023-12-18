#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
void main()
{
	Mat img;
	img = imread("0.png");
	namedWindow("pic", WINDOW_NORMAL);
	resizeWindow("pic", 600, 600);
	imshow("pic", img);

	int key = 0;
	while (key != 0x1B)
		key = waitKey();
	destroyWindow("pic");

	VideoCapture cap;
	Mat fra;
	fra = cap.open("1.flv");
	namedWindow("vid", WINDOW_AUTOSIZE);

	key = 0;
	while (key != 0x1B)
	{
		cap.read(fra);
		imshow("vid", fra);
		key = waitKey(40);
	}
	destroyWindow("vid");


	fra = cap.open(0);
	if (cap.isOpened())
	{
		namedWindow("cam", WINDOW_AUTOSIZE);
		key = 0;
		while (key != 0x1B)
		{
			cap.read(fra);
			imshow("cam", fra);
			key = waitKey(40);
		}
		destroyWindow("cam");
	}
	else std::cout << "no camera";

	waitKey(0);

	return;
}