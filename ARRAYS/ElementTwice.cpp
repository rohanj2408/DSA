#include<iostream>
using namespace std;

int twice(int arr[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i]; //duplicate element becomes 0
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i; //cancels out all numbers except duplicate of reqd. element
    }
    return ans;
}

int main()
{
    int arr[20], n=0;

    cout<<"ENTER ARRAY SIZE:";
    cin>>n;

    cout<<"ENTER ARRAY:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int duplicate = twice(arr,n);
    cout<<"DUPLICATE ELEMENT IS: "<<duplicate;

    return 0;
}