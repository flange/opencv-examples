#include <iostream>
#include <cstdlib>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


#define ORIGIN "original.jpg"
#define CHAN_B "chan_blue.jpg"
#define CHAN_G "chan_green.jpg"
#define CHAN_R "chan_red.jpg"

#define NUM_CHANS 3


int main(int argc, char *argv[])
{
	Mat src_img;
	char *src_path;

	Mat merged_chans;
	vector<Mat> channels(NUM_CHANS);

	if (argc != 2) {
		cout << "usage: ./" << argv[0] << " /path/to/src_img" << endl;
		return EXIT_FAILURE;
	}

	src_path = argv[1];
	src_img  = imread(src_path);
	if (src_img.data == NULL) {
		cout << "Couldn't find or read src-img" << endl;
		return EXIT_FAILURE;
	}


	split(src_img, channels);
	merge(channels, merged_chans);

	imwrite(ORIGIN, merged_chans);
	imwrite(CHAN_B, channels[0]);
	imwrite(CHAN_G, channels[1]);
	imwrite(CHAN_R, channels[2]);


	return EXIT_SUCCESS;
}
