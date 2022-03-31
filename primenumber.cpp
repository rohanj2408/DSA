#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n=0,k=0;

    cout<<"This is a program to check if a number is prime!"<<endl;

    cout<<"ENTER NUMBER:";
    cin>>n;
    
    for(int i=1;i<n;i++) //check 1 to (n-1), if factor is only 1 then prime
    {
        if(n%i==0)
        {
            k++;
        }
        else
        {
            continue;
        }
    }

    if(k==1)
    {
        cout<<n<<" is a prime number!";
    }
    else
    {
        cout<<n<<" is not a prime number!"<<endl;
    }
    
    return 0;
}