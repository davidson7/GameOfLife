#include <iostream>
#include <fstream>
#include <cstdlib>

#include "ClassicMode.h"
#include "MirrorMode.h"
#include "DonutMode.h"
#include "Grid.h"

using namespace std;

/*TODO check order, rows columns, height width
Mirror: count neighbors and fill grid
main: relative file location, choose mode, output to file, random dist
Grid: test print and write compare
Donut: start

*/

int main(){
  //Grid *firstGrid = new Grid(3,3);

  char randomOrMap;
  int boardWidth;
  int boardHeight;
  char mode;


//ask for file to read from or random generation
  cout<<"Would you like to use a map file(m) or random generation(r)?"<<endl;
  cin>>randomOrMap;

  //check for valid input and get dimensions of grid, and placement of filled cells
  if(randomOrMap=='m'){
    ifstream inStream;
    cout<<"What is the path of the file?"<< endl;
    string filepath;
    cin>>filepath;
    inStream.open(filepath.c_str());

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
    cout << boardWidth;*///broken TODO add end block comment

  /*  cout<<"File reading currently broken, please manually enter dimensions"<<endl;
    inStream.close();
    exit(1);*/


  } if(randomOrMap=='r'){
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
  else{
    cout << "Please enter a valid answer";
    exit(0);
  }
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
      board.manualFill(j,i,c);

    }
  }
  inStream.close();
}
//if no file, ask for decimal 0-1 to populate Grid
if(randomOrMap == 'r'){
  cout<<"Please enter a decimal, 0-1"<< endl;
  double concentration;
  cin>>concentration;

}
//ask what mode
cout<<"Which mode? Classic (c), Mirror (m), or Donut (d)"<<endl;
cin>>mode;
if(mode == 'c'){
  ClassicMode* mode = new ClassicMode();
}if(mode =='m'){
  MirrorMode* mode = new MirrorMode();
}if(mode == 'd'){
  DonutMode* mode = new DonutMode();
}else{
  cout<<"Please pick a valid mode";
  exit(0);
}



//ask if breif pause, or press enter or output to file
cout<<"Would you like to output to a file?"<<endl;

//start printing grids

//method to check if grid is empty?

//method to check if grid is infinite (either too many generations or grid stays the same)

//ask user to press enter to exit
return 0;
}
//#endif
