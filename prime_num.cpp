#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int val;
    cout << "Enter value: ";
    cin >> val;
    try
    {
        if (val <= 0)
            throw 5;
        else
        {
            int f = 0;
            for (int i = 2; i < val; i++)
            {
                if (val % i == 0)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                cout << "It is a prime number\n";
            else
                cout << "Not a prime\n";
        }
    }
    catch (int x)
    {
        cout << "Invalid number\n";
    }
    return 0;
}