#include<iostream>
#include<string>
using namespace std;
class employee{

protected:
    string em_name,em_age,em_id ;
    int em_salary,total;
public:
    void getemployee(){
    cout<<"enter employe name :";
    cin>>em_name;
    cout<<"enter employe age :";
    cin>>em_age;
    cout<<"enter employe id :";
    cin>>em_id;
    cout<<"enter basic salary :";
    cin>>em_salary;
    total=em_salary;
    }


};

class allowances:public employee{
protected:
    double hra,da,ta,grossl;
public:
    void calallowances(){
        hra=0.25;
        da=0.05;
        ta=0.30;
    hra=total*hra;
    da=total*da;
    ta=total*ta;
    total=total+hra+da+ta;
    grossl=total;
    }

};

class deductions:public allowances
{
protected :
    double pf,loan;
    char ch;
    int netpy;

public :
    void calded()
    {pf=0.05;
    loan=0;
        pf=total*pf;
        cout<<"do you have loan[y/n]:";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"enter loan percentage:";
            cin>>loan;
            loan=loan/100;
        }
        netpy=total-int(pf)-int(loan);
    }

    void display()
    {
        cout<<"--------------------";
        cout<<endl<<"employee id : "<<em_id;
        cout<<endl<<"employee name : "<<em_name;
        cout<<endl<<"employee age : "<<em_age;
        cout<<endl<<"basic salary : "<<em_salary;
        cout<<endl<<"gross salary : "<<grossl;
        cout<<endl<<"net pay :"<<netpy;
    }



};

int main()
{

    deductions d;
    d.getemployee();
    d.calallowances();
    d.calded();
    d.display();
    return 0;
}
