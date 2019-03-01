#include 'Grid.h'
using namespace std;

Grid::Grid(){
mWidth = 1;
mHeight = 1;
myGrid = new char[mWidth][mHeight]
}

Grid::Grid(int width, int height){
  mWidth = width;
  mHeight = height;
  myGrid = new char[mWidth][mHeight];
}

Grid::~Grid(){

}

/*void Grid::setDimensions(int width, int height){
  mWidth = width;
  mHeight = height;
  myGrid =

}
*/
