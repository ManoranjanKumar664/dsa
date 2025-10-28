#include<iostream>
using namespace std;
#define max 5

int arr[max];
int front=-1;
void push(int);
void show();
void del();
void delall();
void search(int);

int main()
{
    push(40);
    push(10);
    push(90);
    push(100);
    push(193);
    search(90);
    show();
    del();
    show();
    delall();
    show();
    return 0;
}

//inserting a single element to the stack
void push(int x)
{
    if(front==max-1)
    {
        cout<<"stack is full"<<endl;
        return;
    }
    else
    {
        front++;
        arr[front]=x;
        cout<<"in-serted successfully"<<endl;
        return;
    }
}

//displaying all elements at once
void show()
{
    if(front==-1)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
    {
        int temp=front;
        while(temp>-1)
        {
            cout<<arr[temp]<<endl;
            temp--;
        }
    }
}

//removing a single element from the stack
void del()
{
    if(front==-1)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
    {
        cout<<"deleted element="<<arr[front]<<endl;
        arr[front]=0;
        front--;
        return;
    }
}

//removing all elements from the stack at once
void delall()
{
    if(front==-1)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
/*   
    this is the main method
     else
    {
        while(front>-1)
        {
            arr[front]=0;
            front--;
        }
    } */

// this is the alternate method
    else
    {
        int temp=front;
        while(temp>-1)
        {
            arr[temp]=0;
            temp--;
        }
        front=-1;
    }
}

//searching an element from the stack

void search(int x)
{
    if(front==-1)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
    {
        int temp=front;
        while(temp>-1)
        {
            if(arr[temp]==x)
            {
                cout<<arr[temp]<<": element found"<<endl;
                return;
            }
            temp--;
        }
    }
}