#include<iostream>
#include<vector>
using namespace std;
// void search(vector<int>&, int);
void search(int);
int a[10]={49, 30, 59, 10, 50, 100, 89, 73, 69};

int main()
{
    int i=0;
    while(i<=(sizeof(a)/4)-1)
    {
        cout<<a[i]<<" ";
        i++;
    }
    // search(a, 50);
    search(50);
    return 0;
}

// void search(vector<int> &x, int y)
void search(int y)
{
    int i=0;
    int f=0;
    int s=(sizeof(y)/4);
    while(i<10)
    {
        if(a[i]==y)
        {
            cout<<"\nelement found";
            f++;
            return;
        }
        if(f==1)
        {
            cout<<"\nelement not found";
        }
        i++;
    }
}