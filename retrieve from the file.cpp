#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    char name[100], sex;
    int age;
    float height, weight;
    void read()
    {
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "\nEnter Age: ";
        cin >> age;
        cout << "\nEnter sex(f/m): ";
        cin >> sex;
        cout << "\nEnter height: ";
        cin >> height;
        cout << "\nEnter weight: ";
        cin >> weight;
    }
};
int main()
{
    int n;
    cout << "Enter how many records are to be stored:";
    cin >> n;
    student s[n];
    fstream file;
    file.open("F:\\c++\\STUDENTDATA.txt", ios::in | ios::out);
    for (int i = 0; i < n; i++)
    {
        s[i].read();
    }
    cout << "Displaying the contents of the file\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        file << "\n\nName: " << s[i].name << "\nAge: " << s[i].age << "\nGender: "
             << s[i].sex << "\nHeight : " << s[i].height << "\nWeight : " << s[i].weight << endl;
        cout << "\n\nName: " << s[i].name << "\nAge: " << s[i].age << "\nGender: "
             << s[i].sex << "\nHeight : " << s[i].height << "\nWeight : " << s[i].weight << endl;
    }
    file.close();
    return 0;
}
