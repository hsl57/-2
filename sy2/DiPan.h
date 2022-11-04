#include <string>
#include "Tyre.h"
using namespace std;

#ifndef DIPAN_H
#define DIPAN_H

class DiPan
{
private:
    string id="dp00000000";//默认编号
    string model;
    string zhouJu;
    string lunJu;
    string minJianXi;
    string minBanjing;
    string quDong;
    string maxXingcheng;
    Tyre lunTai;
public:
    void setId(string);
    void setModel(string);
    void setZhouJu(string);
    void setLunJu(string);
    void setMinJianXi(string);
    void setMinBanjing(string);
    void setQuDong(string);
    void setMaxXingcheng(string);
    void setLubtai(Tyre);
    void print();
    void save();
    Tyre* getTyre();
    DiPan(/* args */);
    ~DiPan();
};
void DiPan::setId(string id){
    this->id.replace(this->id.length()-id.length(),id.length(),id);
}
void DiPan::setModel(string model){
    this->model=model;
}
void DiPan::setZhouJu(string zhouJu){
    this->zhouJu=zhouJu;
}
void DiPan::setLunJu(string lunJu){
    this->lunJu=lunJu;
}
void DiPan::setMinJianXi(string minJianXi){
    this->minJianXi=minJianXi;
}
void DiPan::setMinBanjing(string minBanjing){
    this->minBanjing=minBanjing;
}
void DiPan::setQuDong(string quDong){
    this->quDong=quDong;
}
void DiPan::setMaxXingcheng(string maxXingcheng){
    this->maxXingcheng=maxXingcheng;
}
Tyre* DiPan::getTyre(){
    return  &(this->lunTai);
}
void DiPan::print(){
    cout<<"底盘信息：编号："<<this->id<<" 型号："<<this->model<<" 轴距："<<this->zhouJu<<" 轮距："<<this->lunJu
    <<" 最小离地间隙："<<this->minJianXi<<" 最小转弯半径："<<this->minBanjing<<" 驱动形式："<<this->quDong<<" 最大行程："<<this->maxXingcheng<<endl;
    this->lunTai.print();
}
void DiPan::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"底盘信息：编号："<<this->id<<" 型号："<<this->model<<" 轴距："<<this->zhouJu<<" 轮距："<<this->lunJu
    <<" 最小离地间隙："<<this->minJianXi<<" 最小转弯半径："<<this->minBanjing<<" 驱动形式："<<this->quDong<<" 最大行程："<<this->maxXingcheng<<"\n";
    outData.close();
    this->lunTai.save();
}

DiPan::DiPan(/* args */)
{
}

DiPan::~DiPan()
{
}

#endif