#include<iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int max = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

return max;
}

int main()
{
    int a[10]={3,5,6,8,10};
    int maximum = getMax(a,sizeof(a)/sizeof(int));
    //printing array
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"MAXIMUM ELEMENT IS:"<<maximum;

    return 0;
}

