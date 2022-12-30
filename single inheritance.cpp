#include<iostream>
#include<stdlib.h>
using namespace std;
class price
{
    protected:
    string rice,horlicks,boost;
    const static int r=150,h=200,b=170;
    int rq,hq,bq;

    public:
        void getitems(){
        cout<<"enter the quantity of rice :";
        cin>>rq;
        cout<<"enter the quantity of horlicks :";
        cin>>hq;
        cout<<"enter the quantity of boost";
        cin>>bq;
        }

};

class bill:public price{

protected :
    int rp,hp,bp,total;
public :
    void calculate(){
        rp=r*rq;
        hp=h*hq;
        bp=b*bq;
        total=rp+hp+bp;
    }

    void displayprice(){
    cout<<"total price of rice :"<<rp<<endl;
    cout<<"total price of horlicks :"<<hp<<endl;
    cout<<"total price of boost :"<<bp<<endl;
    cout<<"total "<<total;
    }
};

int main()
{
    bill b1;
    b1.getitems();
    b1.calculate();
    b1.displayprice();
    return 0;
}
