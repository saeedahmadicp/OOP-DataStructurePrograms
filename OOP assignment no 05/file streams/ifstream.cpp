#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


class Data{
  private: 
    string name;
	int roll_no;
	string batch;
	float gpa;
 public:
   Data() {}
   Data(string name, int roll_no,string batch, float gpa):
   name(name), roll_no(roll_no), batch(batch), gpa(gpa) 
   {}
   
   friend ostream& operator << (ostream& os,const Data &a);

   
   friend istream& operator >> (istream& is, Data &a){
	   //char ch; cin >> ch; 
	   cin.ignore();
	   cout << "Enter Your name: "; 
	   getline(is, a.name); 
	   cout << "Enter your roll no: ";
	   is >> a.roll_no; cin.ignore();
	   cout << "Enter your batch: ";
	   getline(is, a.batch); 
	   cout << "Enter your GPA: ";
	   is >> a.gpa; 
	   return is;
   }
  
friend ifstream& operator >> (ifstream& is, Data &a){
        string read1, read2;
        is >>read1;		
	   getline(is, a.name); 
	    is >>read1;
		is >>read2;
	   is >> a.roll_no; 
	    is >>read1; 
	   getline(is, a.batch); 
        is >>read1;
	   is >> a.gpa; 
	   return is;
   }  
  
   
   
};


int main(){
	int num;
	cout<< "How many student data you want to enter: ";
	cin >> num;
	
	Data data[num];
   /*string read;
	
	ifstream infile("studentdata.txt");
	
	for(int i=0; i<num; i++)
      infile>> data[i];
  
  
  for(int i=0; i<num; i++)
  {cout << data[i] <<endl << endl;} */

	
	for(int i=0; i<num; i++){
	 cout << "enter the data for "<< i+1 << " student: ";
	  cin >> data[i];
	}
	
	ofstream  onfile("studentData.pdf");
	for(int i=0; i<num; i++)
	  onfile << data[i];
     onfile.close();
  cout << "file written!"<<endl;
	
	return 0;
}

   ostream& operator << (ostream& os,const Data &a){
	 os<< "Name: "<< a.name << endl
	   <<"Roll No: "<< a.roll_no << endl
	   <<"Batch: "<< a.batch << endl
	   <<"GPA: "<< a.gpa <<endl;
	   return os;
   }





