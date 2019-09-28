#include "temp.h"

int main(int argc, char **argv)
{
  ifstream fin; 
  ofstream fout;

  nums fileNums;

  
  cmdgood(argc);             //check command line arguments
  
  openFile(fin, argv[1]);    //open and check file
  openFileOut(fout, argv[2]); //open and check file

  readFile(fin, fileNums);   //read the file into the vector
  sort(fileNums.numbers.begin(), fileNums.numbers.begin() + 10 );

  outputArray( fout, fileNums);

  fin.close();

  return 0;
}

