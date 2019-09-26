//game board
//#ifndef GENERALMODE_H
//#define GENERALMODE_H
//#include "GeneralMode.h"
#include "Cell.h"
using namespace std;

class Grid{
public:
  //Grid();
  Grid(int width, int length);
  ~Grid();

  //char getContent(int xPosition, int yPosition);
  //fill grid for the first time??

  //calls fillCell to creat the next gen
  void fillGrid(Grid g2, Grid grid2);
  //decides to return - or X based on # of neighbors
  bool fillCell(Cell c);
  void print();
  int getHeight();
  int getWidth();

  //void setDimensions(int width, int length);

private:
  int mWidth;
  int mHeight;

  Cell **myGrid;
};

//#endif
