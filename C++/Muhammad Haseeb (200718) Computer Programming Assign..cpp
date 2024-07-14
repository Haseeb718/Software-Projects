// Name: Muhammad Haseeb
// Registration number: 200718
// Section: BEEE-2A

#include <iostream>
using namespace std ;
    
     int main()
{
	//Declaring Variables
    string name[3];
    string dept[3];
    int enrol[3];
    string disc[3];
    int age[3];
    char gend[3];
    float gpa[3];
     //Input from user for Student 1 
       cout <<"\t[Student 1]\n" ;
       cout << "Name:";
       cin >> name[0] ;
       
       cout << "Name of Department: " ;
       cin >> dept[0] ;
       
       cout << "Year of Enrollment: " ;
       cin >> enrol[0] ;
       
       cout << "Discipline: " ;
       cin >> disc[0] ;
       
	   cout << "Age: " ;
	   cin >> age[0] ;
	   
	   cout << "Gender (M/F): " ;
	   cin >> gend[0] ;
	   
	   cout << "GPA: "; 
	   cin >> gpa[0] ;
	   
	    //Input from user for Student 2 
	  
	   cout <<"\n\t[Student 2]" ;
	   
	   cout << "\nName:";
       cin >> name[1] ;
       
       cout << "Name of Department: " ;
       cin >> dept[1] ;
       
       cout << "Year of Enrollment: " ;
       cin >> enrol[1] ;
       
       cout << "Discipline: " ;
       cin >> disc[1] ;
       
	   cout << "Age: " ;
	   cin >> age[1] ;
	   
	   cout << "Gender (M/F): " ;
	   cin >> gend[1] ;
	   
	   cout << "GPA: "; 
	   cin >> gpa[1] ;
	   
	   //Input from user for Student 3 
	   
	   cout <<"\n\t[Student 3]" ;
	   
	   cout << "\nName:";
       cin >> name[2] ;
       
       cout << "Name of Department: " ;
       cin >> dept[2] ;
       
       cout << "Year of Enrollment: " ;
       cin >> enrol[2] ;
       
       cout << "Discipline: " ;
       cin >> disc[2] ;
       
	   cout << "Age: " ;
	   cin >> age[2] ;
	   
	   cout << "Gender (M/F): " ;
	   cin >> gend[2] ;
	   
	   cout << "GPA: "; 
	   cin >> gpa[2] ;
	   
	   // All input data of the 3 students is displayed one by one in order 
	   cout << "\nSummary (Student 1):" ;
	   
	   cout << "\n\nName of student: "<<name[0]<<" \n" << "Name of department: "<<dept[0]<<" \n" << "Year of enrollment is: "<< enrol[0] ; 
	   cout << "\nDiscipline: "<<disc[0]<<" \n" << "Age of student: "<<age[0]<<" \n" << "Gender: "<<gend[0]<<" \n" << "GPA obtained: "<< gpa[0] ;
	   
	   cout << "\n\nSummary (Student 2):" ;
	   
	   cout << "\n\nName of student: "<<name[1]<<" \n" << "Name of department: "<<dept[1]<<" \n" << "Year of enrollment is: "<< enrol[1] ; 
	   cout << "\nDiscipline: "<<disc[1]<<" \n" << "Age of student: "<<age[1]<<" \n" << "Gender: "<<gend[1]<<" \n" << "GPA obtained: "<< gpa[1] ;
	   
	   cout << "\n\nSummary (Student 3):" ;
	   
	   cout << "\n\nName of student: "<<name[2]<<" \n" << "Name of department: "<<dept[2]<<" \n" << "Year of enrollment is: "<< enrol[2] ; 
	   cout << "\nDiscipline: "<<disc[2]<<" \n" << "Age of student: "<<age[2]<<" \n" << "Gender: "<<gend[2]<<" \n" << "GPA obtained: "<< gpa[2] ;
	   
	   cout << "\n\nThe Average GPA of the three students is: " << (gpa[0]+gpa[1]+gpa[2] )/3 ;
	  
	   //For swaping , 2 temporary variables are created and initialized ( Another method can be simply interchanging variables in output statements)
	  
	   string swap1=disc[0] ;
	   disc[0] = disc[1] ;
	   disc[1] = swap1 ;
	   
	   float swap2 = gpa[0] ;
	   gpa[0] = gpa[1] ;
	   gpa[1] = swap2 ;
	  
	   //FInal summary of the details of the students after swapping are displayed
	  
	   cout << "\n\nUpdated Summary (Student 1):" ;
	   
	   cout << "\n\nName of student: "<<name[0]<<" \n" << "Name of department: "<<dept[0]<<" \n" << "Year of enrollment is: "<< enrol[0] ; 
	   cout << "\nDiscipline: "<<disc[0]<<" \n" << "Age of student: "<<age[0]<<" \n" << "Gender: "<<gend[0]<<" \n" << "GPA obtained: "<< gpa[0] ;
	   
	   cout << "\n\nUpdated Summary (Student 2):" ;
	   
	   cout << "\n\nName of student: "<<name[1]<<" \n" << "Name of department: "<<dept[1]<<" \n" << "Year of enrollment is: "<< enrol[1] ; 
	   cout << "\nDiscipline: "<<disc[1]<<" \n" << "Age of student: "<<age[1]<<" \n" << "Gender: "<<gend[1]<<" \n" << "GPA obtained: "<< gpa[1] ;
	   
	   cout << "\n\nUpdated Summary (Student 3):" ;
	   
	   cout << "\n\nName of student: "<<name[2]<<" \n" << "Name of department: "<<dept[2]<<" \n" << "Year of enrollment is: "<< enrol[2] ; 
	   cout << "\nDiscipline: "<<disc[2]<<" \n" << "Age of student: "<<age[2]<<" \n" << "Gender: "<<gend[2]<<" \n" << "GPA obtained: "<< gpa[2] ;
	   
	    return 0;
	         
	 }      
     
     
