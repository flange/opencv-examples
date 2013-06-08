#include <iostream>
#include <cstdlib>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "usage: " << argv[0] << " /path/to/img" << endl;
		return EXIT_FAILURE;
	}

	Mat img = imread(argv[1]);
	if (img.data == NULL) {
		cout << "Couldn't open or find image" << endl;
		return EXIT_FAILURE;
	}

	namedWindow("Test", CV_WINDOW_AUTOSIZE);
	imshow("Test", img);

	waitKey(0);

	destroyWindow("Test");

	return EXIT_SUCCESS;
}
