### STL definitions
1. Max heap: `priority_queue<int> maxHeap;`
2. Min heap: `priority_queue<int, vector<int>, greater<int>> minHeap;`
3. Min heap containing pairs: `priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;`
4. Defining a typedef to be used in minheap containing pair of (an int and a pair of ints): `typedef pair<int, pair<int, int>> ppi;`

### General identification for Heap based problems
1. If the problem asks for the smallest/largest element and has this variable k which directly/indirectly refers to a position in the array or given sequence, then it is a Min/Max heap problem.
2. Why does the above identification lead to using heap?
    - Because to find an element that is the kth smallest/largest, we can just sort the array till the required kth element, no need to sort the ENTIRE array -> waste of time and space.
    - The rest of the array can be left unsorted or ignored.
3. Heap sorting time foe the above = O(nlogk) where n is the size of the array and k is the position of the element to be found.

### Some Heap properties
1. Heap is a complete binary tree.
2. Heap is a tree where the parent node is always greater than/less than the child node.
3. BUT, in STL in the priority queue format, the order of children can be unsorted, but the parent node is always greater than/less than the child node.

### Some common observations for some kinds of patterns
1. Whenever asked about kth SMALLEST element and want to use HEAP - use MAX HEAP.
    - This way the k smallest elements will be present in the priority queue starting from the bottom.
    - Any element greater than the kth SMALLEST element will be popped out of the queue as the size is restricted to k.
    - The top element of the queue will be the kth SMALLEST element.

2. Whenever asked about kth LARGEST element and want to use HEAP - use MIN HEAP. (Follow similar reasoning as above).

### Good explanation links to some questions
1. [Kth largest element in an array](https://leetcode.com/problems/kth-largest-element-in-an-array/solutions/60309/c-stl-partition-and-heapsort/) - The solution talks about different approaches to solve the problem, and the best approach -> PARTIAL SORT (a variant of quick sort).
