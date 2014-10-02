class DayofYear{
private:
	//Private variables. uninitialized
	int day;
	int month;
public:
	//Constructors must be public or else new objects cannot be instantiated outside of another DayofYear class
	DayofYear(); // Says we will be making our on constructor. Takes no arguments
	DayfoYear(int d, int m);//Overloading for new initialization case
	~DayofYear();//Destructor
};


//example
DayofYear::DayofYear(){//Must be the same name as the class
	day = 1;
	month = 1; // Initializes variables when a new day object is created
}

DayofYear::~DayofYear(){
	cout <<"Destroying dayofyear object"<<endl;
}

int main(){
	DayofYear newyear; //Day = 1, Month = 1; no argument Constructor is involked.
	DayofYear randomDate(1,3);//Day = 1, Month = 3. Overloaded constructor

}

//Objects can be destroyed in two ways depending if they are automatic (ie int a;) or dynamic (ie int * a = new int;).
//NOTE: CREATING THE POINTER IS AUTOMATIC.
DayofYear * a; // Automatic allocation of the pointer a
a = new DayofYear; // Dynamic allocation. Can be deleted with delete a; Constructor of DayofYear is used.
//Dynamic:
DayofYear * newyear = new DayofYear;
delete newyear;//Object in memnory is deleted. Pointer still exists. Pointer cannot be deleted.
//Automatic: Deleted automatically when it leaves the scope. Ie. end of a function call
if (flag){
	DayofYear newyear;
}
//Destructor called here on newyear;



//Special Pointer
void DayofYear::setDay(int d){
	day = d;
}

void DayofYear::setDay (int d){
	(*this).day = d; // Equivalent to above.
}


