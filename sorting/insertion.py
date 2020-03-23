def insertion(A):
    for i in range(1,len(A)):
        key=A[i]
        j=i-1
        while (A[j]>key and j>-1):
            A[j+1]=A[j]
            j-=1
        A[j+1]=key
        
A=[8,7,6,5,4,3,2,1]
insertion(A)
print(A)