#include <iostream>
using namespace std;

class rectangle{
    public:
    float l,b;
        void get(){
        cout<<"Enter Length of the Rectangle  : ";cin>>l;
        cout<<"Enter Breadth of the Rectangle : ";cin>>b;
    }
    virtual void calculate(){
        float p=2.0;
        float k=l+b;
        float per=p*k;
        cout<<"Perimetre of the Rectangle : "<<per;
    }
};
int main() {
    rectangle rec;
    rec.get();
    rec.calculate();

    return 0;
}