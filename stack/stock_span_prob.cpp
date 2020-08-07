#include <bits/stdc++.h> 
#include<stack>
using namespace std;  
  
// Fills array S[] with span values  
void calculateSpan(int price[], int n, int S[])  
{  
    // Span value of first day is always 1  
    S[0] = 1;  
  
    // Calculate span value of remaining days   
    // by linearly checking previous days  
    for (int i = 1; i < n; i++)  
    {  
        S[i] = 1; // Initialize span value  
  
        // Traverse left while the next element   
        // on left is smaller than price[i]  
        for (int j = i - 1; (j >= 0) &&  
                (price[i] >= price[j]); j--)  
            S[i]++;  
    }  
}  
  
// A utility function to print elements of array  
void printArray(int arr[], int n)  
{  
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
}  




// find the next greater elemnt on the left side of index
// idea - for every element of the the array, compare it with the top of stack
//          if it is smaller than the top, we push it
//          else we keep removing all the greater elements
//          immediate answer is i - s.top()+1

// why we use stack because we want immediate larger element

// from top to bottom the stack is increasing, assuming top at top

void calculateSpan(int price[], int n, int S[]){
    stack<int> s;
    s.push(0);
    S[0]=1;
    for(int i=1;i<n;i++){
        while(!s.empty() && price[i]>price[s.top()]){
            s.pop();
        }
        // s.top() is the index of previous greater element
        S[i] = s.empty()==true ? i+1 : i-s.top();
        s.push(i);
    }
}





// Driver code  
int main()  
{  
    int price[] = { 10, 4, 5, 90, 120, 80 };  
    int n = sizeof(price) / sizeof(price[0]);  
    int S[n];  
  
    // Fill the span values in array S[]  
    calculateSpan(price, n, S);  
  
    // print the calculated span values  
    printArray(S, n);  
}