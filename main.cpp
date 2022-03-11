#include <iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/core/core.hpp>

using namespace cv;
using namespace std;

void direction()
{


    srand((int)time(0));
    int i=rand()%3+1;
    if(waitKey() == 'q'){
    srand((int)time(0));
    int time2=rand()%3+2;

    Mat front=imread("/home/ma/gogogo.png");
    Mat left=imread("/home/ma/left_turn.png");
    Mat right=imread("/home/ma/right_turn.png");
    resize(front,front,Size(1920,1080),INTER_LINEAR);
    resize(left,left,Size(1920,1080),INTER_LINEAR);
    resize(right,right,Size(1920,1080),INTER_LINEAR);
    while(time2>=0)
    {
        cout<<"方向显示还有"<<time2<<"s"<<endl;
        time2--;
        waitKey(1000);
    }


    if(i==1){
        namedWindow("前", WINDOW_NORMAL);
        setWindowProperty("前", WND_PROP_FULLSCREEN,WINDOW_FULLSCREEN);

        imshow("前",front);
        waitKey();
    }
    else if(i==2){
        namedWindow("左", WINDOW_NORMAL);
        setWindowProperty("左", WND_PROP_FULLSCREEN,WINDOW_FULLSCREEN);

        imshow("左",left);
        waitKey();
    }
    else if(i==3){
        namedWindow("右", WINDOW_NORMAL);
        setWindowProperty("右", WND_PROP_FULLSCREEN,WINDOW_FULLSCREEN);

        imshow("右",right);
        waitKey();
    }
}
}



int main()
{
    Mat black=Mat(1920,1080,CV_8UC3);
    namedWindow("black", WINDOW_NORMAL);
    setWindowProperty("black", WND_PROP_FULLSCREEN,WINDOW_FULLSCREEN);

    imshow(" ",black);
    if(waitKey() == 'q'){
    srand((int)time(0));
    int time1=rand()%3+2;
    Mat greenLight=imread("/home/ma/green_light.png");

    cout<<"倒计时"<<time1<<"s"<<endl;

    while(time1>=0)
    {
        cout<<"开始还有"<<time1<<"s"<<endl;
        time1--;
        waitKey(1000);
    }
    namedWindow("绿灯", WINDOW_NORMAL);
    setWindowProperty("绿灯", WND_PROP_FULLSCREEN,WINDOW_FULLSCREEN);
    resize(greenLight,greenLight,Size(1920,1080),INTER_LINEAR);

    imshow("绿灯",greenLight);
    direction();
    }
    waitKey(0);
    return 0;

}
