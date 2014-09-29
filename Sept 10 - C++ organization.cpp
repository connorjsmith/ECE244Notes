using namespace std;

//.h files are just the prototypes of the functions (Separate files)
//.cc/.cpp files are the actual contents of the prototypes

#include <iostream>
#include <cmath>

int squared(int x){ // Takes an integer and returns its square
	return (x*x);
}
float squareroot(int x) {
	return (sqrt(x));
}


int main(int argc, char const *argv[])
{
	int a;
	cin >> a;
	cout << squared(a) << " " << squareroot(a) << endl;
	return 0;
}

/* 

Chapter 3.3 and 3.7

Difference between .cc and .h?

Important Command Line Stuff

Separate Compliation~~~
g++ -c main.cc -> main.o (Compiles individual components)                       Compiling: Doesn't use the includes. Only cause the the info typed in the file
g++ -c squareroot.cc -> squareroot.o (Compiles individual components)           ""         Can be used to test individual files to see if they work/compile properly
g++ -c square.cc -> square.o (Compiles individual components)                   ""         Assumes only the prototypes from the include'd files
Fuse them all at the end
g++ main.o square.o squareroot.o -o myprog.exe (Creates EXE)                    LINKING ->Creates portable EXE

System libraries are linked automatically

*/



//square.h   CONTAINS ONLY THE PROTOTYPE FUNCTIONS
int squareed(int x);
//squared.h
int squareroot(int x);

//square.cc  CONTAINS FUNCTION BODY/CODE
int squared(int x){
	return (x*x);
}

//squareroot.cc
#include <cmath>
float squareroot (int x){
	return (sqrt(x));
}


























