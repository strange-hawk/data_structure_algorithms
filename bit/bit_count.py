# idea -> there is only 1 bit difference between any two adjacent numbers
name=int(input())
res=0
while(name>0):
    name=(name&(name-1))
    res+=1
print(res)

while(n>0){
    if(n%2!=0){
        res++;
    }
    n=n>>1;
}

while(n>0){
    if(n&1==1)
        res++;
    n=n>>1;
}

while(n>0){
    res+=(n&1)
    n=n>>1
}