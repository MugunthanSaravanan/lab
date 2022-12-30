#include <iostream>

using namespace std;
struct NODE
{
    int data;
    struct NODE *next;
} *top = NULL;

void push()
{
    struct NODE *temp;
    int push_item;
    temp = new struct NODE;
    cout << "enter the value to be pushed:";
    cin >> push_item;
    temp->data = push_item;
    temp->next = top;
    top = temp;
}

void pop()
{
    struct NODE *temp;
    if (top == NULL)
    {
        cout << "stack is empty";
    }
    else
    {
        temp = top;
        cout << endl
             << "popped item is" << temp->data << endl;
        top = top->next;
        delete temp;
    }
}

void display()
{
    struct NODE *temp;
    if (top == NULL)
    {
        cout << "stack is empty";
    }
    else
    {

        cout << "the element in the top of stack is:" << endl;
        temp = top;
        cout << temp->data;
        temp = temp->next;
    }
}

int main()
{
    int n;
    cout << "enter no of elements in stack";
    cin >> n;
    while (n != 0)
    {
        push();
        n--;
    }
    display();
    pop();
    display();
}