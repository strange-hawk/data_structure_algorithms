import collections

def bfs(listr,root):
    visited , queue = [], collections.deque([root])
    visited.append(root)
    while(queue):
        temp =  queue.popleft()
        for x in listr[temp]:
            if x not in visited:
                visited.append(x)
                queue.append(x)
    print(visited)

listr = {0: [1, 2], 1: [0,3], 2: [0,5,6], 3: [1,4], 4:[3,5],5:[2,4],6:[2]}
bfs(listr,0)