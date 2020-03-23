#include<iostream>
using namespace std;
int leftoccur(int s, int e, int search, int arr[])
{
    if(s>e)
    {
        return -1;
    }
    int middle=(e+s)/2;
    if((arr[middle]==search) && (middle==0 || arr[middle-1]!=search))
    {
        return middle;
    }
    if(arr[middle]>=search)
    {
        return leftoccur(s,middle-1,search,arr);
    }
    else
    {
        return leftoccur(middle+1,e,search,arr);
    }
    
}


int main()
{
    int arr[]={0,0,0,0,0,1,1,1,1,1};
    cout<<10-leftoccur(0,9,1,arr)<<endl;
}