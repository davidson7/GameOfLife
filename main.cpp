#include <iostream>
#include <fstream>
#include <cstdlib>
//#include <string>
#include "Simulation.h"
#include "ClassicMode.h"
#include "Grid.h"

using namespace std;

int main(){

  char randomOrMap;
  int boardWidth;
  int boardHeight;

//ask for file to read from or random generation
  cout<<"Would you like to use a map file(m) or random generation(r)?"<<endl;
  cin>>randomOrMap;

  //check for valid input and get dimensions of grid, and placement of filled cells
  if(randomOrMap=='m'){
    ifstream inStream;
    cout<<"What is the absolute path of the file?"<< endl;
    string filepath;
    cin>> filepath;
    inStream.open(filepath);
    //check if file can be opened
    if(inStream.fail()){
      cout << "Opening input file failed. Make sure you entered the absolute path\n";
      exit(1);
    }
    //check if file can open
  }else if(randomOrMap=='r'){
    cout<< "What would you like the dimensions of the grid to be?"<< endl;
//cin>>grid dimensions
  } else{
    cout << "Please enter a valid answer";
    exit(1);
  }
//set dimensions of grid
//Grid board[][] = new Grid(boardWidth,boardHeight);

}
