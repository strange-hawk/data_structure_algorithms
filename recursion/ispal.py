def ispal(string,s,e):
    if s>e:
        return False
    if string[s]==string[e]:
        return True
    if string[s]!=string[e]:
        return False
    return (string,s+1,e-1)

print(ispal("animina",0,len("animina")-1))