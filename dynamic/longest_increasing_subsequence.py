# Problem : max number of elements of increasing subsequence in the given array
# I/P : 3,4,2,8,10
# O/P : 4

# I/P : 1,2,3,4
# O/P : 4

# I/P : 4,3,2,1
# O/P : 1

# logic : 
# LIS - Longest Increasing Subsequence
# let arr[0...n-1] be the input array and L(i) be the length of the LIS ending at index i such that arr[i] is the last element of the LIS. 
# L(i) can be recursively written as:
# L(i) = max(1 + L(j)) where 0<=j<i and arr[j]<arr[i] 

# Now to find LIS for a given array we need to return max(L(i)) where 0<=i<n
def longest_increasing_subsequence(arr):
    if not arr:
        return 0
    cache = [1] * len(arr)
    res=[[] for _ in range(len(arr))]
    res[0].append(arr[0])
    # res[1]=res[0].copy()
    
    for i in range(1, len(arr)):
        for j in range(i):
            if arr[i] > arr[j]: # increasing subsequence
                cache[i] = max(cache[i], cache[j] + 1)
                if(len(res[j])>len(res[i])):
                    res[i]=res[j].copy()
        res[i].append(arr[i])
    # print(res)
    maxr=0
    for i in range(1,len(arr)):
        if(len(res[i])>len(res[maxr])):
            maxr=i
    return (res[maxr])
    

A=[10, 22, 9, 33, 21, 50, 41, 60]
print(longest_increasing_subsequence(A))