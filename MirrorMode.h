
#include "Grid.h"
using namespace std;

class MirrorMode{
public:
  MirrorMode();
  ~MirrorMode();

  //void display();
  int countNeighbors(Grid g1, int i, int j);
  //calls fillCell to create the next gen
void fillGrid(Grid g1, Grid g2);
};
