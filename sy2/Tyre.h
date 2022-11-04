#include <string>
#include <fstream>

using namespace std;

#ifndef TYRE_H
#define TYRE_H

class Tyre
{
private:
    string model;
    string size;
public:
    void setModel(string);
    void setSize(string);
    void print();
    void save();
    Tyre(/* args */);
    ~Tyre();
};

void Tyre::setModel(string model){
    this->model=model;
}
void Tyre::setSize(string size){
    this->size=size;
}
void Tyre::print(){
    cout<<"ÂÖÌ¥ÐÍºÅ£º"<<this->model<<" ÂÖÌ¥³ß´ç£º"<<this->size<<endl;
}
void Tyre::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"ÂÖÌ¥ÐÍºÅ£º"<<this->model<<" ÂÖÌ¥³ß´ç£º"<<this->size<<"\n";
    outData.close();
}
Tyre::Tyre(/* args */)
{
}

Tyre::~Tyre()
{
}


#endif