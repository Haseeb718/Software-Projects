// Name : Muhammad Haseeb
// Registration Number : 200718
// Section : BEEE-2A
#include <iostream>
#include <iomanip>    // This will give our matrix a neat look instead of using space(" ") .
using namespace std;
int main(){
	// Declaration of variables 
	char x ;
	int num[3] ;         // Since we are required to input Integers many times so using arrays and declaring it once
	float sum = 0 ;
	float total = 0 ;
	int sum2 = 0 ;
	float avg = 0;  // Average of Integers can be in decimals so use float datatype
	int pos = 0 ;
	int even = 0 ;
	
  cout << "Press S for Average.\n";
  cout << "Press T for addition of Odd Numbers.\n";
  cout << "Press P for printing the number of Positive Integers entered.\n";
  cout << "Press M for Matrix.\n";
  cout << "\nEnter your choice : " ;    // Statements for the user to select the choice of input from
  cin >> x ;
  
  // start of switch statement
  
	switch (x) {
    case 'S' :
    case 's' :
      cout << "\nEnter an Integer Value: ";
      cin >> num[0] ;
      for ( int a = 1 ; a <= num[0] ; a++) {     //  Loop that stops execution after 'a' becomes greater then input number after increments
        total++ ;                                       // This is the denominater which represents the number of total integers. 
        sum = sum + a ;	                         // This is the numerator which represents the sum of all integers ( initialized to 0 to avoid 'a' being added to a garnage value) 
      }
      avg = sum / total ;     
      cout << "The average of the numbers from 1 to "<< num[0] <<" is: "<< avg ;
      break;            // formula for average and then the result is shown in cout statement.
	
    case 'T' :
    case 't' :	
      cout << "Enter an Integer Value: " ;
      cin >> num[1] ;
      for ( int i = 1 ; i <= num[1] ; i++) {    // Loop that stops execution after 'i' becomes greater than input integer after increments
        if (i % 2 != 0 )                             //  If remainder is not zero if statement becomes true and adds that odd number to sum2 and prints the final sum.
          sum2 = sum2 + i	;                         // If remainder is zero if statement is false and that even number is skipped.
      } 
      cout << "\nThe sum of odd number from 1 to "<<num[1]<<" is : "<< sum2 ;
      break ; 
         	
    case 'P' :
    case 'p' :
		 	for ( ; ;) {       // this is syntax to run loop infinitely 
        cout << "Please Enter the Integer values: " ;
        cin >>  num[2] ;
        if (num[2] < 0)	{
          cout << "\nNegative value!\n\n" ;                      // When postive values are entered else stat. is executed and 1 is added to 'pos' variable 
          break ; }                                           // on entering negative value for loop is broken and 'pos' is printed.
        else
          pos++ ;
      }
			cout << pos << " " "Positive values were entered." ; 
			break ;	                                                    
    case 'M':
    case 'm':

      for(int i=0 ; i<5 ; i++){  // this loop monitors the rows
        for(int j=0 ; j<8 ; j++){  // this loop monitors the columns
          even+=2;     // adding 2 will always generate an even number
          cout << setw(5) << even ;      //setwidth will give even gaps between single and double digit numbers
        }
        cout<<endl;  // goes to next rwo after printing 8 coloumns for previous row
      }
      break;
      default :
      cout << "Invalid Selection" ;    // in the very first step anything else entered instead of given option will go to default and executed 
  }  // end of switch statement
  return  0;
}  

