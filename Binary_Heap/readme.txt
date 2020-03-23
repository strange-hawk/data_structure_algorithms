Binary Heap is a complete binary Tree
it is of two types- Min and Max
Min Binary Tree- the children are greater than the parent
Max Binary Tree- the children are smaller than the parent
    left child = 2*i+1
    right child = 2*i+2
    parent = floor((i-1)/2)

Applications:
    Djikstra
    Hoffmann
    Prim's Algorithm
    Priority Queue
    Prioriry Scheduling

Operations:
    Get minimum - return arr[0]
    Extract minimum - delete arr[0], delete arr[0] then heapify
    insertion
    decreasing
    delete