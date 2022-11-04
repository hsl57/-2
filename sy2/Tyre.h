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
    cout<<"��̥�ͺţ�"<<this->model<<" ��̥�ߴ磺"<<this->size<<endl;
}
void Tyre::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"��̥�ͺţ�"<<this->model<<" ��̥�ߴ磺"<<this->size<<"\n";
    outData.close();
}
Tyre::Tyre(/* args */)
{
}

Tyre::~Tyre()
{
}


#endif