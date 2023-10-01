## DFS
- Edge case: Disconnected Graphs


## BFS
| Methods  | Explain | Examples |
| -------- | ------- | -------- |
| Using visited + proncessing arrays  | Visited -> marked when all the children of the node have been pushed = fully explored node. Processing -> when the child node is already present in the queue, still being explored.    |  Job application waiting -> Application received (visited=1) -> still being considered (processing=1) -> once rejected (visited=1 as can't reapply for 1 more year) -> not being considered anymore (processing=0)       |
| Only using visited array | Don't have to wait for the node to be marked visited until all the children have been explored, the moment see it = visited.     |   Meeting a relative (visited=1) -> suddenly meet their relative (visited=1) -> don't have to wait to meet other relatives to mark this relative as visited.     |


## Attempts
| Algo  | Attempt 1 | Expected |
| -------- | ------- |  -------- |
| [DFS](https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1)  | 0:20:00 |    0:05:00      |
| [BFS](https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1)  | 0:20:00 |    0:05:00      |
| [Djikstra](https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1)  |  |    0:10:00      |


