#include<opencv2/opencv.hpp>
using namespace cv;
int main() {
	Mat img = imread("lean.jpg");
	imshow("ԭͼ", img);
	imwrite("lean_new.jpg",img);
	Mat img1 = imread("lean_new.jpg");
	imshow("�����ͼ", img1);
	waitKey(0);
	return 0;
}