#include <iostream>
#include <stdlib.h>
using namespace std;
int len = 0;
struct NODE
{
    int data;
    struct NODE *next;
    struct NODE *prev;

} *start = NULL, *newNODE = NULL, *currentNODE = NULL;

void createNODE()
{
    newNODE = new struct NODE;
    cout << "Enter the data :";
    cin >> newNODE->data;
    newNODE->next = NULL;
    newNODE->prev = NULL;
    if (start == NULL)
    {
        start = newNODE;
        currentNODE = newNODE;
    }
    else
    {
        currentNODE->next = newNODE;
        newNODE->prev = currentNODE;
        currentNODE = newNODE;
    }
}

void displayNODE()
{
    struct NODE *temp = start;
    if (start == NULL)
    {
        cout << "there are no elelments";
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

void searchNODE()
{
    struct NODE *temp = start;
    int val, count = 0;
    cout << "\nenter the value you want to search :";
    cin >> val;
    while (temp != NULL)
    {
        if (val == temp->data)
        {
            count++;
        }
        temp = temp->next;
    }
    if (count > 0)
    {
        cout << "\n the given element" << val << "is present";
    }
    else
    {
        cout << "element not found";
    }
}

int length()
{

    struct NODE *temp = start;
    while (temp != NULL)
    {
        len = len + 1;
        temp = temp->next;
    }
}

void insert()
{
    struct NODE *temp = start;
    int val, pos;
    cout << "enter position";
    cin >> pos;
    if (pos > 0 && pos <= len + 1)
    {
        newNODE = new struct NODE;
        newNODE->prev = NULL;
        newNODE->next = NULL;
        cout << "enter the data: ";
        cin >> newNODE->data;

        if (pos == 1)
        {
            temp->prev = newNODE;
            newNODE->next = start;
            start = newNODE;
        }
        else if (pos == (len + 1))
        {
            while (temp != NULL)
            {
                temp = temp->next;
            }
            newNODE->prev = temp;
            temp->next = newNODE;
        }
        else
        {
            while (pos > 2)
            {
                temp = temp->next;
                pos--;
            }
            newNODE->next = temp->next;
            newNODE->prev = temp;
            temp->next = newNODE;
        }
    }
    else
    {
        cout << "invalid position to insert element!!";
    }
}

void deleteNODE()
{
    int pos;
    struct NODE *temp = start;
    if (pos > 0 && pos <= len + 1)
    {
        cout << "enter the position to delete:";
        cin >> pos;
        if (pos == 1)
        {
            start = start->next;
            start->prev = NULL;
            delete temp;
        }
        else if (pos == (len + 1))
        {
            while (temp->next = NULL)
            {
                temp = temp->next;
            }
            delete (temp);

            temp->next = NULL;
        }
        else
        {
            while (pos > 2)
            {
                temp->next;
                pos--;
            }
            newNODE = temp->next;
            temp->next = newNODE->next;
            newNODE->next->prev = temp;
            delete (newNODE);
        }
    }
}

void display_backward()
{
    struct NODE *temp = start;
    if (start = NULL)
    {
        cout << "empty list";
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        cout << "reverse order:";
        cout << temp->data << endl;
        while (temp->prev != NULL)
        {
            temp = temp->prev;
            cout << temp->data << endl;
        }
    }
}

int main()
{
    int n;
    cout << "enter no of data :";
    cin >> n;
    while (n != 0)
    {
        createNODE();
        n--;
    }
    displayNODE();
    searchNODE();
    cout << "\nlength of the list :" << length() << endl;
    insert();
    cout << "\nafter inserting";
    displayNODE();
    deleteNODE();
    cout << "\nafter delting" << endl;
    displayNODE();
    display_backward();
    return 0;
}
