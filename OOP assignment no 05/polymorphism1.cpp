#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//abstract base class 
class BaseClass{
   public:
  //pure virtual function
   virtual void PrintData() = 0 ;
   
  //virtual destructor 
  virtual ~BaseClass () {}
};

class Professor: public BaseClass{
   private: 
      string name;
      string grade;
      string faculty;
      unsigned long salery; 	 
   public:
   Professor(string name=" ",string grade=" ",string faculty=" ", unsigned long salery=0):
	name(name),grade(grade), faculty(faculty), salery(salery)
	{ }   
	
   ~Professor() {}
  //virtual function overridding
   void PrintData() {
	cout << "Name: " << name << endl
         << "Grade: "<< grade << endl
         << "Faculty: "<< faculty <<endl
         << "Salery: " << salery << endl;		 
   }  
 
};

class Student: public BaseClass{
  private: 
	  string name;
	  string department;
	  string batch;
	  string roll_no;
  public:
 Student(string name=" ", string department= " ", string batch=" ", string roll_no =" "):
  name(name), department(department), batch(batch), roll_no(roll_no)
	{}
  ~Student() {}	
	
  void PrintData() {
	cout << "Name: " << name << endl
	     << "Department: "<< department << endl
		 << "Batch: " << batch << endl
		 << "Roll No: "<< roll_no << endl;
  }
	
};

class ClassFour: public BaseClass{
    private: 
	 string name;
	 string jobtype;
	 unsigned long salery;
	public:
	 ClassFour(string name=" ",string jobtype=" ", unsigned long salery=0):
	 name(name), jobtype(jobtype), salery(salery)
	 {}
	 
	 ~ClassFour()  {}
	 
	void PrintData(){
	  cout << "Name: "<< name << endl
	       << "Job Type: "<< jobtype << endl
		   << "Salery: "<< salery << endl;
	}
};

int main(){
  BaseClass* Pointer[3];
  Professor a("Dr. Abid Mughal", "18","Computer Science", 150000);
  Student b("Saeed Ahmad","Computer and Information Science","18-22", "27");
  ClassFour c("Kashif Munir", "Sweeper", 15000);
  
  Pointer[0] = &a;
  Pointer[1] = &b;
  Pointer[2] = &c;
  
  for(int i=0; i<3; i++){
	Pointer[i]->PrintData();
  cout << endl; 
  }
 
 return 0;
}
