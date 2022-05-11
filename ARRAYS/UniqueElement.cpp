#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans = ans^arr[i];
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

    int UniqueElement = unique(arr,n);
    cout<<"UNIQUE ELEMENT IS: "<<UniqueElement;

    return 0;
}