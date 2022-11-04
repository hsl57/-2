#include <iostream>
#include <string>
#include <fstream>
#include "Car.h"
#include <iomanip>
#include <vector>
using namespace std;



int main()
{
    
    vector <Car> car;
    Car c;
    DiPan* diPan;
    Tyre* lunTai;
    AGXTj* agxTj;
    SMCam* smCam;
    NineAxisGyroscope* tly;
    MultiLineLidar* multiLineLidar;
    LCDDisplay* lcdDisplay;
    BatteryTemplate* batTem;
    Student* student;
    string carId,diPanId;

    //录入小车信息
    for (int i = 0; i < 10; i++)
    {
        car.push_back(c);
        diPan = car[i].getDiPan();
        lunTai = diPan->getTyre();
        agxTj = car[i].getAGXTj();
        smCam = car[i].getSMCam();
        tly = car[i].getNineAxisGyroscope();
        multiLineLidar = car[i].getMultiLineLidar();
        lcdDisplay = car[i].getLCDDisplay();
        batTem = car[i].getBatteryTemplate();
        student = car[i].getStudent();
        string name,sId;
        cout<<"请输入第"<<i+1<<"辆小车的信息"<<endl;
        cout<<"小车编号 ";
        cin>>carId;
        car[i].setId(carId);
        cout<<"底盘编号 ";
        cin>>diPanId;
        diPan->setId(diPanId);
        diPan->setModel("SCOUT_MINI");diPan->setZhouJu("451mm");diPan->setLunJu("490mm");diPan->setMinJianXi("115mm");diPan->setMinBanjing("0mm");
        diPan->setQuDong("四轮四驱");diPan->setMaxXingcheng("10KM");
        lunTai->setModel("公路轮、麦克纳姆轮");lunTai->setSize("175mm");
        agxTj->setModel("AGX_Xavier");agxTj->setAi("32_TOPS");agxTj->setCuda("512");agxTj->setTensorCore("64");agxTj->setMemory("32G");agxTj->setStorage("32G");
        smCam->setMOdel("RealSense_D435i");smCam->setCamera("D430");smCam->setRgbFenBianLv("1920*1080");smCam->setRgbFps("30");smCam->setFov("8758");smCam->setDepthFps("90");
        multiLineLidar->setModel("RS-Helios-16p");multiLineLidar->setChanNum("16");multiLineLidar->setTestRange("100m");multiLineLidar->setPowerConsum("8W");
        tly->setModel("CH110");tly->setFactory("NXP");
        lcdDisplay->setSize("11.6");lcdDisplay->setModel("super");
        batTem->setParameter("24V/15Ah");batTem->setVoltage("24V");batTem->setTime("2H");
        cout<<"请输入编号为"<<car[i].getId()<<"小车所分配的学生信息"<<endl;
        cout<<"姓名: ";
        cin>>name;
        student->setName(name);
        cout<<"学号: ";
        cin>>sId;
        student->setId(sId);
    }
    
    //初始化。清空carinfo.txt文件中的内容
    ofstream out("carinfo.txt",ios::trunc);
    out.close();
    //将小车信息存入carinfo.txt文件中
    for (int i = 0; i < 10; i++)
    {
        car[i].save();

    }

    vector <vector <string>> cars;
    vector <string> carinfo;
    ifstream inData("carinfo.txt");

    // //从carinfo.txt文件中读取小车信息
    while(!inData.eof())
    {
        for(int i = 0;i < 10;i++){
            for (int j = 0; j < 10; j++){
                string s;
                getline(inData,s);
                carinfo.push_back(s);
            }
            cars.push_back(carinfo);
            carinfo.clear();
        }
           
    }
    inData.close();

    // //显示小车信息
    string input;
    int n=0;
    for (size_t i = 0; i < cars[n].size(); i++)
    {
        cout<<cars[n][i]<<endl;
    }
    do{
        cout<<"请输入n显示下一辆小车信息，输入p显示上一辆小车信息,按其他键退出"<<endl;
        cin>>input;
        if (input=="n")
        {
            if(n<9){
                n++;
                for (size_t i = 0; i < cars[n].size(); i++)
                {
                    cout<<cars[n][i]<<endl;
                }
            }
            else{
                cout<<"已是最后一辆小车，请重新输入"<<endl;
            }
        }
        else if (input=="p")
        {
            if(n>0){
                n--;
                for (size_t i = 0; i < cars[n].size(); i++)
                {
                    cout<<cars[n][i]<<endl;
                }
            }
            else{
                cout<<"已是第一辆小车，请重新输入"<<endl;
            }
        }
        else{
            break;
        }
        
    }while(true);
    
    system("pause");
    return 0;
}