#include<iostream>
using namespace std;

int printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

int swap(int &a, int &b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    return 0;
}

int alternate(int arr[], int n)
{
    int i=0;
    while(i<n-1)
    {
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
    return 0;
}

int main()
{
    int arr[20],n=0;

    cout<<"Enter array size: ";
    cin>>n;
    
    cout<<"Enter an array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Your array is:-"<<endl;
    printArray(arr,n);

    alternate(arr,n); //swapping
    cout<<endl<<"Swapped array is:-"<<endl;
    printArray(arr,n);

}