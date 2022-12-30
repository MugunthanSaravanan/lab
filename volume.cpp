#include<iostream>
using namespace std;
class volume
{
  float cube,cuboid,cone,sphere;
  public:
      volume()
      {
      }
      void cubevol(float s)
      {
          cube=s*s*s;
          cout<<"volume of cube="<<cube<<endl;
      }
      void cuboidvol(float l,float w,float h)
      {
          cuboid=l*w*h;
          cout<<"volume of cuboid="<<cuboid<<endl;
      }
      void conevol(float b,float h,float l)
      {
          cone=(b*h*l)/2;
          cout<<"volume of cone="<<cone<<endl;
      }
      void spherevol(float r)
      {
          sphere=(4*3.14*r*r*r)/3;
          cout<<"volume of sphere="<<sphere;
      }
};
int main()
{
    volume v1;
    v1.cubevol(2);
    v1.cuboidvol(2,3,4);
    v1.conevol(2,3,4);
    v1.spherevol(2);

}