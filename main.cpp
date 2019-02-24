#include <iostream>
#include "Simulation.h"
#include "ClassicMode.h"
#include "Grid.h"

using namespace std;

int main(){

  char randomOrMap;

//ask for file to read from or random generation
  cout<<"Would you like to use a map file(m) or random generation(r)?"<<endl;
  cin>>randomOrMap;

  //check for valid input and get dimensions of grid, and placement of filled cells
  if(randomOrMap=='m'){
    cout<<"What is the absolute path of the file?"<< endl;
    //cin>>abosolute path
    //check if file can open
  }else if(randomOrMap=='r'){
    cout<< "What would you like the dimensions of the grid to be?"<< endl;
//cin>>grid dimensions
  } else{
    cout << "Please enter a valid answer";
    exit(1);
  }
//set dimensions of grid


}
