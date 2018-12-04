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
    path.setBoxMeshAttributes(7, 8, 3, 4, 4);
    path.initializeBoxMesh();
    path.initializeBasicPath(que);
    
    /* Obstacles added to the map */
    path.initialzieObstacleList();
    path.addObstacle(10,10,3);
    path.addObstacle(6,23,3);
    
    // Do an obstacle check everytime it gets to a weight point. If there is an interference, opt to a sub map to get around.
    
    path.printMap();
    que.display();
    
    return 0;
}
