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

    //¼��С����Ϣ
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
        cout<<"�������"<<i+1<<"��С������Ϣ"<<endl;
        cout<<"С����� ";
        cin>>carId;
        car[i].setId(carId);
        cout<<"���̱�� ";
        cin>>diPanId;
        diPan->setId(diPanId);
        diPan->setModel("SCOUT_MINI");diPan->setZhouJu("451mm");diPan->setLunJu("490mm");diPan->setMinJianXi("115mm");diPan->setMinBanjing("0mm");
        diPan->setQuDong("��������");diPan->setMaxXingcheng("10KM");
        lunTai->setModel("��·�֡������ķ��");lunTai->setSize("175mm");
        agxTj->setModel("AGX_Xavier");agxTj->setAi("32_TOPS");agxTj->setCuda("512");agxTj->setTensorCore("64");agxTj->setMemory("32G");agxTj->setStorage("32G");
        smCam->setMOdel("RealSense_D435i");smCam->setCamera("D430");smCam->setRgbFenBianLv("1920*1080");smCam->setRgbFps("30");smCam->setFov("8758");smCam->setDepthFps("90");
        multiLineLidar->setModel("RS-Helios-16p");multiLineLidar->setChanNum("16");multiLineLidar->setTestRange("100m");multiLineLidar->setPowerConsum("8W");
        tly->setModel("CH110");tly->setFactory("NXP");
        lcdDisplay->setSize("11.6");lcdDisplay->setModel("super");
        batTem->setParameter("24V/15Ah");batTem->setVoltage("24V");batTem->setTime("2H");
        cout<<"��������Ϊ"<<car[i].getId()<<"С���������ѧ����Ϣ"<<endl;
        cout<<"����: ";
        cin>>name;
        student->setName(name);
        cout<<"ѧ��: ";
        cin>>sId;
        student->setId(sId);
    }
    
    //��ʼ�������carinfo.txt�ļ��е�����
    ofstream out("carinfo.txt",ios::trunc);
    out.close();
    //��С����Ϣ����carinfo.txt�ļ���
    for (int i = 0; i < 10; i++)
    {
        car[i].save();

    }

    vector <vector <string>> cars;
    vector <string> carinfo;
    ifstream inData("carinfo.txt");

    // //��carinfo.txt�ļ��ж�ȡС����Ϣ
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

    // //��ʾС����Ϣ
    string input;
    int n=0;
    for (size_t i = 0; i < cars[n].size(); i++)
    {
        cout<<cars[n][i]<<endl;
    }
    do{
        cout<<"������n��ʾ��һ��С����Ϣ������p��ʾ��һ��С����Ϣ,���������˳�"<<endl;
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
                cout<<"�������һ��С��������������"<<endl;
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
                cout<<"���ǵ�һ��С��������������"<<endl;
            }
        }
        else{
            break;
        }
        
    }while(true);
    
    system("pause");
    return 0;
}