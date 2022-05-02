#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    return 0;
}

void rev(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        swap(arr[start],arr[end]);
    }
    
    cout<<"Array has been reversed!";
}

int main()
{   
    int n=0,arr[100];
    
    cout<<"Enter array size:";
    cin>>n;

    //input array
    cout<<"Enter an array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //duplicate array
    int arr1[100];
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    
    rev(arr1,n);
    printArray(arr1,n);
}