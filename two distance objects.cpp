#include<iostream>
using namespace std;
class dis
{
    int f,i;
public:
    dis()
    {
        f=0;
        i=0;
    }
    dis(int feet,int inche)
    {
        f=feet;
        i=inche;
    }
    dis operator +(dis d2)
    {
        dis d3;
        d3.f=f+d2.f;
        d3.i=i+d2.i;
        return d3;
    }
    bool operator ==(dis d2)
    {
        if(f==d2.f&&i==d2.i)
            return true;
        else
            return false;
    }
    void display()
    {
        cout<<"distance added="<<f<<"."<<i<<endl;
    }
};
int main()
{
    dis d1(5,6);
    dis d2(3,4);
    dis d3=d1+d2;
    if(d1==d2)
            cout<<"it has equal distance"<<endl;
        else
            cout<<"it doesn't have equal distance"<<endl;
    d3.display();
}
