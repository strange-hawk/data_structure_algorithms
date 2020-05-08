def hcflcm(a,b):
    if a>b:
        return hcflcm(a-b,b)
    elif b>a:
        return hcflcm(a,b-a)
    else:
        return a

// optimised hcf
def gcd(a,b):
    if a==0:
        return b
    elif b==0:
        return a
    elif(a>b):
        return gcd(a%b,b)
    elif(a<b):
        return gcd(a,b%a)

print(hcflcm(16,4))
print((16*4)//hcflcm(16,4))
