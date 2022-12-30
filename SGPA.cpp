#include<iostream>
using namespace std;
class student;
class sub{
    private:
        int credit[6];
        int grade[6];
    public:
        sub()
        {
            cout<<"enter thr credits : "<<endl;
            cout<<"maths : ";
            cin>>credit[0];
            cout<<"DLD : ";
            cin>>credit[1];
            cout<<"physics : ";
            cin>>credit[2];
            cout<<"chemistry : ";
            cin>>credit[3];
            cout<<"computer architecture : ";
            cin>>credit[4];
            cout<<"data structure : ";
            cin>>credit[5];
            cout<<endl<<"enter the grade : "<<endl;
            cout<<"maths : ";
            cin>>grade[0];
            cout<<"DLD : ";
            cin>>grade[1];
            cout<<"physics : ";
            cin>>grade[2];
            cout<<"chemistry : ";
            cin>>grade[3];
            cout<<"computer architecture : ";
            cin>>grade[4];
            cout<<"data structure : ";
            cin>>grade[5]; 
        }
    friend class student;    
};

class student{
    private:
        int st_id;
        string st_name,dept,year;
    public:
        student()
        { }
        student(sub x)
        {
            cout<<endl<<"SGPA : "<<endl;
            cout<<"maths : "<<x.credit[0]*x.grade[0]<<endl;
            cout<<"dld : "<<x.credit[1]*x.grade[1]<<endl;
            cout<<"physics : "<<x.credit[2]*x.grade[2]<<endl;
            cout<<"chemistry : "<<x.credit[3]*x.grade[3]<<endl;
            cout<<"CA : "<<x.credit[4]*x.grade[4]<<endl;
            cout<<"DS : "<<x.credit[5]*x.grade[5]<<endl;
        }
        friend class sub;
};

int main()
{
    sub sb1;
    student s1(sb1);
    return 0;
}