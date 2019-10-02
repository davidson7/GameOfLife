#include "Grid.h"
//#ifndef GRID_H
//#define GRID_H


using namespace std;

class ClassicMode{
public:
  ClassicMode();
  ~ClassicMode();

  int countNeighbors(Grid g1, int x, int y);
  void fillGrid(Grid g1, Grid g2);
};

//#endif
