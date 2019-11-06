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
    int ducks=0;
    int nonducks=0;
    int anim=0;
    while(file){
    getline(file,line);
    if(file){
    if (line=="duck"){
	    ducks=ducks+1;
    }
    if (line!="duck"){
	nonducks=nonducks+1;
    }
    
	    anim=anim+1;
    
    }
	}
	 cout<<"Report for "<<argv[1]<<":"<<"\n"<<"   Animal count:  "<<"  "<<anim<<"\n"<<"   Duck count:  "<<"    "<<ducks<<"\n"<<"   Non duck count:  "<<nonducks<<"\n";

    }
  return 0;
}
