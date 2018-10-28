#include <iostream>
#include <string>

#include "path.hpp"

using namespace std;

Path::Path()
{
    map = nullptr;
}

void Path::setObstaclesList(vector<obstacles> obsList)
{
    if(map == nullptr || obsList.empty())
        return;
    
    if(!obs_list.empty())
        obs_list.clear();
    
    int i;
    int size = obsList.size();
    for(i = 0; i < size; i++) {
        
    }
}

int **Path::gen_map(int numRows, int numCols)
{
    int tmp_map[numRows][numCols];
    
    return 0;
}
