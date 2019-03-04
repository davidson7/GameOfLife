//to populate the grid and create generations
#ifndef GRID_H
#define GRID_H
using namespace std;

class Simulation{
  public:
    Simulation();
    ~Simulation();

    bool isFilled();
    bool dead();
    bool live();

    void update(int x, int y);


};
#endif
