#include <iostream>

#include <fstream>

#include <iomanip>

using namespace std;

//Function to create and write data in a text file
void printResult(string course_g1, float courseavg_g1, float courseavg_g2) {
//creating fstream object file
  ofstream output;
  
  //opening the file in append mode because this function will be called again and again until the courses are read
  output.open("Final.txt", ios::out | ios::app);
  
  // This sets the number of digits after the decimal to 2
  output << fixed << setprecision(2);
  // Using setwidth to organize our ouput and print variables passed in the function 
  output << left << setw(15) << "CourseId" << setw(16) << "Group No" << "Course Average" << "\n";
  output << left << setw(18) << course_g1 << setw(17) << "1" << courseavg_g1 << "\n";
  output << left << setw(18) << "        " << setw(17) << "2" << courseavg_g2 << "\n\n";

  output.close();

}
// This Function prints the same output that is on the text file in the c++ output
void print(string course_g1, float courseavg_g1, float courseavg_g2) {

  cout << fixed << setprecision(2);
  cout << left << setw(15) << "CourseId" << setw(16) << "Group No" << "Course Average" << "\n";
  cout << left << setw(18) << course_g1 << setw(17) << "1" << courseavg_g1 << "\n";
  cout << left << setw(18) << "        " << setw(17) << "2" << courseavg_g2 << "\n\n";

}
// Function to calculate course averges and then group average ( both groups)
void calculateAverage(ifstream * g1, ifstream * g2) {
	
// Creating 2 variables to hold courseid data for both groups

  string course_g1, course_g2;
  int totalcourses = 0;
  
 // Creating  Variables to store group and course averages 
 
  float avg_g1 = 0, avg_g2 = 0;
  float courseavg_g1 = 0, courseavg_g2 = 0;
  
  // These variables hold marks of the students
  
  float marks_g1, marks_g2;
  
// Outer while loop reads all the courses of both groups
  while (g1 >> course_g1 && g2 >> course_g2) {
  	
  	// if the courses are different at any point that will be 
  	
    if (course_g1 != course_g2) {
      cout << "THE NEXT COURSEID's DO NOT MATCH !\n";
      getline(g1, course_g1);
      getline(g2, course_g2);
      exit(0);
      
    }
    // Declaring these variables here because they need to be reset to zero evertime after it jumps to the next course
    
    float totalmarks_g1 = 0, totalmarks_g2 = 0;
    float students_g1 = 0, students_g2 = 0;
    
// reads the marks of the course until if condition is true and sums the marks into a variable and increments (students_g1) for number of students

    while (g1 >> marks_g1) {
      if (marks_g1 == -999)
        break;
      totalmarks_g1 = totalmarks_g1 + marks_g1;
      students_g1++;
      
 // Does the same thing mentioned above but for second group   
    }
    while (g2 >> marks_g2) {
      if (marks_g2 == -999)
        break;
      totalmarks_g2 = totalmarks_g2 + marks_g2;
      students_g2++;
    }
    //at this point one course is completely read so we increment 1 in the variable which stores the total number of courses 
    
    totalcourses++ ;
    
    // calculating course average for group 1 and group 2
    
    courseavg_g1 = totalmarks_g1 / students_g1;
    courseavg_g2 = totalmarks_g2 / students_g2;
    
// adding all course averages for group 1 and 2

    avg_g1 = (avg_g1 + courseavg_g1) ;
    avg_g2 = (avg_g2 + courseavg_g2 ) ;
    
    //Calling function for printing the 3 variables required 
    print(course_g1, courseavg_g1, courseavg_g2);
    printResult(course_g1, courseavg_g1, courseavg_g2);
  }
  // Calculating group Averages for group 1 and 2 
  
  avg_g1 = avg_g1 / totalcourses;
  avg_g2 = avg_g2 / totalcourses; 
  cout << "\n\nAvg for group 1: " << avg_g1 << endl;
  cout << "Avg for group 2: " << avg_g2 << endl;
  
  // Writes group averages in the text file created in function
  ofstream avg;
 avg.open("Final.txt", ios::out | ios::app);
  avg << "\nAvg for group 1: " << avg_g1 << endl;
  avg << "Avg for group 2: " << avg_g2  << endl;
}

int main() {
	
// creating file stream objects

  ifstream g1;
  ifstream g2;
  
  //checking if any one of the text file is missing
  
  g1.open("group1.txt", ios:: in );
  g2.open("group2.txt", ios:: in );
  
  if (g1.fail() || g2.fail()) {

    cout << "\nOne of the two Text files does not exist\n";
    exit(0);
  }
// calling the function to calculate average and passing objects
  calculateAverage(&g1, &g2);

// Now we are closing both files after all the required data has been read from them
  g1.close();
  g2.close();

  return 0;

}
