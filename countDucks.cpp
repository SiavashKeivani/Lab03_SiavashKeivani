// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream
using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
   // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
    ifstream file;
    file.open(argv[1]);
    if(!file){
	   cout<<"Unable to Open File";
	   exit(1); // terminate w/o error
	   } else{
    string line;
    int x=0;
    while(file){
    getline(file,line);
    if (line=="duck"){
	    x=x+1;
    }
    }
    cout<<"There were "<<x<<" ducks in "<< argv[1]<<endl;
	   }







  
  return 0;
}
