#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
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
    //read dimensions
  }else if(randomOrMap=='r'){
    //set grid width and check if int
    cout<< "How wide should the grid be?"<< endl;
    cin>>boardWidth;
    if(cin.fail()){
      cout <<"You didn't enter an integer";
      exit(0);
    }
    //set grid height and check if int
    cout << "How tall should the grid be?"<< endl;
    cin>> boardHeight;
    if(cin.fail()){
      cout <<"You didn't enter an integer";
      exit(0);
    }

  } else{
    cout << "Please enter a valid answer";
    exit(1);
  }


//set dimensions of grid
Grid board(boardWidth, boardHeight);

//if file input, populate Grid
if(randomOrMap=='m'){
  //read in line 3+ one char at a time and fill grid
  for(int i =0; i<boardWidth; ++i){
    for(int j =0; j<boardHeight; ++j){
      //board.fill(i,j, board);
    }
  }
}
//if no file, ask for decimal 0-1 to populate Grid

//ask what mode

//ask if breif pause, or press enter or output to file

//method to check if grid is empty?

//method to check if grid is infinite (either too many generations or grid stays the same)

//ask user to press enter to exit

}
