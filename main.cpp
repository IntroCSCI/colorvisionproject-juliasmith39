//Author: Julia Smith
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "colorTheme.h"
using namespace std;

//Function prototypes:
void colorMatch(string &, vector<string> &);


int main(){
  string colorName;
  string fileName;
  fstream reader;
  string line;
  bool colorFound=false;
  vector<string> colors;
  class colorTheme themeProblem;
  
 ifstream myfile("colornames.txt");
   if (myfile.is_open()){
     while(getline(myfile,line)){
     colors.push_back(line);
     }
    myfile.close();
   }

 //Calls the colorMatch function to check to see if the user input for the color matches with that of a color in the colornames.txt file

 colorMatch(colorName,colors);

//Creates an SVG file where the user gets to choose what to name it 

 cout << "Give a name to save the file as: " << endl;
 cin >> fileName;
 fileName= fileName+".svg";
 cout<<endl;


//Creates the 6 color theme by calling one of the functions within our newly created colorTheme class, and displays this 6 color theme to the user 

 std::ofstream outFile (fileName);
 vector<string> fileColors=themeProblem.buildTheme(colorName,colors);
  if(outFile.is_open()){
   for(int i=0; i<fileColors.size(); i++){
     outFile<< fileColors[i]<< endl;
     cout<<fileColors[i]<<endl;
    }
   outFile.close();
  }

//Determines whether or not a color combination is problematic for users with color blindness by calling one of the functions within the colorTheme class

 cout<<endl<<"Determining if there are any problematic colors in this theme... (a warning will be displayed if problematic colors were found, otherwise, nothing will be displayed)"<<endl<<endl;
  
 themeProblem.problemColors(colors,fileColors);

  return 0;
}


//Function definitions:

void colorMatch(string & colorName, vector<string> & colors){
  bool colorFound=false;
  while(!colorFound){
    cout << "Input a color value with a given name to be saved with your theme (capitalize the first letter of each word, and don't include spaces): " << endl;
    cin >> colorName;
    cout<<endl;
    for(int i=0; i<colors.size(); i++){
      if(colors[i]==colorName){
         colorFound=true;
         break;
      }
    }
    if(!colorFound){
     cout<<"Try again."<<endl;
    }
  }
} 
