#include <iostream>
#include <opencv2/opencv.hpp>

/**
	desc: 在tx2上使用rolling window 卷激光地图，图传给pad 渲染
          stage one：重定位
          stage two: vins-mono 定位
                     /vodom_frame transform to /world_frame
                     world local + rolling window 得到卷地图
	author: linxp
**/

using namespace cv;
using namespace std;

void readImage() {
    Mat img = imread("C:\\Users\\Win10\\Downloads\\rasterImg.pgm", 0);
	normalize(img, img, 0, 255, NORM_MINMAX);
	imshow("Image window",img);
	waitKey(0);
}

int main(int argc, char **argv) {
	readImage();
	return 0;
}
