#include<iostream>
using namespace std;
void insert(int);
void showelem();
void removefirst();
void removelast();
void removeall();

struct node
{
    int data;
    node *next;
};
node *root=0;


int main()
{
    insert(10);
    insert(20);
    // showelem();
    insert(499);
    insert(90);
    insert(700);
    removeall();
    // showelem();
    // removelast();
    // showelem();
    // removefirst();
    showelem();
    removelast();
    showelem();
    return 0;
}

void removeall()
{
    if(root==0)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        node *temp=root;
        node *prev=0;
        while(temp->next!=0)
        {
            prev=temp;
            temp=temp->next;
            delete prev;
        }
    }
}

void removefirst()
{
    if(root==0)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        node *temp=root;
        root=root->next;
        delete temp;
    }
}

void removelast()
{
    if(root==0)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        node *temp=root;
        node *prev=root;
        while(temp->next!=0)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=0;
        delete temp;
        cout<<"element removed successfully"<<endl;
    }
}

void insert(int x)
{
    node *n=new node;
    n->data=x;
    n->next=0;
    if(root==0)
    {
        root=n;
    }
    else
    {
        node *temp=root;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=n;
        cout<<"element successfully addded"<<endl;
    }
}

void showelem()
{
    if(root==0)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        node *temp=root;
        cout<<"all elements are:"<<endl;
        while(temp!=0)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}