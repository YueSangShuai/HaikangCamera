#include <iostream>
#include "./HaikangCamera/CameraGray/HaiKangCameraGray.h"

int main() {
    HaiKangCameraGray HaiKang;

    HaiKang.StartDevice(0);
    // 设置分辨率
    HaiKang.SetResolution(416, 416);
    // 开始采集帧
    HaiKang.SetStreamOn();
    // 设置曝光事件
    HaiKang.SetExposureTime(8000);
    // 设置1
    // HaiKang.SetGAIN(0, 16);
    // HaiKang.SetGAIN(1, 8);
    // HaiKang.SetGAIN(2, 8);
    //HaiKang.SetGAIN(3, 16);
    // 是否启用自动白平衡7
    // HaiKang.Set_BALANCE_AUTO(0);
    // manual白平衡 BGR->012
    //HaiKang.Set_BALANCE(0, 1690);
    //HaiKang.Set_BALANCE(1, 1024);
    //HaiKang.Set_BALANCE(2, 2022);
    while(true){
        cv::Mat frame;
        auto HaiKang_stauts = HaiKang.GetMat(frame);
        cv::imshow("aaa",frame);
        cv::waitKey(1);
    }
    return 0;
}
