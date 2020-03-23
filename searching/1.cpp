#include<iostream>
using namespace std;
void twoRepeated(int arr[], int n){
    int temp[n];
    // temp[0]=0;
    for(int i=0;i<n;i++)
    {
        temp[i]=0;
    }
    for(int i=0;i<n+2;i++)
    {
        if (temp[arr[i]-1]==1)
        {
            cout<<arr[i]<<" ";
        }
        else
        {
            temp[arr[i]-1]++;
        }
    }
    
    // Your code here
    
}
int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        twoRepeated(a, n);
        cout<<endl;
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
// Function to find the two repeated element
// arr: input array
// n: size of array
