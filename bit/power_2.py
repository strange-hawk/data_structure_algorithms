name=int(input())
if(name!=0):
    if(name & (name-1))==0:
        print("true")
    else:
        print("false")
if(name==0):
    print("false")
