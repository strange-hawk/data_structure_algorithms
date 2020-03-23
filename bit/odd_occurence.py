# find the element repeating odd number of time in an array
arr=list(map(int,input().split()))
res=0
for i in range(len(arr)):
    res=arr[i]^res
print(res)