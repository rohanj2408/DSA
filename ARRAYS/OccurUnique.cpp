#include<iostream>
using namespace std;

bool unique(int arr[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
        if(ans==0)
        {
            
        }
    }

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

    bool occurrence = unique(arr,n);
    cout<<"ANSWER IS: "<<occurrence;

    return 0;
}