#include<iostream>
using namespace std;
long int func(int arr[],int n)
{
    int left[n];
    int right[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }
    long int total=0;
    for( int i=0;i<n;i++)
    {
        total += min(left[i],right[i])-arr[i];
    }
    return total;
}
int main()
{
    int arr[41]={467,334,500,169, 724, 478, 358, 962, 464 ,705, 145, 281, 827, 961, 491, 995, 942 ,827, 436 ,391 ,604, 902, 153 ,292 ,382 ,421 ,716, 718, 895, 447 ,726 ,771, 538, 869, 912 ,667 ,299, 35, 894, 703, 811};
    // int arr[]={3,2,1,3,1,2};
    cout<<func(arr,41)<<"\n";
}