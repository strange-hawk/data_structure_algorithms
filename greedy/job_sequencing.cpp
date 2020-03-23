
// given a data of jobs with deadline and profit, sequence the jobs in such a way so as to maximize profit.

// Conditions :
// Only 1 job can be processed at a time.
// Every job takes single time slot
// we get profit only if we finish the job within the deadline.


// I/O -: 
// jobs,deadline,profit
// a,4,70
// b,1,80
// c,1,30
// d,1,100
// O/P : 170

// jobs,deadline,profit
// a,2,50
// b,2,60
// c,3,20
// d,3,30
// O/P : 140


// Logic : 
// sort jobs according to profit
// process sorted jobs one by one, for every job find the latest free slot

#include<iostream> 
#include<algorithm> 
using namespace std; 
struct Job 
{ 
   char id;      // Job Id 
   int dead;    // Deadline of job 
   int profit;  // Profit if job is over before or on deadline 
};
bool comparison(Job a, Job b) 
{ 
     return (a.profit > b.profit); 
}
void printJobScheduling(Job arr[], int n) 
{ 
    sort(arr, arr+n, comparison); 
  
    int result[n]; // To store result (Sequence of jobs) 
    bool slot[n]; 
    for (int i=0; i<n; i++) 
        slot[i] = false; 
    for (int i=0; i<n; i++) 
    { 
       for (int j=min(n, arr[i].dead)-1; j>=0; j--) // since deadline can be less than n
       { 
          // Free slot found 
          if (slot[j]==false) 
          { 
             result[j] = i;  // Add this job to result 
             slot[j] = true; // Make this slot occupied 
             break; 
          } 
       } 
    } 
    for (int i=0; i<n; i++) 
       if (slot[i]) 
         cout << arr[result[i]].id << " "; 
} 
int main() 
{ 
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, 
                   {'d', 1, 25}, {'e', 3, 15}}; 
    int n = sizeof(arr)/sizeof(arr[0]);  
    printJobScheduling(arr, n); 
    return 0; 
} 
