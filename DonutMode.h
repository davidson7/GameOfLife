
#include "Grid.h"
using namespace std;

class DonutMode{
public:
  DonutMode();
  ~DonutMode();

  //void display();
  int countNeighbors(Grid g1, int i, int j);
  //calls fillCell to create the next gen
void fillGrid(Grid g2, Grid g1);
};
