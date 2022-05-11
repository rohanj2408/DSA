#include<bits/stdc++.h>
using namespace std;

void NtoOne(int n)
{
    if(n<1)     //base condition
    {
        return;
    }

    cout<<n<<" ";
    NtoOne(n-1); //recursion
}

int main()
{
    int n=0;
    cout<<"Enter N: ";
    cin>>n;

    NtoOne(n);
}