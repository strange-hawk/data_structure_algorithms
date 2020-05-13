#include<iostream>
#include<string>
using namespace std;

// used when there are multiple patterns to search

void RBSearch(string txt, string pat){
    int m = txt.length(), n=pat.length(), d=10;
    int p=0,t=0,q=997;
    bool flag =  true;
    int h=1;
    for(int i=1;i<=n-1;i++){
        h=(h*d)%q;
    }
    for(int i=0;i<pat.length();i++){
        p = (p*d+pat[i]) %q;
        t = (t*d+txt[i]) %q;
    }
    for(int i=0;i<=n-m;i++){
        if(p==t){
            for(int j=0;j<pat.length();j++){
                if(txt[i+j]!=pat[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<txt[i];
            }
            flag=true;
        }
        if(i+m<n){
        t = ((t-txt[i]*h)*d+txt[i+m])%q;
        if(t<0){
            t=t+q;
        }
        }
    }
}