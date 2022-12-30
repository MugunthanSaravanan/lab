#include<iostream>
using namespace std;
class paper
{
  int w,h,perimeter,area;
  public:
          paper()
          {
              cout<<"enter the width of the paper :";
              cin>>w;
              cout<<"enter the height of the paper :";
              cin>>h;
          }

          void calculate()
          {
             area=w*h;
             perimeter=w+h;
          }

          void display()
          {
              cout<<"area of the paper is : "<<area<<endl;
              cout<<"perimeter of the paper : "<<perimeter<<endl;
          }

};

int main()
{
    paper o;
    o.calculate();
    o.display();
    return 0;
}
