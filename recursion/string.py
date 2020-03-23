def string(length,a,b,c):
    if length==0:
        return 0
    if length<0:
        return -1
    res=max((string(length-a,a,b,c)),(string(length-b,a,b,c)),(string(length-c,a,b,c)))
    if res==-1:
        return -1
    else:
        return 1+res

print(string(23,9,11,12))
