#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
long int fact(int n)
{
    return (n==1 || n==0) ? 1 : n*fact(n-1);
}
long int ranks(string str)
{
    long int count=1;
    int arr[256]={0};
    for(int i=0;i<str.length();i++){    arr[str[i]]++ ;}
    for(int i=1;i<256;i++){    arr[i]+=arr[i-1];}
    long int f= fact(str.length());
    for(int i=0;i<str.length();i++)
    {
        f = f/(str.length()-i);
        count += arr[str[i]-1]*f;
        for(int j=str[i];j<256;j++)
        {
            arr[j]--;
        }
    }
    return count;
}
int main()
{
    string str;
    cin>>str;
    cout<<ranks(str)<<endl;
}