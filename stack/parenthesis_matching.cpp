#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<char> s;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            s.push(str[i]);
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            if(s.empty())
            {
                cout<<"wrong\n";
                break;
            }
            else{
            char ch=s.top();
            s.pop();
            switch (str[i])
            {
                case ')':
                if(ch=='{' || ch=='[')
                {
                    cout<<"Incorrect matching of parenthesis\n";
                }
                break;

                case '}':
                if(ch=='[' || ch=='(')
                {
                    cout<<"Incorrect matching of parenthesis\n";
                }
                break;

                case ']':
                if(ch=='(' || ch=='{')
                {
                    cout<<"Incorrect matching of parenthesis\n";
                }

                break;
            }}
        }
    }
    if(s.empty()==false)
    {
        cout<<"No matching\n";
    }
}