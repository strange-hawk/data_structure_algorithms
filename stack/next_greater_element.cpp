#include<iostream>
#include<stack>
using namespace std;

void next_greater(int arr[], int n, int output[]){
    stack<int> s;
    output[n-1]=-1;
    s.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!s.empty() && arr[i]>arr[s.top()]){
            s.pop();
        }
        output[i] = s.empty() ? -1 : arr[s.top()];
        s.push(i);
    }
}

void printArray(int arr[], int n)  
{  
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
}  

int main()  
{  
    int price[] = {  };  
    int n = sizeof(price) / sizeof(price[0]);  
    int S[n];  
  
    // Fill the span values in array S[]  
    next_greater(price, n, S);  
  
    // print the calculated span values  
    printArray(S, n);  
}