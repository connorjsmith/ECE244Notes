//We want to implement a complex number data type

Complex d(1,1); //1 + 1i
Complex z;//0 + 0i;


class Complex {
	private:
		float real;
		float imaginary;
	public:
		Complex();//Default Constructor
		Complex(float r,float i);//real + complex constructor
		Complex(float r);//Pure real constructor
		print() const;
};

Complex::Complex(){
	real = 0.0;
	imaginary = 0.0;
}

Complex::Complex(float r, float i){
	real = r;
	imaginary = i;
}

Complex::Complex(float r){
	real = r;
	imaginary = 0.0;
}

Complex Complex::operator+ (const complex & rhs) const{//pass by reference, Wont be changing rhs
	Complex temp;
	temp.real = real + rhs.real;
	temp.imaginary = imaginary + rhs.imaginary;
	return (temp);//Pass by value. temp is copied [copy constructor involked]
	//If i tried to return by reference, the returned reference would be to temp, which gets destroyed because it leaves the scope
	//If i tried to return a (*temp), the object would remain but the pointer would be destroyed = Memory leak
}

//Operator overloading NOT AS A MEMBER FUNCTION
Complex operator+ (const Complex& a, const Complex& b){
	return (Complex(a.real+b.real,a.real,b.real);//Problem: you do not have access to a and b, private members
}

//Solution: Friend Functions

Foo {
	private:
		int x;
	public:
		Foo(int x);
		//... Other stuff
		friend int operator+(const foo& a,const foo& b);//Can now write the function later. 
														//This function is not a member of Foo, but it CAN access the private members of Foo
														//friend int main() would give main access to all private members (effectively breaking access control)
}
