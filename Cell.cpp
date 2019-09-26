#include "Cell.h"
using namespace std;

Cell::Cell(){
alive = false;
neighborCount=0;

}

Cell::~Cell(){

}
void Cell::setNeighbors(int num){
  neighborCount=num;
}
bool Cell::isAlive(){
  return alive;

}
void Cell::setAlive(bool tf){
  alive = tf;
}
