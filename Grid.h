//game board
#ifndef GRID_H
#define GRID_H
using namespace std;

class Grid{
public:
  //Grid();
  Grid(int width, int length);
  ~Grid();



  void manualFill(int i, int j, char c);

  //decides to return - or X based on # of neighbors
  bool fillCell(int c, bool alive);
  void print();
  int getHeight();
  int getWidth();
  char getChar(int x, int y);


  //void setDimensions(int width, int length);

private:
  int mWidth;
  int mHeight;

  char **myGrid;
};

#endif
