#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int start=0;
    int end=4;
    while(start<end)
    {
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
    start=0;
    while(start<5)
    {
        cout<<arr[start]<<" ";
        start++;
    }
}