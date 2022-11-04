#include <string>

using namespace std;

#ifndef BATTERYTEMPLATE_H
#define BATTERYTEMPLATE_H

class BatteryTemplate
{
private:
    string parameter;
    string voltage;
    string time;
public:
    void setParameter(string);
    void setVoltage(string);
    void setTime(string);
    void print();
    void save();
    BatteryTemplate(/* args */);
    ~BatteryTemplate();
};
void BatteryTemplate::setParameter(string parameter){
    this->parameter=parameter;
}
void BatteryTemplate::setVoltage(string voltage){
    this->voltage=voltage;
}
void BatteryTemplate::setTime(string time){
    this->time=time;
}
void BatteryTemplate::print(){
    cout<<"���ģ�飺������"<<this->parameter<<" ���⹩�磺"<<this->voltage<<" ���ʱ����"<<this->time<<"\n";
}
void BatteryTemplate::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"���ģ�飺������"<<this->parameter<<" ���⹩�磺"<<this->voltage<<" ���ʱ����"<<this->time<<"\n";
    outData.close();
}

BatteryTemplate::BatteryTemplate(/* args */)
{
}

BatteryTemplate::~BatteryTemplate()
{
}


#endif