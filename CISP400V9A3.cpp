// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A3
// PURPOSE : Test program for class GradeBook.h
// Software Change (Modifications) Record
// date         what               who
// 10/01/2015   created program    Yev
// include definition of class GradeBook from GradeBook.h

#include "GradeBook.h" // include definition of class GradeBook from GradeBook.h

int main()
{
	// create GradeBook object myGradeBook and 
	// pass course name to constructor
	GradeBook myGradeBook("CISP400 Object Oriented Programming with C++");
	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.inputGrades(); // read grades from user
	myGradeBook.displayInputs(); // display inputted information
	myGradeBook.displayGradeReport(); // display report based on grades
	myGradeBook.~GradeBook(); // call destructor
	myGradeBook.displayMessage(); //try to display the destroyed object information
	system("PAUSE");
	return 0; // indicate successful termination
} // end main
