#include<iostream>
#include<string>
using namespace std;

bool areRotation(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    s1 = s1+s1;
    if(s1.find(s2)!=string::npos){
        return true;
    }
    return false;
}

// python solution
// def another(string1,string2):
//     string1=string1+string1
//     if(string1.find(string2)!=-1):
//         return True
//     else:
//         return False
// name=input()
// string=input()
// # print(rotation(name,string))
// print(another(name,string))
