#include<iostream>
#include "GLFW/glfw3.h"
#include "GLFW/glfw3native.h"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main()
{
    glfwInit();
    GLFWwindow *window=glfwCreateWindow(512,512,"opengl",NULL,NULL);
    cout<<"hello world"<<endl;
}
