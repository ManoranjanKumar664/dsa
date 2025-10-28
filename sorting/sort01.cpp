#include<iostream>
#define value 5
using namespace std;

int a[value];
int front=-1;
void insert(int);
void show();

int main()
{
    insert(40);
    insert(100);
    insert(4000);
    show();
    return 0;
}

void insert(int x)
{
    if(front==value-1)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
    {
        front++;
        a[front]=x;
        cout<<"inserted successfully"<<endl;
    }
}

void show()
{
    cout<<"all elements are:"<<endl;
    if(front==-1)
    {
        cout<<"stack is full"<<endl;
        return;
    }
    else
    {
        int temp=front;
        while(temp>=0)
        {
            cout<<a[temp]<<endl;
            temp--;
        }
    }
}