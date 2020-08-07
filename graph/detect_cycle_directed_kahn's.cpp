// Kahn's algorithm

// calculate indegree of every vertex
// create a queue, q
// add all 0 indegree vertices to the q
// count=0
// while(q is not empty){
    // u = q.pop()
    // print u
    // for every adjacent v of u
    //     reduce indegree of v by 1
    //     if indegree of v is 0
    //         add v to q
    // count++
// } 
// if(count!=V)
// return true