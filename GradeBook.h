// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A3
// PURPOSE : GradeBook class definition. This file presents GradeBook's public 
//           interface without revealing the implementations of GradeBook's member
//           functions, which are defined in GradeBook.cpp
//           To show my understanding of a header file and function prototypes.
// Software Change (Modifications) Record
// date         what               who
// 10/01/2015   created program    Yev

#include <string> // program uses C++ standard string class
using namespace std; // program uses names from the std namespace

#define A_RATE 4.0 // weight of grade A
#define B_RATE 3.0 // weight of grade B
#define C_RATE 2.0 // weight of grade C
#define ARRAY_SIZE 100
#define ARRAY_SIZE2 6

// GradeBook class definition
class GradeBook
{
public:
	GradeBook(string); // constructor initializes course name
	void setCourseName(string); // function to set the course name
	string getCourseName(); // function to retrieve the course name
	void initializeData(); // initialize private data members
	void displayMessage(); // display a welcome message
	void inputGrades(); // input arbitrary number of grades from user
	void displayGradeReport(); // display a report based on the grades
	void displayInputs(); // display grades entered in a tabulate format
	double calculateGrade(); // calculate the class average
	~GradeBook(); // destructor
private:
	string courseName; // course name for this GradeBook
	char letterGrades[ARRAY_SIZE]; // stores all letter grades
	int countGrades[ARRAY_SIZE2]; // total count for each type of grade entered
}; // end class GradeBook  
