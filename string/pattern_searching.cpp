#include<iostream>
#include<string>
using namespace std;
void patSearch(string txt, string pat){
    int n = txt.length();
    int m = pat.length();
    for(int i=0;i<=n-m;i++){
        for(int j=0;j<m;j++){
            if(txt[i+j]!=pat[j]){
                break;
            }
            if(j==m){
                cout<<i<<"  ";
            }
        }
    }
}