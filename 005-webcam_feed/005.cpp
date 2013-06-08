#include <iostream>
#include <cstdlib>
#include <opencv2/opencv.hpp>

#include <signal.h>

using namespace std;
using namespace cv;


int main(void)
{
	VideoCapture cap(0);
	Mat foto;

	if (cap.isOpened() == false) {
		cout << "Couldn't open camera device" << endl;
		return EXIT_FAILURE;
	}

	while (true) {
		cap >> foto;
		namedWindow("foto", CV_WINDOW_AUTOSIZE);
		imshow("foto", foto);

		if (waitKey(10) == 27)
			break;
	}

	return EXIT_SUCCESS;
}
