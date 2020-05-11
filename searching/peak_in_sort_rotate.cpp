#include<iostream>
#include<algorithm>

// idea ->find the peak
// by comparing the middle with the leftmost element, if middle > leftmost, then the left part is sorted
// else, the array is disturbed and the peak happens to be in the left part