#include<iostream>
using namespace std;
class Time{
    int hh,mm,ss;
public:
    Time()
    {
       hh=0;
       mm=0;
       ss=0; 
    }
    Time(int h=5,int m=4,int s=0)
    {
        hh=h;
        mm=m;
        ss=s;
    }
    Time(Time t1,Time t2)
    {
       int addedhr=t1.hh+t2.hh;
       int addedmin=t1.mm+t2.mm;
       int addedsec=t1.ss+t2.ss;
       if(addedsec>60){
    addedmin+=(addedsec)/60;
    addedsec-=60;
       }
       if(addedmin>60){
    addedhr+=(addedmin)/60;
    addedmin-=60;
       }
       cout<<"Added time : \n"<<addedhr<<":"<<addedmin<<":"<<addedsec<<endl;

    }
};

int main()
{
    int h1,m1,s1,h2,m2,s2;
    cout<<"Hour    1 : ";cin>>h1;
    cout<<"Minutes 1 : ";cin>>m1;
    cout<<"Seconds 1 : ";cin>>s1;
    cout<<"Hour    2 : ";cin>>h2;
    cout<<"Minutes 2 : ";cin>>m2;
    cout<<"Seconds 2 : ";cin>>s2;
    Time t1(h1,m1,s1),t2(h2,m2,s2);
    Time t3(t1,t2);
    
    return 0;
}
