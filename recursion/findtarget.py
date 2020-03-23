def find_target(string,s,e,target):
    if s>e:
        return False
    if string[s]==target:
        return True
    if string[e]==target:
        return True
    return find_target(string,s+1,e-1,target)

print(find_target("animesh",0,6,"e"))