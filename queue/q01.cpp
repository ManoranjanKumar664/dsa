#include<iostream>
#define max 5
using namespace std;
int front=-1;
int rear=-1;
int a[max];
void insert(int);
void show();
void del();
void delall();

int main()
{
    insert(40);
    insert(10);
    insert(50);
    insert(60);
    insert(70);
    insert(400);
    show();
    del();
    show();
    del();
    show();
    delall();
    show();
    insert(2000);
    show();
    return 0;
}

void delall()
{
    if(rear==-1)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    else
    {
        while(rear<=front)
        {
            a[rear]=0;
            rear++;
        }
        cout<<"all elements deleted"<<endl;
        rear=-1;
        front=-1;
    }
}

void insert(int x)
{
    int s=sizeof(a)/4;
    if(front==(s-1))
    {
        cout<<"queue is full"<<endl;
        return;
    }
    else
    {
        front++;
        a[front]=x;
        cout<<"element inserted"<<endl;
    }
    if(rear==-1)
     rear++;
}

void show()
{
    if(rear==-1)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    else
    {
        cout<<"all elements are:"<<endl;
        int temp=rear;
        while(temp<=front)
        {
            cout<<a[temp]<<" ";
            temp++;
        }
        cout<<endl;
    }
}

void del()
{
    if(rear==-1)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    else
    {
        a[rear]=0;
        cout<<"element deleted"<<endl;
        rear++;
    }
    if(front==rear)
    {
        a[rear]=0;
        cout<<"element deleted"<<endl;
        front=-1;
        rear=-1;
    }
}