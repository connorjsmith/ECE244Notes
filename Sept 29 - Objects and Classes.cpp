//Structures
struct dayofyear {
	int day;
	int month;
};

struct dayofyear christmas;
christmas.day = 25;
christmas.month = 12;

//Classes. Sorta like glorified structs
class DayOfYear {
	//These are all members

	//Data Members
	int day;
	int month;
	//Function Members
	void setDay(int d);
	void setMonth (int m);
	void print();
}; //Don't forget the final semi colon

//instantiate new instances of the class
DayOfYear FirstOfJuly;
FirstOfJuly.day = 1;
FirstOfJuly.month = 7;
//FirstOfJuly also has the function members. THEY ARE NOT COPIED 
//FirstOfJuly is called an OBJECT not a class or a variable.

//Class is sort of like a template