#include <iostream>
#include <cstdlib>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main(int argc, char *argv[])
{
	Mat src_img;
	Mat des_img;

	char *src_path;
	char *tgt_path;

	bool res;

	if (argc != 3) {
		cout << "usage: ./" << argv[0] << " src-img des-img" << endl;
		return EXIT_FAILURE;
	}

	src_path = argv[1];
	tgt_path = argv[2];

	src_img  = imread(src_path);
	if (src_img.data == NULL) {
		cout << "Couldn't open or find src-img" << endl;
		return EXIT_FAILURE;
	}


	cvtColor(src_img, des_img, CV_BGR2GRAY);


	res = imwrite(tgt_path, des_img);
	if (res == false) {
		cout << "Couldn't write des-img to file" << endl;
		return EXIT_FAILURE;
	}

	/* show target img */
	namedWindow(src_path, CV_WINDOW_AUTOSIZE);
	namedWindow(tgt_path, CV_WINDOW_AUTOSIZE);

	imshow(src_path, src_img);
	imshow(tgt_path, des_img);

	waitKey(0);


	return EXIT_SUCCESS;
}
