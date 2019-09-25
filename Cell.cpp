#include "Cell.h"
using namespace std;

Cell::Cell(){
isAlive = false;
neighborCount=0;

}

Cell::~Cell(){

}
void Cell::setNeighbors(int num){
  neighborCount=num;
}
