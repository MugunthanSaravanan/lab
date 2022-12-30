#include<iostream>
using namespace std;
class A{
    public:
        int multiplyA(){
            int a=4;
            int b=5;
            int mulA=a*b;
            return mulA;
        }
};
class B:public A{
    public:
        int multiplyB(){
            int c=2;
            return multiplyA()*c;;
        }
};
class C:public B{
    public:
        int multiplyC(){
            int d=10;
            return multiplyB()*d;
        }
};
int main(){
    C obj;
    cout<<"Multiplication from Multiple Classes : "<<obj.multiplyC();
    return 0;
}
