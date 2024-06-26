//314923822
//morberger444@gmail.com
#include "Graph.hpp"
#include <iostream>
#define true 1
#define false 0

using namespace std;
using namespace ariel;

Graph::Graph() {}
Graph::~Graph() {}


void Graph::loadGraph(const vector<vector<int> > &adjMatrix){
    int n = adjMatrix.size();
    for (const std::vector<int> &row : adjMatrix) {
        if (row.size() != n){
            throw std::invalid_argument("Invalid graph: The graph is not a square matrix.");
        }
    }
    this->matrix = adjMatrix;
}


void Graph::printGraph() const{
    int n = graphSize();
    int edgeCount = 0;
    for (unsigned long i = 0; i < n; ++i){
        for (unsigned long j = 0; j < n; ++j){
            if (matrix[i][j] != 0){
                edgeCount++;
            }
        }
    }
    std::cout << "Graph with " << n << " vertices and " << edgeCount<< " edges." << std::endl;
}
