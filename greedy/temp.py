def largestNum(n,s):
    sumr = 0
    string = 0
    st=0
    while(st<=n):
        if(sumr+9 <= s):
            string=string*10 + 9
            sumr+=9
            st+=1
            # s=s-9
        else:
            string=string*10 + (9-(sumr+9 - s))
            sumr=s
            break
    # print(str(string).ljust(n,'0'))
    if(sumr == s):
        return str(string).ljust(n,'0')
    else:
        return -1


print(largestNum(5,12))