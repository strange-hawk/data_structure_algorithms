// given a pair of item wt val, compute the maximum val that can be obtained within a given knapsack

// logic : 
// compute the val/wt for all items
// then sort in descending order of computed val/wt
// then pull out the wts until all the wt of the item is extracted or the knapsack is full.


#include <iostream>
using namespace std; 

struct Knap 
{ 
    int val, wt; 
 
    // Knap(int val, int wt) : val(val), wt(wt) 
    // {} 
}; 
bool cmp(struct Knap a, struct Knap b) 
{ 
    double r1 = (double)a.val / a.wt; 
    double r2 = (double)b.val / b.wt; 
    return r1 > r2; 
} 
double func(int W, struct Knap arr[], int n) 
{
    sort(arr, arr + n, cmp); 
    int curWeight = 0; 
    double finalval = 0.0;
    for (int i = 0; i < n; i++) 
    { 
        if (curWeight + arr[i].wt <= W) 
        { 
            curWeight += arr[i].wt; 
            finalval += arr[i].val; 
        }
        else
        { 
            int remain = W - curWeight; 
            finalval += arr[i].val * ((double) remain / arr[i].wt); 
            break; 
        } 
    }
    return finalval; 
} 

int main() 
{ 
    int W = 50; 
    Knap arr[3];
    arr[0].val=60;
    arr[0].wt=10;
    arr[1].val=100;
    arr[1].wt=20;
    arr[2].val=120;
    arr[2].wt=30;
    int n = 3;
    cout << func(W, arr, n); 
    return 0; 
} 