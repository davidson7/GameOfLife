#include "Grid.h"
using namespace std;

Grid::Grid(){
mWidth = 1;
mHeight = 1;
myGrid = new char*[mWidth];
for(int i = 0; i<mWidth;++i){
  myGrid[i] = new char[mHeight];
}

}

Grid::Grid(int width, int height){
  mWidth = width;
  mHeight = height;
  myGrid = new char*[mWidth];
  for(int i = 0; i<mWidth;++i){
    myGrid[i] = new char[mHeight];
  }
}

Grid::~Grid(){

}

char Grid::getContent(int xPosition, int yPosition){
  return myGrid[xPosition][yPosition];
}

void Grid::fill(int x, int y,char c){
  myGrid[x][y]='c';
}
/*void Grid::setDimensions(int width, int height){
  mWidth = width;
  mHeight = height;
  myGrid =

}
*/
