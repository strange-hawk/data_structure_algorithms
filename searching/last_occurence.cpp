#include<iostream>
using namespace std;
int binary(int s, int e, int search, int arr[])
{
    if(s>e)
    {
        return -1;
    }
    int middle=(e+s)/2;
    if((arr[middle]==search) && (middle==0 || arr[middle+1]!=search))
    {
        return middle;
    }
    if(arr[middle]>search)
    {
        return binary(s,middle-1,search,arr);
    }
    else
    {
        return binary(middle+1,e,search,arr);
    }
    
}
int main()
{
    int arr[]={5,9,10,10,10,20,50,60,70,80,90};
    cout<<binary(0,10,10,arr)<<endl;
}