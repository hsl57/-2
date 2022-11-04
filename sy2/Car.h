#include <string>
#include "AGXTj.h"
#include "DiPan.h"
#include "SMCam.h"
#include "MultiLineLidar.h"
#include "NineAxisGyroscope.h"
#include "LCDDisplay.h"
#include "BatteryTemplate.h"
#include "Student.h"
using namespace std;

#ifndef CAR_H
#define cAR_H
class Car
{
private:
    string id="cqusn0000000000000000";//默认编号
    DiPan diPan;
    AGXTj agxTj;
    SMCam smCam;
    MultiLineLidar multiLineLidar;
    NineAxisGyroscope tly;
    LCDDisplay lcdDisplay;
    BatteryTemplate batTem;
    Student student;
public:
    void setId(string);
    void print();
    void save();
    string getId();
    DiPan* getDiPan();
    AGXTj* getAGXTj();
    SMCam* getSMCam();
    MultiLineLidar* getMultiLineLidar();
    NineAxisGyroscope* getNineAxisGyroscope();
    LCDDisplay* getLCDDisplay();
    BatteryTemplate* getBatteryTemplate();
    Student* getStudent();
    Car(/* args */);
    ~Car();
};
void Car::setId(string id){
    this->id.replace(this->id.length()-id.length(),id.length(),id);
}
void Car::print(){
    cout<<"小车编号"<<this->id<<"\n";
    this->diPan.print();
    // this->agxTj.print();
    // this->smCam.print();
    // this->multiLineLidar.print();
    // this->tly.print();
    // this->lcdDisplay.print();
    // this->batTem.print();
    // this->student.print();
}
void Car::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"小车编号"<<this->id<<"\n";
    outData.close();
    this->diPan.save();
    this->agxTj.save();
    this->smCam.save();
    this->multiLineLidar.save();
    this->tly.save();
    this->lcdDisplay.save();
    this->batTem.save();
    this->student.save();
    
}
string Car::getId(){
    return this->id;
}
DiPan* Car::getDiPan(){
    return &(this->diPan);
} 
AGXTj* Car::getAGXTj(){
    return &(this->agxTj);
}
SMCam* Car::getSMCam(){
    return &(this->smCam);
}
MultiLineLidar* Car::getMultiLineLidar(){
    return  &(this->multiLineLidar);
}
NineAxisGyroscope* Car::getNineAxisGyroscope(){
    return  &(this->tly);
}
LCDDisplay* Car::getLCDDisplay(){
    return  &(this->lcdDisplay);
}
BatteryTemplate* Car::getBatteryTemplate(){
    return  &(this->batTem);
}
Student* Car::getStudent(){
    return  &(this->student);
}
Car::Car(/* args */)
{
}

Car::~Car()
{
    // cout<<&this->diPan<<endl;
}

#endif
