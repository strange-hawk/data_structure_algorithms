name,k=map(int,input().split())
num=1
num=1<<(k-1)
if(name & num !=0):
    print("True")
else:
    print("False")