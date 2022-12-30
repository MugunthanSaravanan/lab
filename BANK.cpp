#include<iostream>
#include<string>
using namespace std;
class bank
{
private:
    int id;
    string name;
    int acc_no;
    float bal;
    static float roi;
public:
    bank()
    {
        cout<<"enter the customer ID :";
        cin>>id;
        cout<<"enter the customer Name :";
        cin>>name;
        cout<<"enter the account number :";
        cin>>acc_no;
        cout<<"enter balance :";
        cin>>bal;
    }

    void display()
    {
        cout<<"\n name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"account number : "<<acc_no<<endl;
	cout<<"Account balance :"<<bal<<endl;
        float res=calculate(bal);
        
        cout<<"updated balance : "<<res<<endl;
    }

    static float calculate(float b)
    {
        float ub=0;
        if(b>=10000)
        {
            cout<<"\n balance in static fine :"<<b;
            ub=b+(b*roi);
            cout<<"\n eligble :"<<ub<<endl;
            return ub;
        }
        cout<<"\n not eligble : "<<endl;
        return b;
    }
};

float bank :: roi=0.12;

int main()
{
    bank o;
    o.display();
    return 0;
}
