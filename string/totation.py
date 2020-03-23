# wrong answer in green
# ABAA,AAAB
# def rotation(string1,string2):
#     if(len(string1)!=len(string2)):
#         return False
#     else:
#         if(string1.find(string[0])!=-1):
#             i=string1.find(string[0])
#             string1=string1[i:]+string1[:i]
#             if(string1==string2):
#                 return True
#             else:
#                 return False

def another(string1,string2):
    string1=string1+string1
    if(string1.find(string2)!=-1):
        return True
    else:
        return False
name=input()
string=input()
# print(rotation(name,string))
print(another(name,string))
