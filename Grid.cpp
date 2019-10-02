//#ifndef GRID_H
//#define GRID_H
#include "Grid.h"
#include <iostream>

using namespace std;

Grid::Grid(int width, int height){
  mWidth = width;
  mHeight = height;
  myGrid = new char*[height];
  for(int i = 0; i<height; i++){
    myGrid[i] = new char[width];
  }
  for(int x=0; x<mHeight;++x){
  for (int y = 0; y<mWidth;++y){
    myGrid[x][y]='-';
  }
}
}

Grid::~Grid(){
delete myGrid;
}

//fill a single position with char
void Grid::manualFill(int xPosition, int yPosition, char alive){
  myGrid[xPosition][yPosition] = alive;
}


//pass in number of neighbors, return bool alive or dead for next gen
bool Grid::fillCell(int c, bool alive){
  if(c<=1){
    //Cell dead
    return false;

  }if(c==2){
    //stable, check .isAlive
    if (alive){
      return true;
    }
    return false;

  }if(c==3){
    //Cell alive
    return true;

  }if(c>=4){
    //Cell dead
    return false;

  }
}

//prints grid to screen
void Grid::print(){
  for(int i=0; i<mHeight;++i){
    for(int j= 0; j<mWidth; ++j){
      cout<<"| "<<myGrid[i][j]<<" ";
    }
    cout<<endl;
  }
}

//return gridheight
 int Grid::getHeight(){
   return mHeight;
 }
 //return grid width
 int Grid::getWidth(){
   return mWidth;
 }
 //return 'X' or '-'
 char Grid::getChar(int x, int y){
   return myGrid[x][y];
 }
