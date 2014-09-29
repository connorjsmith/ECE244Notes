//Reference: Ch 2.2, 6.1

/*
	cin: converts keyboard input into binary representation
	cout: converts binary representation to character output and puts in on the screen STREAM HANDLER/ENCAPSULATES STREAM
	cerr: same as cout, but uses the error output stream
*/
	cout << x;
	//Step 1: Look at x, figure out its type (int, float, char array)
	//Converts the binary representation given its type and converts it to the appropriate  char representation. Sends Chars one at a time (stream)
	//Sends the converted characters to the screen buffer



//COUT FORMATTING
	#include <iomanip> //IO manipulator
	cout << setw(8) << x; //setw comes from iomanip
						  //setw makes sure x is printed in a specific field of characters. If x takes less than 8 characters, 
						  //it will fill it from the left with white space.
						  //x will push the field bigger if it cannot fit (setw is a min size)
						  //Only applies to this print, subsequent print will be unaffected

	cout << setfill('0') << setw(8) << x; //setfill will change the 'whitespace' character for the field size. ie. add leading zeros rather than spaces
										  //setfill is persistent. It WILL AFFECT SUBSEQUENT PRINTS

	cout << setprecision(2) << x; //x will be printed with a decimal precision of 2 (ie 1.00)

	cout << right << x; //x will be right aligned. Also works with left

	cout << hex << x; //x will be printed in hex notation rather than decimal. Also works with bin, oct, dec


//CIN
	int x;
	cin >> x; //receives input from keyboard buffer and puts it in the variable x. Does the type conversion based on the type of x
	//cin uses an index for the buffer. Looks at each letter individually (index=0). If it fits in the type, add it to the number(x = x*10+c)
	//if cin finds a character that does not fit the type (ie a space), it breaks and finishes reading into x. The remaining chars stay in buffer
	//THE NEXT CIN WILL START READING FROM THE OLD BUFFER. may result in unexpected input characteristics.

	//ie.
	int x,y;
	cin >> x; //given '123 243'
	cin >> y; //Doesn't prompt again
	//x = 123, y = 243
	//equivalent to cin >> x >> y;

	int x;
	float y;
	cin >> x >> y //given '123.45'
	//x = 123, x cannot contain decimal points because it is an integer	
	//y = 0.45

	int x;
	cin >> x; //given 'abc'
	//cin raises an error flag, but fails SILENTLY. YOU must check the flag. C++ continues to execute as if nothing happened. x's value is unaffected.

	//Checking the Fail Flag
	int x;
	cin >> x;
	if (cin.fail()){ //cin.fail() returns the fail flag's value. Other values of cin include cin.succeed().
		cout << "BAD INPUT";
		//Fail flag is not automatically reset. Must be done manually
		cin.clear(); //Resets the flag
	} else {
		cout << "GOOD INPUT";
	}

	//End of Files Characters.
	//Represented by ^D 

	int x;
	int sum = 0;
	bool more = true;
	while (more){
		cin >> x; //Read input
		if (cin.eof()) more=false;//cin.eof() returns true if the last character read was the ^D eof character
		else sum = sum + x; //Fails if you read a letter. It will add the value of x twice if reading a letter -> Fail Flag set
	}

bool hello(){

}
int main(int argc, char const *argv[])
{
	hello;
	return 0;
	if (sdfds){
		dfdf
	}
}