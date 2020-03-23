def bubblesort(A):
    for i in range(len(A)):
        for j in range(i+1,len(A)):
            if A[i]>A[j]:
                temp=A[i]
                A[i]=A[j]
                A[j]=temp
        
A=[8,7,6,5,4,3,2,1]
bubblesort(A)
print(A)