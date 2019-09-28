#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

struct nums{
  int size = 0;
  int header = 0;
  double temp = 0;
  vector<double> numbers; 
};


bool cmdgood(int argc); 
void openFile(ifstream &fin, char filename[]); 
void openFileOut(ofstream &fout, char filename[]);
void readFile(ifstream &fin, nums &fileNums);
void outputArray( ofstream & fout, nums &fileNums);
