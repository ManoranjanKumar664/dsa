#include<iostream>
using namespace std;
#define max 9
int arr[max];
int front=-1;
void insert(int);
void insertall();

void search(int x);

int main()
{
    insert(40);
    insert(10);
    insert(100);
    insert(90);
    insert(70);
    insert(60);
    insert(90);
    insertall();
    return 0;    
}

void insertall()
{
    if(front==max-1)
    {
        cout<<"stack is full"<<endl;
        return;
    }
    else
    {
        for(int i=front+1; i<max; i++)
        {
            arr[i]=i+2;
        }
    }
}

void insert(int x)
{
    if(front==max-1)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
    {
        front++;
        arr[front]=x;
        cout<<"inserted successful"<<endl;
    }
}