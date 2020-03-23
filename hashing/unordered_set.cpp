#include<unordered_set>
#include<iostream>
using namespace std;
int main()
{
    unordered_multiset<int> v;
    v.insert(10);
    v.insert(19);
    v.insert(15);
    v.insert(21);
    v.insert(17);
    // v.erase()
    unordered_set<int>::iterator it;
    it=v.begin();
    for(;it!=v.end();it++)
    {
        if (*it==15)
        {
            cout<<"found";
        }
    }

}