#include <string>

using namespace std;

#ifndef MULTILINELIDAR_H
#define MULTILINELIDAR_H

class MultiLineLidar
{
private:
    string model;
    string chanNum;
    string testRange;
    string powerConsum;
public:
    void setModel(string);
    void setChanNum(string);
    void setTestRange(string);
    void setPowerConsum(string);
    void print();
    void save();
    MultiLineLidar(/* args */);
    ~MultiLineLidar();
};
void MultiLineLidar::setModel(string model){
    this->model=model;
}
void MultiLineLidar::setChanNum(string chanNum){
    this->chanNum=chanNum;
}
void MultiLineLidar::setTestRange(string testRange){
    this->testRange=testRange;
}
void MultiLineLidar::setPowerConsum(string powerConsum){
    this->powerConsum=powerConsum;
}
void MultiLineLidar::print(){
    cout<<"���߼����״���Ϣ���ͺţ�"<<this->model<<" ͨ������"<<this->chanNum<<" ���Է�Χ��"<<this->testRange
    <<" ���ģ�"<<this->powerConsum<<"\n";
}
void MultiLineLidar::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"���߼����״���Ϣ���ͺţ�"<<this->model<<" ͨ������"<<this->chanNum<<" ���Է�Χ��"<<this->testRange
    <<" ���ģ�"<<this->powerConsum<<"\n";
    outData.close();
}

MultiLineLidar::MultiLineLidar(/* args */)
{
}

MultiLineLidar::~MultiLineLidar()
{
}


#endif