// given activity time of a number of operations, maximize the number of activities that can be done.

// Conditions:
// - only one activity can happen at a time
// - maximize the number of activities that can be done

// I/O - [2,3],[1,4],[5,8],[6,10]
// O/P - 2

// I/O - [1,3],[2,4],[3,8],[10,11]
// O/P - 3

// Logic : 
// sort the given timing acc. to their finish time
// if the finish time of former do not overlap with the later, then include the activity, else discard it



#include <iostream> 
#include<algorithm>
using namespace std; 
struct Activity 
{ 
    int start, finish; 
    // Activity(int x, int y): start(x),finish(y)
    // {}
}; 
bool activityCompare(Activity s1, Activity s2) 
{ 
    return (s1.finish < s2.finish); 
} 
void printMaxActivities(Activity arr[], int n) 
{ 
    // Sort jobs according to finish time 
    sort(arr, arr+n, activityCompare); 
  
    // cout << "Following activities are selected n"; 
    int i = 0; 
    
    for (int j = 1; j < n; j++) 
    { 
      if (arr[j].start >= arr[i].finish) 
      { 
          cout <<" start: "<< arr[j].start <<" finish :  "<< arr[j].finish<<"\n";
          i = j; 
      } 
    } 
} 
int main() 
{ 
    Activity arr[6];
    arr[0].start = 5;
    arr[0].finish = 9;
    arr[1].start = 1;
    arr[1].finish = 2;
    arr[2].start = 3;
    arr[2].finish = 4;
    arr[3].start = 0;
    arr[3].finish = 6;
    arr[4].start = 5;
    arr[4].finish = 7;
    arr[5].start = 8;
    arr[5].finish = 9;
    //  = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, 
    //                                    {5, 7}, {8, 9}}; 
    // int n = sizeof(arr)/sizeof(arr[0]); 
    printMaxActivities(arr, 6); 
    return 0; 
} 