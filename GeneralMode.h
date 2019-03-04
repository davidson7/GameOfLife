#ifndef GRID_H
#define GRID_H
#include "Grid.h"
using namespace std;

class GeneralMode{
public:
  GeneralMode();
  ~GeneralMode();

  void display();
  int getNeighbors(int x, int y, Grid myGrid);

private:
  int neighbors;
};

#endif
