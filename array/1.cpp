#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    // i for rows and j for columns
    int k=0,m=4,l=0,n=5;
    while(k<m && l<n)
    {
        for(int i=k;i<n;i++)
        {
            cout<<arr[k][i]<<" ";
        }
        k++;
        for(int i=k;i<m;i++)
        {
            cout<<arr[i][n-1]<<" ";
        }
        n--;
        if(k<m)
        {for(int i=n-1;i>=l;i--)
        {
            cout<<arr[m-1][i]<<" ";
        }
        m--;}
        if(l<n){
        for(int i=m-1;i>=k;i--)
        {
            cout<<arr[i][l]<<" ";
        }
        l++;}
    }
}
int main(){
    vector<int> vec;
    vec.size();
}