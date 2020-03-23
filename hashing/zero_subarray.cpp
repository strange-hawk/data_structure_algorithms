#include<unordered_set>
#include<iostream>
using namespace std;
bool zer_subarray(int arr[],int n)
{
    int prefixsum=0;
    unordered_set<int> us;
    us.insert(prefixsum);
    for(int i=0;i<n;i++)
    {
        prefixsum+=arr[i];
        if(us.find(prefixsum)!=us.end())
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
    int arr[]={5,-5,10};
    cout<<zer_subarray(arr,3)<<endl;
}