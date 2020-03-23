#include<iostream>
using namespace std;
int main()
{
    int arr[10]={4,5,86,2,80,56,23,98,67,89};
    int max=arr[9];
    cout<<max<<" ";
    for (int i=8;i>=0;i--)
    {
        if (arr[i]>max)
        {
            cout<<arr[i]<<" ";
            max=arr[i];
        }
    }
}