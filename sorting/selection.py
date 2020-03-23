def selection(A):
    for i in range(len(A)):
        min=i
        for j in range(i+1,len(A)):
            if A[min]>A[j]:
                min=j
        temp=A[min]
        A[min]=A[i]
        A[i]=temp
        
A=[8,7,6,5,4,3,2,1]
selection(A)
print(A)