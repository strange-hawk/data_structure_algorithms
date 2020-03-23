# the logic is to make 1 as mid and the left of mid as 0 and the next element of mid as 2 in every iteration
# it might seem confusing that high may can cause problem but after the operation is performed the element ie middle is rechecked since only high is decremented and not the middle is increased
def sort(A):
    low=0
    mid=0
    high=len(A)-1
    while mid<=high:
        if A[mid]==0:
            temp=A[low]
            A[low]=A[mid]
            A[mid]=temp
            low+=1
            mid+=1
        if A[mid]==1:
            mid+=1
        if A[mid]==2:
            temp=A[high]
            A[high]=A[mid]
            A[mid]=temp
            high-=1
        
A=[1,1,1,0,0,0,2,2,2,2,2]
sort(A)
print(A)
