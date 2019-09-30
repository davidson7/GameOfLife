#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
//#include "Cell.h"
//#include "ClassicMode.h"
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
    cin>>filepath;
    inStream.open(filepath);

    //check if file can be opened
    if(inStream.fail()){
      cout << "Opening input file failed. Make sure you entered the path correctly\n";
      exit(1);
    }

    //read dimensions
    string line;
    inStream >> line;

  /*  boardHeight=line[1];
    inStream.ignore(10,'\n');
    boardWidth=line[2];

    cout<< boardHeight;
    cout << boardWidth;*////broken
    cout<<"File reading currently broken, please manually enter dimensions"<<endl;
    inStream.close();
    exit(0);


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
  }else{
    cout << "Please enter a valid answer";
    exit(1);
  }

//set dimensions of grid
Grid board(boardWidth, boardHeight);

//if file input, populate Grid
if(randomOrMap=='m'){
  //read in line 3+ one char at a time and fill grid
  ifstream inStream;
  string line;
  inStream >> line;

  for(int i =0; i<boardHeight; ++i){
    for(int j =0; j<boardWidth; ++j){
      //read in char
      char c = line[j];
      cout << c; //remove later
      board.fill(j,i,c);

    }
  }
  inStream.close();
}
//if no file, ask for decimal 0-1 to populate Grid
if(randomOrMap == 'r'){
  cout<<"Please enter a decimal, 0-1"<< endl;
  float concentration;
  cin>>concentration;

}
//ask what mode
cout<<"Which mode?";

//ask if breif pause, or press enter or output to file

//start printing grids

//method to check if grid is empty?

//method to check if grid is infinite (either too many generations or grid stays the same)

//ask user to press enter to exit

}
