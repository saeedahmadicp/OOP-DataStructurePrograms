#include <iostream>
#include <string>
#include <cstdlib>

#define ENGLISH 0
#define URDU 1
#define MATHS 2 
#define MAX 20

using namespace std;

struct student {
    int studentRollNo;
    string name;
    string city;
    string phone;
    int subjects[3];
    
};

// declare the global variables 
int counter = 0;
student students[MAX];

//for getting unique roll number
bool isRollNoUsed(int studentRollNo){
    bool isUsed = false;
    
    for(int i=0; i< counter; i++)
        if(studentRollNo == students[i].studentRollNo){
            isUsed = true;
            break;
            
        }
    return isUsed;
    
}


void getData(){
    //getting index for the current user
    int index = counter;
    
    //checking if the user are not increasing then the mentioned limit
    if(index >= MAX)
        {
            cout<< "the limit is already reached! No more students can be enrolled" <<endl;
            exit(1);
            
        }
    
    //incrementing the counter 
    counter++;
    
    int rollNo;
    cout << "Enter your Roll No: ";
    cin >> rollNo;
    while(isRollNoUsed(rollNo)){
        cout << "Roll Number already used!" <<endl;
        cout << "Enter New Roll Number: ";
        cin >> rollNo;
    }
    students[index].studentRollNo = rollNo;
    cin.ignore();
    
    cout << "Enter your Name: ";
    getline(cin, students[index].name);
    
    cout << "Enter your City: ";
    getline(cin, students[index].city);
    
    cout << "Enter your Phone Number: ";
    getline(cin, students[index].phone);
    
    
    cout << "Enter your English Marks: ";
    cin >> students[index].subjects[ENGLISH];
    
    cout << "Enter your Urdu Marks: ";
    cin >> students[index].subjects[URDU];
    
    cout << "Enter your Maths Marks: ";
    cin >> students[index].subjects[MATHS];
    
}

char grades(int numbers){
   if (numbers >= 80) return 'A';
   else if(numbers >= 70 && numbers <= 79) return 'B';
   else if(numbers >= 60 && numbers <= 69) return 'C';
   else if(numbers >= 50 && numbers <= 59) return 'D';
   else return 'F';
}


void displayGrades(const student& s){
    
    cout << "**********************Transcipt*********************" <<endl;
    cout << "Student Roll# " << s.studentRollNo <<endl;
    cout << "Name: " << s.name <<endl;
    cout << "City: " << s.city <<endl;
    cout << "Phone# " << s.phone << endl;
    cout << "English: "<< grades(s.subjects[ENGLISH]) << endl;
    cout << "Urdu: "<< grades(s.subjects[URDU]) << endl;
    cout << "Maths: "<< grades(s.subjects[MATHS]) << endl;
    
    cout << "**********************Best of Luck*******************" <<endl;
    
}

int searchStudents(int rollNo){
    int index; 
    bool userExist = false;
    
    for(int i=0; i<counter; i++){
         if(rollNo == students[i].studentRollNo){
            userExist = true;
            index = i;
            break;
         }
        
    }
    if(userExist) return index;
    else return -1;
    
}

void display(){
    cout << "The data of all the students are: " << endl <<endl;
    for(int i=0; i<counter; i++){
        displayGrades(students[i]);
    }
}


void duplicateData(int rollNo, int previousIndex){
    //getting index for the current user
    int index = counter;
    
    //checking if the user are not increasing then the mentioned limit
    if(index >= MAX)
        {
            cout<< "the limit is already reached! No more students can be enrolled" <<endl;
            exit(1);
            
        }
    
    //incrementing the counter 
    counter++;
    
    int NewRollNo;
    cout << "Enter the new Roll No: ";
    cin >> NewRollNo;
    while(isRollNoUsed(NewRollNo)){
        cout << "Roll Number already used!" <<endl;
        cout << "Enter the New Roll Number: ";
        cin >> NewRollNo;
    }  
    
    students[index].studentRollNo = NewRollNo;
    students[index].name = students[previousIndex].name;
    students[index].city = students[previousIndex].city;
    students[index].phone = students[previousIndex].phone;
    students[index].subjects[ENGLISH] = students[previousIndex].subjects[ENGLISH];
    students[index].subjects[URDU] = students[previousIndex].subjects[URDU];
    students[index].subjects[MATHS] = students[previousIndex].subjects[MATHS];
}

int main()
{
 while(true){   
 int choice;
 int rollNo, check;
 
 cout << "Press 1 to enter new student data " << endl
      << "Press 2 to view all student data" << endl
      << "Press 3 to search a student by roll No and display it's information" << endl
      << "Press 4 to make a duplicate of student data by roll No and enter new roll no for the duplicate entry" << endl
      << "Press 5 to exit"
      << endl;
 cin >> choice;
 
 switch(choice){
     case 1: 
        getData();
     break;
     
     case 2: 
        display();
     break;
     
     case 3:
        
        cout << "Enter Roll No to search a student: ";
        cin >> rollNo;
        check = searchStudents(rollNo);
        if(check == -1) cout<< "The student doesn't exit" <<endl;
        else { cout << "The user exits. The info of the student is below: ";
               displayGrades(students[check]);
        }
     break;
        
        
     case 4:
        cout << "Enter Roll No to search a student: ";
        cin >> rollNo;
        check = searchStudents(rollNo);
        if(check == -1) cout<< "The student doesn't exit" <<endl;
        else { 
            duplicateData(rollNo, check);
        }
     break;
     
     
     case 5:
        exit(0);
     break;
     
     default: 
        cout << "Your have entered invalid choice!" << endl;
     
 }
 
 system ("cls");
 }
    

    return 0;
}
