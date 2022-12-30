#include<iostream>
#include<stdlib.h>
using namespace std;
#define Max 5
int top=-1;
int back=-1;
int stack[Max];
void push();
void pop();
void display();
int main()
{
    int choice;
    cout<<"1 for push"<<endl;
        cout<<"2 for pop"<<endl;
        cout<<"3 for display"<<endl;
        cout<<"4 for exit"<<endl;
    while(1)
    {
        cout<<"\nenter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout<<"wrong choice;";
        }

    }

}
void push()
{
    int push_item;
    if(top==(Max-1))
    {
        cout<<"stack overflow";
    }
    else
    {
        cout<<"enter element to be placed in stack";
        cin>>push_item;
        top=top+1;
        stack[top]=push_item;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow";
    }
    else{
    cout<<"poped element"<<stack[top]<<endl;
    top=top-1;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"no elements in stack";
    }
    else{
    cout<<"element in top:"<<stack[top]<<endl;
}}
