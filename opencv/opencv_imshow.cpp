#include<opencv2/opencv.hpp>
using namespace cv;

int main() {
    Mat img = imread("image/lean.jpg");
    imshow("hello", img);
    imwrite("image/lean_new.jpg", img);

    Mat img1 = imread("image/lean_new.jpg");
    imshow("hello1", img1);
    waitKey(0);
    return 0;
}
