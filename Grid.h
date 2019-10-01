//game board

using namespace std;

class Grid{
public:
  //Grid();
  Grid(int width, int length);
  ~Grid();

  //char getContent(int xPosition, int yPosition);
  //fill grid for the first time??


  void manualFill(int i, int j, char c);
  //calls fillCell to creat the next gen
  //void fillGrid(Grid g2, Grid grid2);
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

//#endif
