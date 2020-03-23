#tail recursive verion of printing numbers from 1 to n
def func(n,k=1):
    if n<=0:
        return
    else:
        print(f"{k} ",end=" ")
        func(n-1,k+1)
    
func(10)