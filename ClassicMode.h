#include "Grid.h"
using namespace std;

class ClassicMode{
public:
  ClassicMode();
  ~ClassicMode();

  int countNeighbors(Grid g1, int x, int y);
    //calls fillCell to create the next gen
void fillGrid(Grid g2, Grid g1);
};
