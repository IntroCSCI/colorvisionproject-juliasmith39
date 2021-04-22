//Author: Julia Smith
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void colorMatch(string &, vector<string> &);

vector<string> colorTheme(string,vector<string>);

int main(){
  string colorName;
  string fileName;
  fstream reader;
  string line;
  bool colorFound=false;
  vector<string> colors;
  
 ifstream myfile("colornames.txt");
   if (myfile.is_open()){
     while(getline(myfile,line)){
     colors.push_back(line);
  }
 myfile.close();
}
 colorMatch(colorName,colors);

 cout << "Give a name to save the file as: " << endl;
 cin >> fileName;
 fileName= fileName+".svg";

 std::ofstream outFile (fileName);
 vector<string> fileColors=colorTheme(colorName,colors);
 if(outFile.is_open()){
   for(int i=0; i<fileColors.size(); i++){
     outFile<< fileColors[i]<< endl;
     cout<<fileColors[i]<<endl;
   }
   outFile.close();
 }

  return 0;
}

void colorMatch(string & colorName, vector<string> & colors){
  bool colorFound=false;
  while(!colorFound){
    cout << "Input a color value with a given name to be saved with your theme (capitalize the first letter of each word, and don't include spaces): " << endl;
    cin >> colorName;
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

vector<string> colorTheme(string colorInput, vector<string> colorList){
  vector<string> returnColors;
  int index;

  returnColors.push_back(colorInput);
  for(int i=0; i<colorList.size(); i++){
    if(colorList[i]==colorInput){
      index=i;
      break;
    }
  }
    while(returnColors.size()<6){
      if(colorList.size()-index>23){
        index=index+23; 
      }else{
        index=23-(colorList.size()-index);
      }
      if(colorList[index] != colorInput){
        returnColors.push_back(colorList[index]); 
      }else{
        index=index+1;
      }
    }
  return returnColors;
}
