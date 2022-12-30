#include <iostream>
using namespace std;
template <typename t>
t power(t x, t y)
{
    y = int(y);
    for (int i = 1; i <= y; i++)
    {
        x=x*x;
    }
    return x;
}
int main()
{
    cout << power<int>(2, 3) << endl;
    cout << power<float>(2.5, 3.5) << endl;
    return 0;
}