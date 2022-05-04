#include<iostream>
using namespace std;

int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    return 0;
}

int rev(int arr[], int n)
{
    int i = 0;
    int j = n-1;

    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    cout<<"Array has been reversed!"<<endl;
    return 0;
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
    cout<<"Reversed array is: "<<endl;
    printArray(arr1,n);
}