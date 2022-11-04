#include <string>

using namespace std;

#ifndef LCDDISPLAY_H
#define LCDDISPLAY_H

class LCDDisplay
{
private:
    string size;
    string model;
public:
    void setSize(string);
    void setModel(string);
    void print();
    void save();
    LCDDisplay(/* args */);
    ~LCDDisplay();
};
void LCDDisplay::setSize(string size){
    this->size=size;
}
void LCDDisplay::setModel(string model){
    this->model=model;
}
void LCDDisplay::print(){
    cout<<"Òº¾§ÏÔÊ¾ÆÁÐÅÏ¢£º³ß´ç£º"<<this->size<<" ÐÍºÅ£º"<<this->model<<"\n";
}
void LCDDisplay::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"Òº¾§ÏÔÊ¾ÆÁÐÅÏ¢£º³ß´ç£º"<<this->size<<" ÐÍºÅ£º"<<this->model<<"\n";
    outData.close();
}

LCDDisplay::LCDDisplay(/* args */)
{
}

LCDDisplay::~LCDDisplay()
{
}


#endif