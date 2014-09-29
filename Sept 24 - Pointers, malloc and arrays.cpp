//Sept 24 - Pointers, malloc and arrays
//Textbook: 9.1, 10.1

//Examples of Pointers
int * p; //Creates a pointer (named p) to an integer type.
int x = 5; //Creates a variable x and sets it to 5
p = &x; //Sets p to point at x. '&' takes the address of the variable.
p* = 10; //Sets what whatever address p is pointing at to 10. x=10 now. * dereferences the pointer

//New techniques
p = new int; //allocates memory for an integer but does not give it a value. p points to this new memory. Note: this new memory does not have a variable name
*p = 8; //Same as the first example. the newly allocated memory has now been set to have a value of 8

//Structures:

struct node {
	int id; //creates an integer
	struct node* next; //Points to a structure in memory. 
}; //Needs this semicolon
struct node* q; //Creates a pointer to a struct node called q

//Other technique:
q = new struct node; //Creates a node pointer just like above. No variable name, just a pointer. Structure is not initialized. 
					//Name of this variable is effectively *q
//Assigning elements of a structure:
*q.id = 0;
*q.next = NULL;

//deallocating memory:
delete q; //Deletes the structure from memory. q still points at the address. Careful for seg faults with this. 'dangling pointer'

//if you wanted to access pointer inside q:
*(*q.next).id = 10; 

//Other methods

q->id = 10;//Same as *q.id
q->next->id = 6;//Same as *(*q.next).id = 6;


//Traversing Linked Lists:
while (p!=NULL){
	cout << p->id <<endl; //Prints out all of their ids
	p = p->next;
}


//Allocating arrays
//Wrong way
a = int[n]; //n must be a known constant or else the compiler will give an error
//right way
p = new int[n]; //n doesn't need to be known at run time. pretty much an abstracted malloc


//Deleting arrays
delete [] r; //Deleles the array and all its elements. This always works for multi-dimensional arrays

/*





asfafdfsd