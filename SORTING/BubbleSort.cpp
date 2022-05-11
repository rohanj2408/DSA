#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[], int n)
{
    int i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"SORTED ARRAY IS :-"<<endl;
    printArray(arr,n);
}

int main()
{
    int n=0,arr[50];

    cout<<"ENTER ARRAY SIZE: ";
    cin>>n;

    cout<<"ENTER ARRAY :-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubbleSort(arr,n);
}