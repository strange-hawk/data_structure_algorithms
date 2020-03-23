def merge(Arr,p,q,r):
    n1 = q-p+1
    n2 = r-q
    A=[]
    B=[]
    for i in range(n1):
        A.append(Arr[p+i])
    for i in range(n2):
        B.append(Arr[q+1+i])
    i=0
    j=0
    k=p
    while(i<n1 and j<n2):
        if A[i]<=B[j]:
            Arr[k]=A[i]
            i+=1
            k+=1
        else:
            Arr[k]=B[j]
            j+=1
            k+=1
    
    while(i <= n1-1):
        Arr[k]=A[i]
        k+=1
        i+=1
    
    while(j<=n2-1):
        Arr[k]=B[j]
        k+=1
        j+=1




def MergeSort(A,p,r):
    if p<r:
        q = (p+r)//2
        MergeSort(A,p,q)
        MergeSort(A,q+1,r)
        merge(A,p,q,r)
        
A=[12,98,23,87,34,76,56,54,67,43]
print(A)
MergeSort(A,0,9)
print(A)
