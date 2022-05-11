#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int &a, int &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}

void sort(int arr[], int n)
{
    int i,j,min_idx;

    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            min_idx=j;
        }
        swap(arr[i],arr[min_idx]);
    }
    printArray(arr,n);

}

int main()
{
    int i,j,min_idx;

    int arr[20],n=0;
    cout<<"ENTER ARRAY SIZE: ";
    cin>>n;
    cout<<"ENTER ARRAY :-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,n);

}


