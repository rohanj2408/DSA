#include<iostream>
using namespace std;

bool search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int array[5],k=0;
    //input array
    cout<<"Enter array:-"<<endl;
    for(int i =0;i<5;i++)
    {
        cin>>array[i];
    }
    //input key
    cout<<"Enter element to search:";
    cin>>k;
    //check
    bool result = search(array,5,k);
    if(result==1)
    {
        cout<<"Element found!"<<endl;
    }  
    else
    {
        cout<<"Element not found!"<<endl;
    }
    return 0;
}