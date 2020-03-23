#include<iostream>
using namespace std;
struct Interval
{
    int buy;
    int sell;
};
void buysell(int arr[],int n)
{
    int i=0;
    int count=0;
    struct Interval sol[n/2 + 1];
    while(i<n-1)
    {
        
        while(i<n-1 && arr[i]>=arr[i+1])
            i++;
        if(i==n-1)
            break;
        sol[count].buy=arr[i];
        i++;
        while(i<n-1 && arr[i]<=arr[i+1])
            i++;
        sol[count].sell=arr[i];
        count++;
    }
    for(int i=0;i<count;i++)
    {
        cout<<sol[i].buy<<" "<<sol[i].sell<<"\n";
    }
}
int main()
{
    int arr[10]={100, 180, 260, 310, 40, 535, 695};
    int n=10;
    buysell(arr,10);
}