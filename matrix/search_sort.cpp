#include<iostream>
using namespace std;
int search(int arr[4][4], int n, int x)
{
    if (n==0)
    {
        return -1;
    }
    int smallest=arr[0][0];
    int largest=arr[n-1][n-1];
    if(x < smallest || x>largest)
    {
        return -1;
    }
    int i=0,j=n-1;
    while(i<n && j>=0)
    {
        if (x==arr[i][j])
        {
            cout<<i<<"  "<<j<<endl;
            return 1;
        }
        if (x>arr[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return -1;
}
int main()
{
    int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,31,33},{32,33,39,50}};
    cout<<search(arr,4,33)<<endl;
}