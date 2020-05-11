#include<iostream>
#include<string>
using namespace std;

bool areSame(int a[],int b[]){
    for(int i=0;i,256;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

bool iAnagramPresent(string txt, string Pat){
    int countText[256]={0};
    int countPat[256]={0};
    for(int i=0;i<Pat.length();i++){
        countText[txt[i]]++;
        countPat[Pat[i]]++;
        for(int i=Pat.length();i<txt.length();i++){
            if(areSame(countText,countPat))
                return true;
            countText[txt[i]]++;
            countText[i-Pat.length()]--;
        }
    }
}