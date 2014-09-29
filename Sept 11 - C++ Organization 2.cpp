//Slides are located on Blackboard

//file: myprog.cc
int squared(int x);
float squareRoot(int x);

int main(int argc, char const *argv[])
{
	...
	return 0;
}

int squared(int x){
	...
}
float squareRoot(int x){
	...
}
//single compile: 
//                g++ myprog.cc -o myprog.exe
//If there is a bug in squared, you'd have to recompile the ENTIRE file. With large files, this can take DAYS even on fast computers
//Single files also limit collaboration. Cannot split up work amongst multiple people




//Better Version:
//Header Files~~~~~~~~~~~~~~~~~~~~~~~~~~~
//file: squared.h
int squared(int x);
//file: squareRoot.h
float squareRoot(int x);
//implementation files~~~~~~~~~~~~~~~~~~~~
//file: squared.cc
#include "squared.h" //customary, prevents global variables from being missed
float squared(int x){
	...
}
//file: squareRoot.cc
#include "squareRoot.h" //customary, prevents global variables from being missed
float squareRoot(int x){
	...
}
//file: main.cc
#include "squareRoot.h" //Needed because it contains the function prototypes -> Prevents undefined function errors. 
#include "squared.h"    //Effictively copies+pastes the contents

int int main(int argc, char const *argv[])
{
	...
	return 0;
}

//compilation: -c flag means compile only, do not link
/*
	g++ -c squared.cc (produces squared.o)
	g++ -c squareRoot.cc (produces squareRoot.o)
	g++ -c main.cc (produces main.o)
	g++ main.o squared.o squareRoot.o -o myProg.exe (links individually compiled files)
*/




//QUESTION: What if you include the same file twice?

	//COMPILER ERROR!

	//Fix:
	//In ALL your .h files, do the following:
	#ifndef fileName //If this isn't defined. The Variable must be different for each file, and should be named the same as the file name.
		#define fileName //define without a value means true
		int squared(int); 
	#endif
		//This will only ever run once. Multiple inclusions will not happen

//Makefiles
//VERY USEFUL FOR SAVING TYPING TIME: http://mrbook.org/tutorials/make/