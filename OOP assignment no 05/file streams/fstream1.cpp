#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	string name, f_name, phone_no, email;
	
	//reading all the data from the file
	ifstream infile("saeed.txt");
	while(infile.good()){
	  getline(infile, name);
	  cout << name <<endl;
	}
	
	//you can also use the following syntax for reading all the data from the file 
	ifstream infile("saeed.txt");
	while(infile){
	  getline(infile, name);
	  cout << name <<endl;
	}
	
	//reading line by line data from the file 
	ifstream infile("saeed.txt");
	   getline(infile,name);
	   getline(infile,f_name);
	   getline(infile,phone_no);
	   getline(infile,email);
	
	      cout<< name << endl
	       << f_name << endl
		   << phone_no << endl 
		   << email <<endl;
	
	
	//writing data into the file 
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your father name: ";
	getline(cin, f_name);
	cout << "Enter your phone no: ";
	getline(cin, phone_no);
	cout << "Enter your email address: ";
	getline(cin, email);
	
	ofstream outfile("saeed.txt");
	outfile<< "Name: "<< name << endl
	       << "Father Name: " << f_name << endl
		   << "Phone No: "<< phone_no << endl
		   << "Email Address: "<< email <<endl;
	cout << "file written!"<<endl; 
	
	return 0;
}
















