#include<iostream>
#include<unordered_set>
using namespace std;
bool spair(int arr[],int n,int sum)
{
    int i=0;
    unordered_set<int> un;
    un.insert(arr[0]);
    for(int i=1;i<n;i++)
    {
        if (un.find(sum-arr[i])!=un.end())
        {
            return true;
        }
        else
        {
            un.insert(arr[i]);
        }
        
    }
    return false;
}
int main()
{
    int arr[]={5,7,8,-5,10};
    cout<<spair(arr,5,0)<<endl;
}
