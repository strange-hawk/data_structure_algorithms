#find the power set
name=input()
count=1<<len(name)
for i in range(count):
    for j in range(len(name)):
        if((i & (1<<j))>0):
            print(name[j],end="")
    print("")