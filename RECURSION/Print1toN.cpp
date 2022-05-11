#include<bits/stdc++.h>
using namespace std;

void OneToN(int i,int n)
{
    if(i>n)     //base condition
    {
        return;
    }

    cout<<i<<" ";
    OneToN(i+1,n); //recursion
}

int main()
{
    int n=0;
    cout<<"Enter N: ";
    cin>>n;

    OneToN(1,n);
}