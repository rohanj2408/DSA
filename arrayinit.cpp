#include<iostream>
using namespace std;

int main()
{
    int arr[10],i;
    //std:fill_n(arr,10,-1);
     
     for(i=0;i<10;i++)
    {
        arr[i]=24;
    }

    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}