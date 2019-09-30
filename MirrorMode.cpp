#include "MirrorMode.h"
using namespace std;

MirrorMode::MirrorMode(){

}
MirrorMode::~MirrorMode(){

}

void MirrorMode::countNeighbors(Grid g1){
//for each Cell in grid1
  for(int i =0; i<g1.getWidth();++i){
    for(int j=0; j<g1.getHeight();++j){
        int neighbors =0;

      //start counting neighbors from top left corner of "9 grid"
      for(int x = i-1;x<=i+1;++x){
        for(int y = j-1; y<=j+1;++y){
          //if not out of bounds
          if(!(x<0||y<0||x>g1.getWidth()||y>g1.getHeight())){
            //if not "center" 9th square
            if(!(x==i&&y==j)){
            if(g1[x][y].isAlive()){
              neighbors++;;
            }
            }
          }
        }
      }
      g1[i][j].setNeighbors(neighbors);

    }
  }
}
