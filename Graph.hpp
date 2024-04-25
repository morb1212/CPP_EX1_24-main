#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <iostream>


using namespace std;
namespace ariel{
    class Graph{
    private:
        vector<vector<int>> matrix;
    public:
        void loadGraph(const vector<vector<int>> &matrix);
        void printGraph() const;
        const vector<vector<int>> &getMatrix() const
    };
}
#endif
