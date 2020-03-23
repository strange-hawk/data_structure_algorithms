#include<unordered_set>
#include<iostream>
using namespace std;
bool zer_subarray(int arr[],int n,int x)
{
    int prefixsum=0;
    unordered_set<int> us;
    us.insert(prefixsum);
    for(int i=0;i<n;i++)
    {
        prefixsum+=arr[i];
        if(us.find(prefixsum-x)!=us.end())
        {
            return true;
        }
        else
        {
            us.insert(prefixsum);
        }
        
    }
    return false;
}
using namespace std;
int main()
{
    int arr[]={5,3,4,-2,8,10};
    cout<<zer_subarray(arr,6,5)<<endl;
}