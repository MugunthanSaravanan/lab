#include <iostream>
using namespace std;
class c_polygon
{
public:
    virtual void area()
    {
        cout << "Area using virtual function ";
    }
};
class c_rectangle : public c_polygon
{
public:
    int l, b, a;
    void area()
    {
        cout << "Enter length and breadth of the rectangle: ";
        cin >> l >> b;
        a = l * b;
        cout << "The area of the rectangle is: " << a << endl;
    }
};
class c_triangle : public c_polygon
{
public:
    int h, b, a;
    void area()
    {
        cout << "Enter height and base of the triangle: ";
        cin >> h >> b;
        a = 0.5 * b * h;
        cout << "The area of the triangle is: " << a << endl;
    }
};
int main()
{
    
    c_rectangle r;
    r.area();
    c_triangle t;
    t.area();
    return 0;
}