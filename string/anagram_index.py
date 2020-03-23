from itertools import permutations
i=input()
listr=["".join(j) for j in permutations(i,len(i))]
listr.sort()
print(listr.index(i))
