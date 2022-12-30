#include <iostream>
using namespace std;
struct NODE
{
    int data;
    struct NODE *next;
} *front = NULL, *rear = NULL;

void enqueue()
{
    struct NODE *temp;
    temp = new struct NODE;
    cout << "enter queue element:";
    cin >> temp->data;
    temp->next = NULL;
    if (rear == NULL || front == NULL)
    {
        front = temp;
    }
    else
    {
        rear->next = temp;
    }
    rear = temp;
}

void dequeue()
{
    struct NODE *temp;
    if (front == NULL || rear == NULL)
    {
        cout << "underflow";
    }
    else
    {
        temp = front;
        cout << endl
             << "dequed element :" << temp->data<<endl;
        front = front->next;
        delete (temp);
    }
}

void display()
{
    struct NODE *temp;
    temp = front;
    if (front == NULL || rear == NULL)
    {
        cout << endl
             << "queue is empty";
    }
    else
    {
        cout << "front element :" << temp->data;
        temp = temp->next;
    }
}
int main()
{
    int n;
    cout << "enter no of elements in queue :";
    cin >> n;
    while (n != 0)
    {
        enqueue();
        n--;
    }
    display();
    dequeue();
    display();
}