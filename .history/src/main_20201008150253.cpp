#include<iostream>
#include "GLFW/glfw3.h"
#include "GLFW/glfw3native.h"
#include "opencv2/opencv.hpp"
#include "eigen3/Eigen/Eigen"

using namespace cv;
using namespace std;

int main()
{
    glfwInit();
    Mat image=imread("/home/shanjingongzi/图片/壁纸/desktop.jpg");
    GLFWmonitor *monitor=nullptr;
    GLFWwindow*share=nullptr;
    GLFWwindow *window=glfwCreateWindow(512,512,"opengl",monitor,share);
    glfwMakeContextCurrent
    cout<<"hello world"<<endl;
    cv::waitKey(0);
}
