def hcflcm(a,b):
    if a>b:
        return hcflcm(a-b,b)
    elif b>a:
        return hcflcm(a,b-a)
    else:
        return a

print(hcflcm(16,4))
print((16*4)//hcflcm(16,4))
