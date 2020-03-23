def partition(A,low,high):
    pivot=A[high]
    j=low-1
    for i in range(low,high):
        if A[i]<=pivot:
            j+=1
            temp=A[i]
            A[i]=A[j]
            A[j]=temp
    temp=A[j+1]
    A[j+1]=A[high]
    A[high]=temp
    return j+1

def sort(A,low,high):
    if low<high:
        part=partition(A,low,high)
        sort(A,low,part-1)
        sort(A,part+1,high)

integer=int(input())
A=list(map(int,input().strip().split()))
sort(A,0,len(A)-1)
print(A)

