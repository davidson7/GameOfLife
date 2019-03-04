//used to count neighbors
#include "GeneralMode.h"
#ifndef GRID_H
#define GRID_H
//#include "Grid.h"
using namespace std;

GeneralMode::GeneralMode(){
neighbors = 0;
}

GeneralMode::~GeneralMode(){
 neighbors =0;
}

int GeneralMode::getNeighbors(int x, int y, Grid myGrid){
//int neighbors;
for (int i = x-1; i>x+1; ++i){
  for(int j = y-1;i>y+1; ++j){
    if(i == x && j == y){
      continue;
    }
    if( i>-1 && i< x && j>-1 && j< y){  //this is where the modes differ
      if(myGrid.getContent(i,j) == 'X'){
        neighbors++;
      }
    }
  }
}
return neighbors;
}

void display(){}

#endif
