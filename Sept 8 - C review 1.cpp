/*
Chapters 1-5 = C Review


Typical C program:

<include(s)> //What libraries would you like to use
int main(){
	<variable declarations>;
	<statements/functions>;
	return (0);
}
more functions
*/
//Example 1: Basic Hello World Program in C++
using namespace std; // needed to avoid std:: prefacing things. Standard Namespace
#include <iostream> //I want to use the iostream package and functions
int main(int argc, char const *argv[]){
	int x;
	std::cout << "Hello World" << std::endl; //cout rather than printf. endl = new line
	std::cin >> x; //like scanf, place read value from terminal into x
	return (0); // use brackets rather than naked 0
				// Returning 0 to the operating system, indicates it exitted properly/successfully
}

/*
IMPORTANT
New Variable Types:
	bool => boolean type. 'true' or 'false'

Functions are slightly different:
*/

//Regular Functions
int squared (int x){ //x is a 'formal parameter'
	int temp; //only accessible within this function, not namespaced for the whole function
	temp = x*x;//x is a copy of the VALUE of the passed argument. Changing the value of the copies doesn't affect the originals IMPORTANT
	return (temp);
}


//Pass by Reference Functions: rather than using pointers
/*
void swap (int& a, int& b){ //a and b are now aliases for the variables used as arguments -> IMPORTANT: NO COPIES MADE. simple renaming
	int t = a;
	a = b;
	b = t; //a and b are now swapped in memory, not just inside the function
}
swap(x,y); //x and y are now swapped in memory
*/
/* Pass by Value: Cost of copying, but original is protected (slower)
   Pass by Reference: No Copying cost, but original can be changed/damaged (faster)


   
*/
//Another Big Change: STRINGS
   /*
#include <string> //required to use strings
int main(int argc, char const *argv[])
{
	std::string firstName;
	std::string lastName;
	firstName = "Tarek";
	lastName = "Abdelrahman";
	string fullName = firstName + " " + lastName; //String Concatenation with +'s
	lastName[1] = 'c'; //lastName = "Acdelrahman"	
	return 0;
}
*/
/*
Function Overloading:




*/