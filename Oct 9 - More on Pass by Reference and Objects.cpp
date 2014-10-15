//Pass by reference prevents you from deep copying objects (Expensive)
//However, if u pass by reference, the function can destroy or modify the object being passed.
//If you use the const modifier, it will prevent changing the object.
Time& Time::operator+ (const Time & rhs) const{ // The right hand side (rhs) is const. and so is the left hand side (denoted by second const)
	int TotalTime;
	Time newTime;
	//assign newTime

	return (newTime);//newTime gets deleted, therefore the returned reference wont work outside of this scope
}

//Slightly better implementation

Time & Time::operator+ (const Time & rhs) const {
	int TotalTime;
	Time* psum = new Time();
	//Assign to psum

	return (*psum);//psum pointer is out of scope, we've lost the only reference to the new object -> MEMORY LEAK
}

//Proper implementation: RETURN BY VALUE, CREATE A COPY

Time Time::operator+ (const Time & rhs) const {
	int TotalTime;
	Time sum;

	//assign sum

	return (sum); // Sum is not destroyed because the compiler knows you are passing it by value -> doesn't need to recreate it.
	//Called RETURN VALUE OPTIMIZATION. most compilers have this. very rare case scenario
}
Time z = X + Y;//X and Y are time objects.




//More on constructors

Time::Time(const & Time);//Copy constructor. Time copy (originalTime);