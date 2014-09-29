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




//class functions~~

//You can set the body of the functions outside of the classes
void DayOfYear::setDay(int d){...} //need the class name for scoping reasons. Prevents ambiguity
void DayOfYear::setMonth (int m){...}
void DayOfYear::print () {...}

//These functions are allowed to access object variables, because they can NEVER be 
//called without first instantiating the object -> its variables are now available

//to prevent malicious member access, you need to ENCAPSULATE members to ensure they cannot be accessed outside of how you intend them to be accessed.

//Better class declaration:
class DayOfYear {
	private: //cannot be accessed except by members of this class (ie setDay and setMonth);
		int day;
		int month;
	public: // Accessable by member functions AND outside functions (ie can call FirstOfJuly.setDay(10); in main)
		void setDay(int d);
		void setMonth(int m);
		void print ();
};

DayOfYear birthday;
birthday.day = 10; //ERROR!
int hello = birthday.day; //ERROR! Cannot read OR write
birthday.setDay(10); // OK!