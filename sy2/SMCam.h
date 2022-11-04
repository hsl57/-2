#include <string>

using namespace std;

#ifndef SMCAM_H
#define SMCAM_H

class SMCam
{
private:
    string model;
    string camera;
    string rgbFenBianLv;
    string rgbFps;
    string fov;
    string depthFps;
public:
    void setMOdel(string);
    void setCamera(string);
    void setRgbFenBianLv(string);
    void setRgbFps(string);
    void setFov(string);
    void setDepthFps(string);
    void print();
    void save();
    SMCam(/* args */);
    ~SMCam();
};
void SMCam::setMOdel(string model){
    this->model=model;
}
void SMCam::setCamera(string camera){
    this->camera=camera;
}
void SMCam::setRgbFenBianLv(string rgbFenBianLv){
    this->rgbFenBianLv=rgbFenBianLv;
}
void SMCam::setRgbFps(string rgbFps){
    this->rgbFps=rgbFps;
}
void SMCam::setFov(string fov){
    this->fov=fov;
}
void SMCam::setDepthFps(string depthFps){
    this->depthFps=depthFps;
}
void SMCam::print(){
    cout<<"˫Ŀ����ͷ��Ϣ���ͺţ�"<<this->model<<" ����ͷ��"<<this->camera
    <<" RGB֡�ֱ��ʣ�"<<this->rgbFenBianLv<<" RGB֡�ʣ�"<<this->rgbFps<<" FOV��"<<this->fov<<" ���֡�ʣ�"<<this->depthFps<<"\n";
}
void SMCam::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"˫Ŀ����ͷ��Ϣ���ͺţ�"<<this->model<<" ����ͷ��"<<this->camera
    <<" RGB֡�ֱ��ʣ�"<<this->rgbFenBianLv<<" RGB֡�ʣ�"<<this->rgbFps<<" FOV��"<<this->fov<<" ���֡�ʣ�"<<this->depthFps<<"\n";
    outData.close();
}

SMCam::SMCam(/* args */)
{
}

SMCam::~SMCam()
{
}


#endif