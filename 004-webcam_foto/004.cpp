#include <iostream>
#include <cstdlib>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
	VideoCapture cap(0);
	Mat foto;

	if (cap.isOpened() == false) {
		cout << "Couldn't open camera device" << endl;
		return EXIT_FAILURE;
	}

	cap >> foto;

	//namedWindow("foto", CV_WINDOW_AUTOSIZE);
	//imshow("foto", foto);

	imwrite(argv[1], foto);

	//waitKey(0);

	return EXIT_SUCCESS;
}
