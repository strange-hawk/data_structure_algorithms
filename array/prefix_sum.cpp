#include<iostream>
using namespace std;
int getSum(int prefixsum[],int l,int r)
{
    if (l==0)
        return prefixsum[r];
    else
        return prefixsum[r]-prefixsum[l-1];
}
int main()
{
    int arr[]={2,8,3,9,6,5,4};
    int prefixsum[7];
    prefixsum[0]=arr[0];
    for(int i=1;i<7;i++)
    {
        prefixsum[i]=prefixsum[i-1]+arr[i];
    }
    cout<<getSum(prefixsum,0,2)<<"    "<<getSum(prefixsum,1,3)<<"     "<<getSum(prefixsum,2,6)<<endl;
}