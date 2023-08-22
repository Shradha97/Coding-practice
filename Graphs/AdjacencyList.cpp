# include <iostream>
# include <vector>

struct Node
{
	int vertex;
	vector<int> neighbors;
};

class Graph{
public:
	// the initializer for the graph
	Graph(int num_vertices): vertex_list(num_vertices){
		// this bracket set is necessary in case anything else needs to be put in the initializer
	};

	// add edge between 2 vertices
	void addEdge(int src, int dest){
		vertex_list[src].neighbors.push_back(dest);

		// If graph is undirected
		vertex_list[dest].neighbors.push_back(src);
	}

	void printGraph(){
		
	}

private:
	vector<Node> vertex_list;
};

int main()
{
	int num_vertices = 5;

	Graph graph(num_vertices);

	// add edges to the graph
	graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

	/* code */

	return 0;
}