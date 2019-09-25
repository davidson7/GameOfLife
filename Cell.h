//to populate the grid and create generations
//#ifndef GRID_H
//#define GRID_H
using namespace std;

class Cell{
  public:
    Cell();
    ~Cell();
    void setNeighbors(int num);

  private:
    bool isAlive;
    int neighborCount;

    //void update(int x, int y); // depending on neighbors, fill next gen


};
//#endif
