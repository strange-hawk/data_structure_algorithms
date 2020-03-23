#include<iostream>
#include<string>
using namespace std;
bool anagram(string s1,string s2)
{
    if(s1.length()!= s2.length())
    {return false;}
    else
    {
        int arr[256]={0};
        for(int i=0;i<s1.length();i++)
        {
            arr[s1[i]]++;
        }
        for(int i=0;i<s2.length();i++)
        {
            arr[s2[i]]--;
        }
        for(int i=0;i<256;i++)
        {
            if (arr[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
    
}
int main()
{
    string s1="gfgg";
    string s2="fggg";
    cout<<anagram(s1,s2)<<endl;
}