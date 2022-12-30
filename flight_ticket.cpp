#include <iostream>

using namespace std;
class flight
{
    int flight_no, fare, cus_id, age, x, y, z;
    string source, destination, airline_name, name;

public:
flight(int a,string h,int d,string s,string f,int cid){
    flight_no = a;
    name = h;
    source = s;
    destination = f;
    age = d;
    cus_id=cid;
    if (flight_no == 1)
    {
        kingfisher();
        display();
    }
    else if (flight_no == 2)
    {
        Airindia();
        display();
    }
}
    flight(flight &p1)
    {
        x=p1.flight_no;
    }
    void kingfisher();
    void Airindia();
    void display();
};

void flight::kingfisher()
{
    if(age>=1 && age<=5)
    {
        fare=1000;
    }
    else if(age>=5 && age<=18)
    {
        fare=2500;
    }
    else if(age>=19&& age<=55)
    {
        fare=5000;
    }
    else if(age>55)
    {
        fare=3000;
    }
}
void flight::Airindia()
{
    if(age>=1&&age<=5)
    {
        fare=0;
        cout<<fare;
    }
    else if(age>5&&age<=18)
    {
        fare=2500;
        fare=fare-((fare)*50/100);
    }
    else if(age>=19&& age<=55)
    {
        fare=5000;
        fare=fare-((fare)*10/100);
    }
    else if(age>55)
    {
        fare=3000;
        fare=fare-((fare)*20/100);
    }
}
void flight::display()
{
    cout<<"ticket cinfirmed"<<endl;
    
    cout<<"name:"<<name<<endl;
    cout<<"customer id : "<<cus_id<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"source:"<<source<<endl;
    cout<<"destination:"<<destination<<endl;
    cout<<"fare:"<<fare<<endl;
}
int main()
{
    flight p1(1,"batman",21,"pune","chennai",5);
}