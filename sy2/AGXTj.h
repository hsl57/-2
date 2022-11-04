#include <string>

using namespace std;

#ifndef AGXTJ_H
#define AGXTJ_H

class AGXTj
{
private:
    string model;
    string ai;
    string cuda;
    string tensorCore;
    string memory;
    string storage;
public:
    void setModel(string);
    void setAi(string);
    void setCuda(string);
    void setTensorCore(string);
    void setMemory(string);
    void setStorage(string);
    void print();
    void save();
    AGXTj(/* args */);
    ~AGXTj();
};
void AGXTj::setModel(string model){
    this->model=model;
}
void AGXTj::setAi(string ai){
    this->ai=ai;
}
void AGXTj::setCuda(string cuda){
    this->cuda=cuda;
}
void AGXTj::setTensorCore(string tensorCore){
    this->tensorCore=tensorCore;
}
void AGXTj::setMemory(string memory){
    this->memory=memory;
}
void AGXTj::setStorage(string storage){
    this->storage=storage;
}
void AGXTj::print(){
    cout<<"AGX�׼���Ϣ���ͺţ�"<<this->model<<" AI��"<<this->ai<<" CUDA���ģ�"<<this->cuda<<" Tensor_CORE��"<<this->tensorCore
    <<" �Դ棺"<<this->memory<<" �洢��"<<this->storage<<endl;
}
void AGXTj::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"AGX�׼���Ϣ���ͺţ�"<<this->model<<" AI��"<<this->ai<<" CUDA���ģ�"<<this->cuda<<" Tensor_CORE��"<<this->tensorCore
    <<" �Դ棺"<<this->memory<<" �洢��"<<this->storage<<"\n";
    outData.close();
}

AGXTj::AGXTj(/* args */)
{
}

AGXTj::~AGXTj()
{
}


#endif