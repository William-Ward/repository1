#include "temp.h"

bool cmdgood(int argc)
{ 
  //check arguments: should be 3 
  if (argc != 3)
  {
    cout << "Usage: p2060.exe inputfile outputfile" << endl;
    exit(1);
    return false;
  }
}

void openFile(ifstream &fin, char filename[])
{ 
    //open file and output error message if it didn't open
    fin.open( filename, ios::in );
    if (!fin)
    {
      cout << "The file " << filename << " failed to open.";
        exit(1);
    }
}
void openFileOut(ofstream &fout, char filename[])
{ 
    //open file and output error message if it didn't open
    fout.open( filename, ios::out );
    if (!fout)
    {
      cout << "The file " << filename << " failed to open.";
        exit(1);
    }
}
void readFile(ifstream &fin, nums &fileNums)
{
  fin >> fileNums.header;

  while(fin >> fileNums.temp)
  {
    fileNums.numbers.push_back(fileNums.temp);
    fileNums.size++;
  }
}
void outputArray( ofstream & fout, nums &fileNums)
{
    int i, j;
    fout << fileNums.size << endl;
    j = 1;

    for (i = 0; i < fileNums.size; i++)
    {
        fout << right << fixed << setprecision( 5 ) 
          << setw( 20 ) << fileNums.numbers.at(i);

        if (j % 4 == 0 && i != 0)
        {
            fout << endl;
        }
        j++;
    }
    if (fileNums.size % 4 != 0)
    {
        fout << endl;
    }
}
