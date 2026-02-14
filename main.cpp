```cpp
#include <iostream>
#include <vector>
#include <algorithm>

// Define a struct for graph edges
struct Edge {
    int vertex1;
    int vertex2;
};

// Define a class for the graph
class Graph {
private:
    std::vector<std::vector<int>> adjacencyList;
    int numVertices;

public:
    // Constructor
    Graph(int numVertices) : numVertices(numVertices) {
        adjacencyList.resize(numVertices);
    }

    // Method to add an edge to the graph
    void addEdge(int vertex1, int vertex2) {
        adjacencyList[vertex1].push_back(vertex2);
        adjacencyList[vertex2].push_back(vertex1);
    }

    // Method to print the graph
    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            std::cout << "Vertex " << i << " -> ";
            for (int neighbor : adjacencyList[i]) {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int numVertices;
    std::cout << "Enter the number of vertices: ";
    std::cin >> numVertices;

    Graph graph(numVertices);

    // TO DO: Add edges to the graph
    // TO DO: Generate the graph

    graph.printGraph();

    return 0;
}
```