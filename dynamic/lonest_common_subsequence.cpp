#include<iostream>
#include<algorithm>
using namespace std;
string lcsDynamic(string str1,string str2){
    
        int temp[str1.size() + 1][str2.size() + 1];
        int max = 0;
        for(int i=0; i <= str1.size(); i++){
            for(int j=0; j<=str2.size(); j++){
                if(i==0 || j==0){
                    temp[i][j]=0;
                    continue;
                }
                if(str1[i-1] == str2[j-1]) {
                    temp[i][j] = temp[i - 1][j - 1] + 1;
                }
                else
                {
                    temp[i][j-1]>temp[i-1][j] ? (temp[i][j] =  temp[i][j-1]) : (temp[i][j] = temp[i-1][j]);
                }
                if(temp[i][j] > max){
                    max = temp[i][j];
                }
            }
        }
        int counter=1;
        string s = "";
        for(int i=0;i<=str2.size();i++){
            for(int j=0;j<=str1.size();j++){
                // cout<<temp[j][i]<<" ";
                    if(temp[j][i]==counter){
                        s+=str2[j-1];
                        counter++;
                    }
            }
            // cout<<endl;
        }
        // cout<<endl; 
        return s;
}

int LCS(string s1, string s2, int n, int m){
    if(n==0 || n==0){
        return 0;
    }
    if(s1[n-1]==s2[m-1]){
        return 1+LCS(s1,s2,n-1,m-1);
    }
    else{
        return max(LCS(s1,s2,n-1,m),LCS(s1,s2,n,m-1));
    }
}
int main(){

}