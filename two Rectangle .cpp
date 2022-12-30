#include<iostream>
using namespace std;
class rec
{
    int l,b;
public:
    rec()
    {
        l=0;
        b=0;
    }
    rec(int lenght,int breadth)
    {
        l=lenght;
        b=breadth;
    }
    void display()
    {
        cout<<"rectangle added="<<l<<","<<b<<endl;
    }
    friend rec operator +(rec r1,rec r2);
};
rec operator +(rec r1,rec r2)
{
    rec r3;
    r3.l=r1.l+r2.l;
    r3.b=r1.b+r2.b;
    return r3;
}
int main()
{
    rec r1(2,3);
    rec r2(4,5);
    rec r3=r1+r2;
    r3.display();	
}
