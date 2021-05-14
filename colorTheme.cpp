//Author: Julia Smith
#include "colorTheme.h"
#include<iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using namespace std;


//Member function implementations:
  
  //This function reads through the created color theme of 6 colors as well as the colornames.txt file and determines if any of the colors in the theme are any distance of 3 lines away from any of the given colors in the colornames.txt list. 
  //This is because any colors that are that close together could potentially be really similar in color, and would thus be hard for those with color blindness to distinguish between them

void colorTheme::problemColors(vector<string> allColors, vector<string> fileColors){
  for(int i=0; i<allColors.size(); i++){
    for(int j=0; j<fileColors.size(); j++){
      if(allColors[i]==fileColors[j]){
      fileColorIndices.push_back(i);
      }
    }
  }
  for(int i=0; i<fileColorIndices.size(); i++){
    for(int j=i+1; j<fileColorIndices.size(); j++){
      if(abs(fileColorIndices[i]-fileColorIndices[j])<=3){
      cout<< "WARNING: These two colors could be problematic for those with color blindness: \n"<< 
      allColors[fileColorIndices[i]]<< " and "<<allColors[fileColorIndices[j]]<< endl;
      warningFlag=true;
      break;
      }
    }
    if(warningFlag==true){
      break;
    }
  }
}

//This function creates our 6 color theme, indexing from each color by 41, starting at the user's chosen color
vector<string> colorTheme::buildTheme(string & colorInput, vector<string> & colorList){

  returnColors.push_back(colorInput);
  for(int i=0; i<colorList.size(); i++){
    if(colorList[i]==colorInput){
      index=i;
      break;
    }
  }
    while(returnColors.size()<6){
      if(colorList.size()-index>41){
        index=index+41; 
      }else{
        index=41-(colorList.size()-index);
      }
      if(colorList[index] != colorInput){
        returnColors.push_back(colorList[index]); 
      }else{
        index=index+1;
      }
    }
  return returnColors;
}
