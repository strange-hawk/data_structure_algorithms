#include<iostream>
using namespace std;
string ispal(string str, int s, int e )
{
    if (s==e) 
    {
        return "true";
    }
    if (s>e)
    {
        return "true";
    }
    if (str[s]!=str[e])
    {
        return "false";
    }
    return ispal(str,s+1,e-1);
    
}
int main()
{
    cout<<(ispal("anina",0,4));
}