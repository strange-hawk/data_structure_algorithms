def subArraySum(arr, n, sumr):
    sum_till=arr[0]
    start=0
    counter=0
    for i in range(1,n):
        if sum_till<sumr:
            sum_till += arr[i]
        while sum_till>sumr and start<=i:
            sum_till -= arr[start]
            start +=1
        if sum_till == sumr:
            print(start+1,end=" ")
            print(i+1,end="")
            counter=1
            break
    if counter==0:
        print(-1,end="")

T=int(input())
while(T>0):
            
    NS=input().strip().split()
    N=int(NS[0])
    S=int(NS[1])
            
    A=list(map(int,input().split()))
            
    subArraySum(A, N, S)
            
    print()
            
    T-=1



