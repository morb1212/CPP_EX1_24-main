//314923822
//morberger444@gmail.com
#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>

using namespace std;

namespace ariel{
    class Graph {
    private:
        vector<vector<int> > matrix;
    public:
        Graph();
        ~Graph();
        void loadGraph(const vector<vector<int> > &matrix);
        void printGraph() const;
        const vector<vector<int> >& getMatrix() const{return this->matrix;}
        size_t graphSize() const{return this->matrix.size();}
    };
}
#endif //GRAPH_HPP