#include<iostream>
#include <exception>
using namespace std;
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    try
    {
        if (age < 18)
            throw age;
        else
            cout << "You are eligible to play\n";
    }
    catch (int age)
    {
        cout << "You are not eligible to play";
    }
    return 0;
}