#include <iostream> 
#include<stack>
using namespace std;  

void previous_greater(int arr[], int n, int output[]){
    stack<int>s;
    s.push(0);
    output[0]=-1;
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[i]>arr[s.top()]){
            s.pop();
        }
        output[i]= s.empty()==true ? -1 : arr[s.top()];
        s.push(i);
    }
}

void printArray(int arr[], int n)  
{  
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
}  

// previous greater element means the graeter element before that array element
// pop all the elements that are smaller than that
int main()  
{  
    int price[] = { 2,3,4,5,6,7 };  
    int n = sizeof(price) / sizeof(price[0]);  
    int S[n];  
  
    // Fill the span values in array S[]  
    previous_greater(price, n, S);  
  
    // print the calculated span values  
    printArray(S, n);  
}