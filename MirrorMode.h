#ifndef GRID_H
#define GRID_H
using namespace std;

class MirrorMode{
public:
  MirrorMode();
  ~MirrorMode();

  //void display();
  int countNeighbors(Grid g1, int i, int j);
};
#endif
