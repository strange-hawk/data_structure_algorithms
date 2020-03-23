def primes(n):
    listr=[i+1 for i in range(1,n)]
    # print(listr)
    for i in range(2,int(n**0.5) + 1):
        for j in range(2,(n//i)+1):
            if listr.count(i*j)!=0:
                listr.remove(i*j)
    print(listr)
    
primes(15)

