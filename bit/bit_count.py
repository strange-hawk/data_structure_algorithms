name=int(input())
res=0
while(name>0):
    name=(name&(name-1))
    res+=1
print(res)