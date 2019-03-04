//game board
//#ifndef GENERALMODE_H
//#define GENERALMODE_H
//#include "GeneralMode.h"
using namespace std;

class Grid{
public:
  Grid();
  Grid(int width, int length);
  ~Grid();

  char getContent(int xPosition, int yPosition);

  //void setDimensions(int width, int length);

private:
  int mWidth;
  int mHeight;

  char **myGrid;
};

//#endif
