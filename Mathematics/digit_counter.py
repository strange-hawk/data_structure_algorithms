#complexity = O(digitcount)
def digit_counter(n):
    counter=0
    while n!=0:
        counter+=1
        n//=10
    return counter
print(digit_counter(1234567890))