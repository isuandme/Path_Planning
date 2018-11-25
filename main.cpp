#include <iostream>

#include "path.hpp"
#include "wayqueue.hpp"

using namespace std;

int main(int argv,char* argc[])
{
    
    Wayqueue que; // queue to load into stuff
    Path path;  // Path to stuff n' stuff
    
    /* Generate the map */
    path.setMapAttributes(3, 4, 10);
    path.initializeMap();
    
    /* Generate Mesh */
    path.setBoxMeshAttributes(7, 6, 4, 5, 3);
    path.initializeBoxMesh();
    path.initializeBasicPath(que);
    
    /* Obstacles added to the map */
    path.initialzieObstacleList();
    path.addObstacle(10,10,3);
    path.printObstacleList();
    path.addObstacle(6,23,3);
    path.printObstacleList();
    
    
    path.printMap();
    que.display();
    return 0;
}
