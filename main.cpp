#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "ClassicMode.h"
#include "MirrorMode.h"
#include "DonutMode.h"
#include "Grid.h"

using namespace std;

/*TODO check order, rows columns, height width
Mirror: count neighbors and fill grid
main: file segfault, choose mode, output to file, random dist
Grid: write compare
Donut: start

*/

int main(){
    char randomOrMap;
  int boardWidth;
  int boardHeight;
  char modeChar;


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

    //read dimensions -segfault here

    string line1, line2;
    inStream>>line1>>line2;
    inStream.close();
    //boardHeight = stoi(line1);
    //boardWidth = stoi(line2);
    //cout<< boardHeight<<endl;
    //cout<<boardWidth<<endl; //broken TODO add end block comment

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

//populate board
  for(int i =0; i<boardHeight; ++i){
    for(int j =0; j<boardWidth; ++j){
      char c;
      int randomNum = rand()%100+1;
      int intConcentration = concentration*100;
      if(randomNum<intConcentration){
        c='-';
      }
      else if(randomNum>intConcentration){
        c='X';
      }
      board.manualFill(i,j,c);
    }
  }

}
//print first gen grid
board.print();


//ask what mode
cout<<"Which mode? Classic (c), Mirror (m), or Donut (d)"<<endl;
cin>>modeChar;
if(modeChar == 'c'){
  ClassicMode* mode = new ClassicMode();
}else if(modeChar =='m'){
  MirrorMode* mode = new MirrorMode();
}else if(modeChar == 'd'){
  DonutMode* mode = new DonutMode();
}else{
  cout<<"Please pick a valid mode"<<endl;
  exit(0);
}


//ask if breif pause, or press enter or output to file
//cout<<"Would you like to output to a file? (y/n)"<<endl;



//start printing grids

//method to check if grid is empty?

//method to check if grid is infinite (either too many generations or grid stays the same)

//ask user to press enter to exit
return 0;
}
//#endif
