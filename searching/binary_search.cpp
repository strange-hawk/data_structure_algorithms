#include<iostream>
using namespace std;
bool binary(int s, int e, int search, int arr[])
{
    if(s>e)
    {
        return false;
    }
    int middle=s+(e-s)/2;
    if( search > arr[middle])
    {
        return binary(middle+1,e,search,arr);
    }
    else if(search < arr[middle])
    {
        return binary(s,middle-1,search,arr);
    }
    else
    {
        return true;
    }
    
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    cout<<binary(0,8,10,arr)<<endl;
}