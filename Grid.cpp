#include "Grid.h"
//#include "Cell.h
using namespace std;

/*Grid::Grid(){
mWidth = 1;
mHeight = 1;
myGrid = new char*[mWidth];
for(int i = 0; i<mWidth;++i){
  myGrid[i] = new char[mHeight];
}
}*/



Grid::Grid(int width, int height){
  mWidth = width;
  mHeight = height;
  myGrid = new Cell*[mWidth];
  for(int i = 0; i<mWidth;++i){
    myGrid[i] = new Cell[mHeight];
  }
}

Grid::~Grid(){
delete myGrid;
}

/*char Grid::getContent(int xPosition, int yPosition){
  return myGrid[xPosition][yPosition];
}*/

//g1.fillGrid(Grid g2)
//goes through grid and fills g2 with alive and dead cells
//TODO test this method
void Grid::fillGrid(Grid grid2, Grid grid1){
  for(int i = 0; i<grid2.getWidth();++i){
    for(int j =0; j<grid2.getHeight();++j){
      Cell c1 = grid1[i][j];
      bool placeholder = grid2.fillCell(c1);
      Cell c2 = grid2[i][j]; //error here
      c2.setAlive(placeholder);
    }
  }
}


bool Grid::fillCell(Cell c){
  if(c.getNeighbors()<=1){
    //Cell dead
    return false;

  }if(c.getNeighbors()==2){
    //stable, check .isAlive
    if (c.isAlive()){
      return true;
    }
    return false;

  }if(c.getNeighbors()==3){
    //Cell alive
    return true;

  }if(c.getNeighbors()>=4){
    //Cell dead
    return false;

  }
}
void Grid::print(){ //TODO

}
 int Grid::getHeight(){
   return mHeight;
 }
 int Grid::getWidth(){
   return mWidth;
 }

/*void Grid::setDimensions(int width, int height){
  mWidth = width;
  mHeight = height;
  myGrid =

}
*/
