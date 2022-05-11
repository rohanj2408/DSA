#include<iostream>
#include<stdio.h>
using namespace std;

int i=1;

void f(char str[])
{
    if(i>5)
    {
        return;
    }

    cout<<str;
    i++;
    f(str);
}

int main()
{
    int n; char str[20];

    cout<<"Enter name: ";
    cin>>str;

    cout<<"Enter no. of times to print: ";
    cin>>n;

    f(str);

    return 0;
}