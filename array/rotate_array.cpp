#include<iostream>
using namespace std;
void swap(int*a , int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(int arr[],int s,int e)
{
    while(s<e)
    {
        swap(&arr[s],&arr[e]);
        s++;
        e--;
    }
}
int main()
{
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int d;
    cout<<"enter no. of rotations ";
    cin>>d;


    // method-1 shift d-1 elements to the right of d to n-1 elements
    // int temp[d];
    // for (int i=0;i<d;i++)
    // {
    //     temp[i]=arr[i];
    // }
    // for (int i=d;i<10;i++)
    // {
    //     arr[i-d]=arr[i];
    // }
    // for (int i=10-d;i<10;i++)
    // {
    //     arr[i]=temp[i-10+d];
    // }
    int temp[10];


    // method-2 by taking modulo
    // for (int i=0;i<9;i++)
    // {
    //     temp[i]=arr[(i+d)%10];
    // }
    // for(int i=0;i<9;i++){   arr[i]=temp[i];}




    // method-3 by reversing (by reversing d-1 elements and then reverssing d to n-1 elements) complete array
    // reverse(arr,0,d-1)
    // reverse(arr,d,n-1)
    // reverse(arr,0,n-1)
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}