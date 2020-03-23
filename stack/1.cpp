// precedence should be increasing as we go up in the stack
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prec(char ch)
{
    if(ch=='^')
        return 3;
    else if(ch=='*' || ch=='/')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    return -1;
}
void intopost(string s)
{
    string ns;
    int n=s.length();
    stack<char> st;
    st.push('N');
    for(int i=0;i<n;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            ns+=s[i];}
        else if(s[i]=='('){
            st.push(s[i]);}
        else if(s[i]==')')
        {
            while (st.top()!='N' || st.top()!='(')
            {
                char c=st.top();
                ns+=c;
                st.pop();
            }
            if(st.top()=='(')
                st.pop();
        }
        else
        {
            while(st.top()!='N' && prec(s[i])<=prec(st.top()))
            {
                char c = st.top();
                ns+=c;
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(st.top()!='N')
    {
        char c=st.top();
        ns+=c;
        st.pop();
    }
    cout<<ns<<"\n";
}
int main()
{
    string s;
    cin>>s;
    intopost(s);
    cout<<"\n";
}