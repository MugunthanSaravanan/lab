#include<iostream>
using namespace std;
int main()
{
    int h1,h2,m1,m2,s1,s2;
    cout<<"Enter Hour 1 : ";
    cin>>h1;
    cout<<"Enter Min 1 : ";
    cin>>m1;
    cout<<"Enter Sec 1 : ";
    cin>>s1;
    cout<<"Enter Hour 2 : ";
    cin>>h2;
    cout<<"Enter Min 2 : ";
    cin>>m2;
    cout<<"Enter Sec 2 : ";
    cin>>s2;

    int addh,addm,adds;
    addh=h1+h2;
    addm=m1+m2;
    adds=s1+s2;
    if(addm>=60){
        addh++;
        addm-=60;
    }
    if(adds>=60){
        addm++;
        adds-=60;
    }
    cout<<addh<<" : "<<addm<<" : "<<adds;
}
