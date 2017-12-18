//
//  main.cpp
//  STL_DirGraph
//
//  Created by Bill Komanetsky on 11/27/17.
//  Copyright © 2017 Bill Komanetsky. All rights reserved.
//

#include <iostream>
#include "Graph.hpp"
using namespace std;

void printGraph(Graph*);

int main(int argc, const char * argv[]) {

    Graph* myGraph = new Graph();
    int k = 0;

    //Graph Example #1
    // myGraph->addVertex(1);
    // myGraph->addVertex(2);
    // myGraph->addVertex(3);
    // myGraph->addVertex(4);
    // myGraph->addVertex(5);
    // myGraph->addVertex(6);
    // myGraph->addVertex(7);
    // myGraph->addVertex(8);

    // myGraph->addEdgeUnDir(1, 3);
    // myGraph->addEdgeUnDir(1, 2);
    // myGraph->addEdgeUnDir(2, 4);
    // myGraph->addEdgeUnDir(2, 5);
    // myGraph->addEdgeUnDir(2, 6);
    // myGraph->addEdgeUnDir(3, 7);
    // myGraph->addEdgeUnDir(3, 8);
    //End Graph Example #1

    //Graph Example #2
//    myGraph->addVertex(0);
//    myGraph->addVertex(1);
//    myGraph->addVertex(2);
//    myGraph->addVertex(3);
//    myGraph->addVertex(4);
//    myGraph->addVertex(5);
//
//    myGraph->addEdgeUnDir(0, 1);
//    myGraph->addEdgeUnDir(0, 2);
//    myGraph->addEdgeUnDir(1, 2);
//    myGraph->addEdgeUnDir(1, 3);
//    myGraph->addEdgeUnDir(2, 4);
//    myGraph->addEdgeUnDir(2, 3);
//    myGraph->addEdgeUnDir(3, 4);
//    myGraph->addEdgeUnDir(3, 5);
//    myGraph->addEdgeUnDir(5, 4);
    //End Graph Example #2

    //Graph Example #3
//    myGraph->addVertex(0);
//    myGraph->addVertex(1);
//    myGraph->addVertex(2);
//    myGraph->addVertex(3);
//    myGraph->addVertex(4);
//    myGraph->addVertex(5);
//    myGraph->addVertex(6);
//    myGraph->addVertex(7);
//
//    myGraph->addEdgeUnDir(0, 1);
//    myGraph->addEdgeUnDir(0, 2);
//    myGraph->addEdgeUnDir(0, 3);
//    myGraph->addEdgeUnDir(1, 3);
//    myGraph->addEdgeUnDir(1, 5);
//    myGraph->addEdgeUnDir(2, 4);
//    myGraph->addEdgeUnDir(3, 5);
//    myGraph->addEdgeUnDir(3, 6);
//    myGraph->addEdgeUnDir(3, 4);
//    myGraph->addEdgeUnDir(3, 2);
//    myGraph->addEdgeUnDir(4, 6);
//    myGraph->addEdgeUnDir(5, 7);
//    myGraph->addEdgeUnDir(5, 6);
//    myGraph->addEdgeUnDir(6, 7);
    //End Graph Example #3

    myGraph -> addVertex(0);
    myGraph -> addVertex(1);
    myGraph -> addVertex(2);
    myGraph -> addVertex(3);
    myGraph -> addVertex(4);

    myGraph -> addEdgeUnDir(0,1);
    myGraph -> addEdgeUnDir(0,2);
    myGraph -> addEdgeUnDir(1,3);
    myGraph -> addEdgeUnDir(2,3);
    myGraph -> addEdgeUnDir(3,4);

    printGraph(myGraph);

    vector<GraphVertex*> aVertex;

    aVertex = myGraph->searchDFS(1);
    cout << "Printing the graph navigated starting at 0 using DFS" << endl;
    for (GraphVertex* i: aVertex) {
        cout << k << ": " << i->Value << endl;
        k++;
    }//for
    aVertex.clear();

    k = 0;
    aVertex = myGraph->searchBFS(1);
    cout << "Printing the graph navigated starting at 0 using BFS" << endl;
    for (GraphVertex* i: aVertex) {
        cout << k  << ": " <<i->Value << endl;
        k++;
    }//for
    aVertex.clear();

    delete myGraph;
    

    std::cout << "Program ending, have a great day!" << endl;
    return 0;
}

void printGraph(Graph* theGraph) {
    for (int i=0; i<STARTSIZE; i++) {
        vector<GraphVertex*>* tempVector = theGraph->getDestVertex(i);
        if (tempVector != nullptr && tempVector->size() > 0) {
            for (int j=0; j<tempVector->size(); j++) {
                cout << i << "--" << tempVector->at(j)->Value << endl;
            }//for
        }//if
        else {}
    }//for
}//printGraph
\
