#include <string>
#include "Tyre.h"
using namespace std;

#ifndef DIPAN_H
#define DIPAN_H

class DiPan
{
private:
    string id="dp00000000";//Ĭ�ϱ��
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
    cout<<"������Ϣ����ţ�"<<this->id<<" �ͺţ�"<<this->model<<" ��ࣺ"<<this->zhouJu<<" �־ࣺ"<<this->lunJu
    <<" ��С��ؼ�϶��"<<this->minJianXi<<" ��Сת��뾶��"<<this->minBanjing<<" ������ʽ��"<<this->quDong<<" ����г̣�"<<this->maxXingcheng<<endl;
    this->lunTai.print();
}
void DiPan::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"������Ϣ����ţ�"<<this->id<<" �ͺţ�"<<this->model<<" ��ࣺ"<<this->zhouJu<<" �־ࣺ"<<this->lunJu
    <<" ��С��ؼ�϶��"<<this->minJianXi<<" ��Сת��뾶��"<<this->minBanjing<<" ������ʽ��"<<this->quDong<<" ����г̣�"<<this->maxXingcheng<<"\n";
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