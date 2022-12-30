#include <iostream>
using namespace std;
class Bank
{
public:
    string cust_acc, cust_name;
    int p, n;
    virtual void interest() = 0;
    void input()
    {
        cout << "Enter Account number : ";
        cin >> cust_acc;
        cout << "Enter Name : ";
        cin >> cust_name;
        cout << "Enter balance : ";
        cin >> p;
        cout << "Enter duration : ";
        cin >> n;
    }
    void display()
    {
        cout << "Account number : " << cust_acc << endl;
        cout << "Name : " << cust_name << endl;
        cout << "Old Balance : " << p << endl;
    }
};
class IOBbank : public Bank
{
public:
    float r;
    
    int newb, SI;
    void interest()
    {r=0.8;
        SI = (p * n * r) / 100;
        newb = SI + p;
        cout << "IOB bank : " << endl;
        cout << "Interest Rate : " << SI << endl;
        cout << "Balance : " << newb << endl<<endl;
    }
};
class ICICIbank : public Bank
{
public:
    float r;
    
    int newb, SI;
    void interest()
    {r = 0.9;
        SI = (p * n * r) / 100;
        newb = SI + p;
        cout << "ICICI Bank : " << endl;
        cout << "Interest Rate : " << SI << endl;
        cout << "Balance : " << newb << endl<<endl;
    }
};
class SBIbank : public Bank
{
public:
    float r;
    
    int newb, SI;
    void interest()
    {r = 0.7;
        SI = (p * n * r) / 100;
        newb = SI + p;
        cout << "SBI Bank : " << cout << "Interest Rate : " << SI << endl;
        cout << "Balance : " << newb << endl<<endl;
    }
};
int main()
{

    IOBbank a;
    a.input();
    a.interest();
    a.display();
    ICICIbank b;
    b.input();
    b.interest();
    b.display();
    SBIbank c;
    c.input();
    c.interest();
    c.display();
}