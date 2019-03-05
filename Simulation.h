//to populate the grid and create generations
#ifndef GRID_H
#define GRID_H
using namespace std;

class Simulation{
  public:
    Simulation();
    ~Simulation();

    bool isDead();
    bool isAlive();

    void update(int x, int y); // depending on neighbors, fill next gen


};
#endif
