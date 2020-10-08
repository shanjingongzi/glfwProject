#include<iostream>
#include "GLFW/glfw3.h"
#include "GLFW/glfw3native.h"
#include "opencv2/opencv.hpp"
#include "eigen3/Eigen/Eigen"

using namespace cv;
using namespace std;

int main()
{
    namedWindow("window",WINDOW_AUTOSIZE);
    VideoCapture cap;
    cap.open("/home/shanjingongzi/视频/video.mp4");
    if
    glfwInit();
    GLFWmonitor *monitor=nullptr;
    GLFWwindow*share=nullptr;
    GLFWwindow *window=glfwCreateWindow(512,512,"opengl",monitor,share);
    glfwMakeContextCurrent(window);
    cout<<"hello world"<<endl;
}
