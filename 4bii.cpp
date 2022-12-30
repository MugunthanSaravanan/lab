#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 5
int queue_arr[MAX];
int rear = -1, front = -1;

void enqueue()
{
    int add_item;
    if (rear == (MAX - 1))
    {
        cout << "queue overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        cout << "input the element to enqueue in queue:";
        cin >> add_item;
        rear = rear + 1;
        queue_arr[rear] = add_item;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "queue underflow";
    }
    cout << "element deleted from queue is:" << queue_arr[front];
    front = front + 1;
}

void display()
{
    int i;
    if (front == -1)
    {
        cout << "queue is empty";
    }
    else
    {
        cout << "queue is :";
        for (int i = front; i <= rear; i++)
        {
            cout << queue_arr[i] << endl;
        }
    }
}
int main()
{
    int choice;
    cout << "1 for enqueue" << endl;
    cout << "2 for dequeue" << endl;
    cout << "3 for display" << endl;
    cout << "4 for exit" << endl;
    while (1)
    {
        cout << "\nenter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "wrong choice;";
        }
    }
}
