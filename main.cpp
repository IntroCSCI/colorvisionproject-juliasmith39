//Author: Julia Smith
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string colorName;
  string fileName;

  cout << "Input a color value with a given name to be saved with your theme (capitalize the first letter of each word, and don't include spaces): " << endl;
  cin >> colorName;

  cout << "Give a name to save the file as: " << endl;
  cin >> fileName;

  std::ofstream outFile ("fileName.svg");
  outFile << "The base color for your theme was " << colorName;
  
  outFile.close();

  return 0;
}
