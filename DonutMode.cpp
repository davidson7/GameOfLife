#include "DonutMode.h"
using namespace std;

DonutMode::DonutMode(){

}
DonutMode::~DonutMode(){

}

int DonutMode::countNeighbors(Grid g1,int i, int j){
//for each Cell in grid1
  //for(int i =0; i<g1.getWidth();++i){
    //for(int j=0; j<g1.getHeight();++j){
        int neighbors =0;

      //start counting neighbors from top left corner of "9 grid"
      for(int x = i-1;x<=i+1;++x){
        for(int y = j-1; y<=j+1;++y){
          //if not out of bounds
          if(!(x<0||y<0||x>g1.getWidth()||y>g1.getHeight())){
            //if not "center" 9th square
            if(!(x==i&&y==j)){
            if(g1.getChar(x,y)=='X'){
              neighbors++;;
            }
            }
          }
        }
      }
      return neighbors;

    }


    //goes through grid and fills g2 with alive and dead cells
    void DonutMode::fillGrid(Grid grid2, Grid grid1){
      for(int i = 0; i<grid2.getHeight();++i){
        for(int j =0; j<grid2.getWidth();++j){
          int neighbors = countNeighbors(grid1, i,j);
          bool alive=false;
          if(grid1.getChar(i,j)=='X'){
            alive = true;
          }
          //if the next gen cell should be alive
          if(grid2.fillCell(neighbors, alive)){
            grid2.manualFill(i,j,'X');
          }else{ //else dead
            grid2.manualFill(i,j,'-');
          }

        }
      }
    }
