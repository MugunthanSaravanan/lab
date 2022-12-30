#include<iostream>
using namespace std;
template<class t>
class largest
{	
     t x,y,z;
public:
    largest(t xx,t yy,t zz )
    {
        x=xx;
        y=yy;
        z=zz;
    }
    void display()
    {
        cout<<greater()<<endl;
    }
    t greater(){return (x>y&&x>z)?x: (y>z)?y: z;}

};
int main()
{
    largest<int> intlar(2,3,4);
    largest<double> doublelar(2.5,3.5,4.5);
    largest<char> charlar('a','b','c');
    cout<<"int results:"<<endl;
    intlar.display();
    cout<<endl<<"double results:"<<endl;
    doublelar.display();
    cout<<endl<<"char:"<<endl;
    charlar.display();
    return 0;
}