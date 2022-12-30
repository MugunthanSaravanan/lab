#include<iostream>
#include<string>
using namespace std;
class ticket
{
    string passenger_name,source,destination;
    string ticket_id;;
    static int counter;
public:
    void input()
    {
        cout<<"enter source : ";
        cin>>source;
        cout<<"enter destination : ";
        cin>>destination;
        cout<<"enter your name :";
        cin>>passenger_name;
    }
    int valid_source_destination()
    {
        if(source=="delhi")
        {
            if(destination=="mummbai" || destination=="pune" || destination=="chennai" || destination=="kolkata")
            {
                return true;
            }
            else
            {
                 false;
            }
        }
    }

    generate_ticket()
    {   
        if(counter==0 && counter<9){
            counter++;
        cout<<"*******ticket*****"<<endl;
        cout<<"ticket id: "<<source[0]<<destination[0]<<counter<<endl;
        cout<<"name : "<<passenger_name<<endl;
        cout<<"source : "<<source<<endl;
        cout<<"destination : "<<destination<<endl;
        cout<<"*******************"<<endl;

        }
    }
};
int ticket :: counter=0;
int main()
{
    ticket t1,t2;
    t1.input();
    if(t1.valid_source_destination()== true)
    {
        t1.generate_ticket();
    }
    else
    {
    cout<<"invalid data is provvided"<<endl;
    }
    t2.input();
    if(t2.valid_source_destination()== true)
    {
        t2.generate_ticket();
    }
    else
    {
    cout<<"invalid data is provvided"<<endl;
    }
    return 0;
}
