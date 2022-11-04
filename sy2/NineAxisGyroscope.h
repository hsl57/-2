#include <string>

using namespace std;

#ifndef NINEAXISGYROSCOPE_H
#define NINEAXISGYROSCOPE_H

class NineAxisGyroscope
{
private:
    string model;
    string factory;
public:
    void setModel(string);
    void setFactory(string);
    void print();
    void save();
    NineAxisGyroscope(/* args */);
    ~NineAxisGyroscope();
};
void NineAxisGyroscope::setModel(string model){
    this->model=model;
}
void NineAxisGyroscope::setFactory(string factory){
    this->factory=factory;
}
void NineAxisGyroscope::print(){
    cout<<"9轴陀螺仪信息：型号："<<this->model<<" 厂家："<<this->factory<<"\n";
}
void NineAxisGyroscope::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"9轴陀螺仪信息：型号："<<this->model<<" 厂家："<<this->factory<<"\n";
    outData.close();
}

NineAxisGyroscope::NineAxisGyroscope(/* args */)
{
}

NineAxisGyroscope::~NineAxisGyroscope()
{
}


#endif