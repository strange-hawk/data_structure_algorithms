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
int rightoccur(int s, int e, int search, int arr[])
{
    if(s>e)
    {
        return -1;
    }
    int middle=(e+s)/2;
    if((arr[middle]==search) && (middle==9 || arr[middle+1]!=search))
    {
        return middle;
    }
    if(arr[middle]>search)
    {
        return rightoccur(s,middle-1,search,arr);
    }
    else
    {
        return rightoccur(middle+1,e,search,arr);
    }
    
}

int main()
{
    int arr[]={5,9,9,9,9,9,12,13,14,15};
    cout<<rightoccur(0,9,9,arr)-leftoccur(0,9,9,arr)+1<<endl;
}