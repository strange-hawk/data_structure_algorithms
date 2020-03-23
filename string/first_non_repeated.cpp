#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="animesh";
    pair<int,int> arr[256];
    for(int i=0;i<str.length();i++)
    {
        arr[str[i]].first++;
        arr[str[i]].second=i;
    }
    int minr=str.length();
    for(int i=0;i<str.length();i++)
    {
        if(arr[str[i]].first==1 )
        {
            minr=min(arr[str[i]].second,minr);
        }
    }
    cout<<str[minr]<<endl;

}