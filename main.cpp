#include <opencv2/opencv.hpp>
#include "armor_detection.h"
#include <vector>
#define CHECK_PHOTO
//#define CHECK_VIDEO

using namespace cv;
using namespace std;
#ifdef CHECK_PHOTO
int main() {
    ArmorDetector autoShoot;
    vector<Armor> autoTarget;
    Mat src = imread("/Users/oplin/CLionProjects/opencv/robomaster2/height/39.jpg"); // type your image path
    autoTarget = autoShoot.autoAim(src);
    //imshow("src", src);
    int lost_count = 0;
    if (!autoTarget.empty())
    {
        printf("main get target!!!\n");
        printf("---------------main get target!!!---------------\n");
    }
    else
    {
        lost_count++;
        printf("----------------no target\n---------------");
    }
    waitKey(0);
    return 0;
}
#endif CHECK_PHOTO

#ifdef CHECK_VIDEO
int main() {
    ArmorDetector autoShoot;
    vector<Armor> autoTarget;
    Mat src;
    VideoCapture v("/Users/oplin/Downloads/example.avi"); // type your video path
    int lost_count = 0;
//    if (camera_warrper->init())
//    {
    while(true)
    {
        if (!v.isOpened()){
            break;
        }
        v.read(src);
        if (src.empty()){
            break;
        }
//            camera_warrper->read_frame_rgb(src);
        autoTarget = autoShoot.autoAim(src);
        imshow("src",src);
        if (!autoTarget.empty())
        {
            printf("main get target!!!\n");
            printf("---------------main get target!!!---------------\n");
        }
        else
        {
            lost_count++;
            printf("----------------no target\n---------------");
            waitKey(1);
        }
        if (waitKey(1) == 27)
        {
//                camera_warrper->~Camera();
            break;
        }
    }
//    }
    printf("lost_count:%d\n",lost_count);
    return 0;
}
#endif