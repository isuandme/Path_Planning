#ifndef _PATH_PLANNER
#define _PATH_PLANNER

#include <vector>

using namespace std;

/*  */
struct point {
    int x, y;
};

/*  */
struct obstacle{
    int x, y, rad;
};

/*  */
class Path {
private:
    int **map;
    vector<obstacle> *obs_list;
public:
    Path();
    void setObstaclesList(vector<obstacles> obsList);
    int **gen_map(int numRows, int numCols);
    ~Path(){};
};

#endif
