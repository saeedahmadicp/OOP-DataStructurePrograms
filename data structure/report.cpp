#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <deque>
#include <cstring>
#include <iomanip>

using namespace std;

class courseType{
  public: 
     void setCourseInfo(string cName, string cNo, char grade, int credits);
     void print(ostream& outp, bool isGrade);
     int getCredits();
     void getCourseNumber(string& cNo);
     char getGrade();
     bool operator == (const courseType& ) const;
     bool operator != (const courseType& ) const;
     bool operator <= (const courseType& ) const;
     bool operator < (const courseType& ) const;
     bool operator >= (const courseType& ) const;
     bool operator > (const courseType& ) const;

    courseType(string cName = "", string cNo = "", char grade = '*', int credits = 0);
  private: 
    string courseName;
    string courseNumber;
    char courseGrade;
    int courseCredits;

};

class studentType: public personType {
   public: 
     void setInfo(string fname, string lName, int ID, bool isTPaid, vector<courseType> course);
     void print(oustream& out, double tuitionRate);
     int getHoursEnrolled();
     double getGpa();
     double billingAmount(double tuittionRate);
     studentType();
    private:
     int sId;
     int numberOfCourses;
     bool isTuitionPaid;
     vector<courseType> courseEnrolled;
};




int main(void){

    return 0;
}


//courseType class functions definitons
     void courseType :: setCourseInfo(string cName, string cNo, char grade, int credits){
          this->courseName = cName;
          this->courseNumber = cNo;
          this->courseGrade = grade;
          this ->courseCredits = credits;
     }

     void courseType :: print(ostream& outp, bool isGrade){
         outp << left;
          outp << setw(8) << courseName<< "   ";
          outp << setw(15) << courseName;
          outp.unsetf(ios :: left);
          outp << setw(3) << courseCredits << "   ";
         if(isGrade)
             outp << setw(4) <<isGrade << endl;
         else 
           outp << setw(3) <<"***"<< endl;       
 
     }

     int courseType :: getCredits(){
         return this->courseCredits;
     }

     void courseType :: getCourseNumber(string& cNo){
               cNo = this->courseNumber;
     }

     char courseType :: getGrade(){
         return this->courseGrade;    
     }

     bool courseType :: operator == (const courseType& temp) const{
               return this->courseNumber == temp.courseNumber;
     }

     bool courseType :: operator != (const courseType& temp) const{
              return this->courseNumber != temp.courseNumber;
     }

     bool courseType :: operator <= (const courseType& temp) const{
             return this->courseNumber <= temp.courseNumber;
     }

     bool courseType :: operator < (const courseType& temp) const{
            return this->courseNumber < temp.courseNumber;
     }

     bool courseType :: operator >= (const courseType& temp) const{
           return this->courseNumber >= temp.courseNumber;    }
    
     bool courseType :: operator > (const courseType& temp) const{
           return this->courseNumber > temp.courseNumber;
     }

    courseType:: courseType(string cName = "", string cNo = "", char grade = '*', int credits = 0){
           setCourseInfo(cName,cNo,grade, credits);
    }

    //class studentType definitons;
     void StudentType :: setInfo(string fname, string lName, int ID, bool isTPaid, vector<courseType> course){
          setName(fname, lName);
          this->sId = ID;
          this->isTuitionPaid = isTPaid;
          this->courseEnrolled = course;
          sort(courseEnrolled.begin(), courseEnrolled.begin());
     }

     void StudentType :: print(oustream& out, double tuitionRate){
        out << "Student Name: "<< personType :: getFirstName() << " "
            << personType:: getLastName() << endl;
        out 
     }
     int StudentType :: getHoursEnrolled();
     double StudentType :: getGpa();
     double StudentType :: billingAmount(double tuittionRate);
     StudentType :: studentType(){
         this->sId = 0;
         this->isTuitionPaid = false;
         this->numberOfCourses = 0;

     }