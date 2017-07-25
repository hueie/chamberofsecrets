//============================================================================
// Name        : chamberofsecrets.cpp
// Author      : Youngseok Joung
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main() {
	VideoCapture vc("C:/upload/sample.mp4");
	cout << "Start";
	Mat frame;
	vc >> frame; // Get First Image
	imwrite("C:/upload/first_image.jpg", frame);
	return 0;
}
