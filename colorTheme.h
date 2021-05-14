#ifndef COLORTHEME_H
#define COLORTHEME_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class colorTheme
{
  private:
  //Member variables:
  vector<int> fileColorIndices;
  vector<string> returnColors;
  int index;
  bool warningFlag;
  
  
  public:
  //Member function prototypes: 
  void problemColors(vector<string>, vector<string>); 
  
  vector<string> buildTheme(string &, vector<string> &);
};

#endif 