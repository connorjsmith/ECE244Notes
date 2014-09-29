/*//Reference Txtbook: 2.2, 6.1

string sequence = "123 456 789"; //User typed this. Space delimitted

//If you wanted to read the spaced numbers x,y,z from this string, you can use STRING STREAMS. These come along with the same functions as cin streams

#include <iostream>//IO Streams
#include <sstream>//String Stream
string sequence = "123 456 789";
int x,y,z;
std::stringstream myOwnStream(sequence); //Create a string stream out of the sequence string variable.
//String Streams work very similarly to cin/cout streams. Stringstreams also have/add eof characters at their ends
myOwnStream >> x; //x = 123 (int)
myOwnStream >> y; //y = 456
myOwnStream >> z; //z = 789
if (myOwnStream.eof()) {//True, all characters have been read from the stream.
						//myOwnStream has its own set of flags separate from cin

}

//To enforce only getting 1 line (rather than cin which keeps prompting until all variables are filled):
getline(std::cin,stream); //Specifies you want to get the line from the cin buffer, and store that line in stream. Useful if you want to avoid space delimiting

*/
//Example Program
#include <iostream>
#include <sstream>

using namespace std;
int int main(int argc, char const *argv[])
{
	cin >> hello;
	hello(world,sdfsd);
	ready;
	return 0;
}