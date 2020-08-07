
used when we have random connections among items
- not linear
- no heirarchial
vertices(nodes) and edges(arcs)

graph representations:
- adjacency matrix
- adjacency list


ADJACENCY MATRIX: 
- xtra space wastage O(V * V)
-  quickly check for direct connections O(1)
- find all vertices adjacent to u O(V)
- add/remove an edge O(1)
- degree of u O(V)
- add/remove a vertex O(V^2)


cons
- redundancy


ADJACENCY LIST:
- quickly find out all adjacents
- space 
    - directed -> theta(V+E)
    - undirected -> theta(V+2E)

- check if there is edge from u to v O(V)
- find all adjacent of u theta(degree(u))
- degree of u O(1)
- add an edge theta(1)
- reomve an edge O(V)

implementation using adjacency list in  C++: vector<int> adj[V];(adjacency list using array of vector in cpp)


APPLICATIONS OF BFS
- shortest path in unweighted graph
- crawlers in search engine
- peer to peer engine
- social networking search
- garbage collection
- cycle detection
- ford fulgenson algo
- broadcasting


APPLICATIONS OF DFS
- cycle detection
- topological sorting
- strongly connected components
- solving maze and similar puzzles
- path finding