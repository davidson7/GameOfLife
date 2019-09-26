//to populate the grid and create generations
//#ifndef GRID_H
//#define GRID_H
#include <iostream>
using namespace std;

class Cell{
  public:
    Cell();
    ~Cell();
    void setNeighbors(int num);
    int getNeighbors();
    bool isAlive();
    void setAlive(bool tf);

  private:
    bool alive;
    int neighborCount;

    //void update(int x, int y);
    // depending on neighbors, fill next gen


};
//#endif
