#include<iostream>
#include "GLFW/glfw3.h"
#include "GLFW/glfw3native.h"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main()
{
    glfwInit();
    GLFWmonitor *monitor=nullptr;
    GLFWwindow*
    GLFWwindow *window=glfwCreateWindow(512,512,"opengl",monitor,NULL);
    cout<<"hello world"<<endl;
}
