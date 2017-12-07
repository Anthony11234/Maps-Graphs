//
//  Graph.hpp
//  STL_DirGraph
//
//  Created by Bill Komanetsky on 11/27/17.
//  Copyright © 2017 Bill Komanetsky. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

const int STARTSIZE = 500;

struct GraphVertex {
    int Value;
    bool Visited;
};

struct Edge {
    int source;
    int destination;
};//Edge

class Graph {
public:
    Graph();
    virtual ~Graph();
    
    Graph(vector<Edge>);
    vector<GraphVertex*>* getDestVertex(int);
    void addEdgeUnDir(int source, int destination);
    void addEdgeDir(int source, int destination);
    void addVertex(int);
    vector<GraphVertex*> searchDFS(int start);
    vector<GraphVertex*> searchBFS(int start);
    void clearAllVisited(void);
private:
    pair<GraphVertex*, vector<GraphVertex*>*> edgeArray[STARTSIZE];
    void initGraph(void);
};//Graph

#endif /* Graph_hpp */
