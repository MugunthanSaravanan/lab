#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    string st_name, roll_no;

public:
    void get_student()
    {
        cout << "enter student name :";
        cin >> st_name;
        cout << "enter roll no: ";
        cin >> roll_no;
    }
};

class testmarks
{
protected:
    int tamilm, engm, matm, scim, socm, tot;
    double avg;

public:
    void gettest()
    {
        cout << "enter tamil marks : ";
        cin >> tamilm;

        cout << "enter englis marks : ";
        cin >> engm;

        cout << "enter maths marks : ";
        cin >> matm;

        cout << "enter science marks : ";
        cin >> scim;

        cout << "enter social marks : ";
        cin >> socm;
    }

    void calc()
    {
        tot = tamilm + engm + matm + scim + socm;
        avg = tot / 5;
    }
};

class sports
{
protected:
    int km, tm, st;

public:
    void getsportsdata()
    {
        cout << "enter the points scored in kabbadi(out of 100)";
        cin >> km;
        cout << "enter the points scored in tennis(out of 100)";
        cin >> tm;
        st = km + tm;
    }
};

class result : public student, public testmarks, public sports
{
public:
    void display()
    {
        cout << "name :" << st_name << endl;
        cout << "roll no : " << roll_no << endl;
        cout << "subject total : " << tot << endl;
        cout << "subject average : " << avg << endl;
        cout << "sports total : " << st << endl;
    }
};

int main()
{
    result r;
    r.get_student();
    r.gettest();
    r.calc();
    r.getsportsdata();
    r.display();
    return 0;
}
