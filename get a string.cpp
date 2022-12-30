#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    char a[100];
    int c = 0, len = 0;
    cout << "Enter a string : ";
    cin >> a;
    len = strlen(a);
    char ch[len];
    fstream file;
    file.open("char.txt", ios::out);
    for (int i = 0; i < len; i++)
    {
        file.put(a[i]);
    }
    file.close();
    file.open("char.txt", ios::in);
    file >> ch;
    cout << ch;
    c=strlen(ch);
    cout << "\nThe total number of char is " << c;
    return 0;
}