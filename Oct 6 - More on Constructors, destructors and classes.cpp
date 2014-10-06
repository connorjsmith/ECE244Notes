//Defining custom operators on classes

//Example, adding times
class Time {
	private:
		int second,minute,hour;
	public:
		operator+ (Time rhs);//Skeleton code for new time operator (+)
};

Time Time::operator+(Time rhs){ // RHS is copied by value (deep copy)
	//Define how you want to add the times
	int Totaltime;
	Time sum;

	Totaltime += second 60*minute + 3600*hour;//Operating on the first object. ie Time1.operator+(Time2), we'd be talking about Time1
	Totaltime += rhs.second + 60*rhs.minute + 3600*rhs.hour
	sum.hour = Totaltime/3600;
	sum.minute = (Totaltime - 3600*sum.hour)/60;
	sum.second = Totaltime%60;
	return (sum);//Returns by VALUE
	//Destructor is called on sum and rhs (in that order usually)
}

//Using the operator
Time x,y;

Time newtime = x.operator+(y);//newtime = x + y;

//HOWEVER! C++ is smart enough to know if you write x + y, you meant x.operator+(y);
Time newtime2 = x + y;//newtime == newtime2

//Works similarly for Time Time::operator-(Time rhs). Can then do x-y;
//This must be done for deepcopies for objects, overloading the operator= of the function. THIS IS THE DEFAULT operator= FOR OBJECTS

//Overloaded operators also respect precendces. x = y+z will invoke y+z first and then call = on the result and x;

//Note: x=y returns the value x. Therefore z=x=y is equivalent to x=y;z=x;