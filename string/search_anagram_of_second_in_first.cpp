#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
#define fo(i,n,k) for(int i=0;i<n;i++)
bool aresame(int counttxt[],int countpat[])
{
    for(int i=0;i<256;i++)
    {
        if(counttxt[i]!=countpat[i])
        {
            return false;
        }
    }
    return true;
}
bool pattern_search(string txt, string pat)
{
    int counttxt[256]={0};
    int countpat[256]={0};
    // fo(i,0,pat.length())
    for(int i=0;i<pat.length();i++)
    {
        counttxt[txt[i]]++;
        countpat[pat[i]]++;
    }
    // fo(i,pat.length(),txt.length())
    for(int i=pat.length();i<txt.length();i++)
    {
        if(aresame(counttxt,countpat)==true)
        {
            return true;
        }
        counttxt[txt[i-pat.length()]]--;
        counttxt[txt[i]]++;
    }
    return false;
}
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    cout<<pattern_search(str1,str2)<<endl;
}