#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n=0,k=0;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        k+=i;
    }

    cout<<"Sum of "<<n<<" natural numbers is: "<<k;
    return 0; 
}