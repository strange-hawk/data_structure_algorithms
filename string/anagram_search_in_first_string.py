from itertools import permutations
string=input()
string2=input()
flag=0
listr=["".join(j) for j in permutations(string2,len(string2))]
for i in listr:
    if(string.find(i)!=-1):
        flag=1
        break
# print("NO")
if(flag==0):
    print("NO")
print("YES")