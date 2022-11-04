#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
    string name;
    string id;
public:
    void setName(string);
    void setId(string);
    void print();
    void save();
    Student(/* args */);
    ~Student();
};
void Student::setName(string name){
    this->name=name;
}
void Student::setId(string id){
    this->id=id;
}
void Student::print(){
    cout<<"ѧ��ѧ�ţ�"<<this->id<<" ������"<<this->name<<"\n";
}
void Student::save(){
    ofstream outData;
    outData.open("carinfo.txt",ios::app);
    outData<<"ѧ��ѧ�ţ�"<<this->id<<" ������"<<this->name<<"\n";
    outData.close();
}

Student::Student(/* args */)
{
}

Student::~Student()
{
}


// void Student::setCar(Car* car)
// {
//     cout<<"Car"<<endl;
// }

#endif