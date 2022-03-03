#include <iostream>
#include <cstdlib>

using namespace std;


//abstract class
class  A{
	private:
	 int data;
	public: 
	  A(int d =0 ): data(d) {}
	  //pure virtual function
	  virtual void print() = 0;
	  // virtual void print() { cout << "A :: print(): "<< data <<endl;}
	  
	  //the destructor of the base class will be virtual in case of dynamic memory
	  // allocation 
	  virtual ~A(){}
};

class  B: public A{
	private:
	 int data;
	public: 
	  B(int d =0): data(d) {}
	  virtual void print() { cout << "B :: print(): "<< data << endl;}
	  
	  void bbb(){ cout << "hello"<< endl;}
};

class  C : public A{
	private:
	 int data;
	public: 
	  C(int d =0 ): data(d) {}
	 virtual void print() { cout << "C :: print(): "<< data << endl;}
};

//the pure virtual function can access to that class function
class  D : public C{
	private:
	 int data;
	public: 
	  D(int d =0 ): data(d) {}
	 virtual void print() { cout << "D :: print(): "<< data << endl;}
};


//void printclass(A* base){
	//cout << base->print();
//}

int main(){
  A* base[4];
//  A  a(2);
  B  b(4);
  C  c(6);
  D  d(8);
  
  //base[0]= & a;  
  base[0]= & b;
  base[1]= & c;
  base[2]= & d;
   
  for(int i=0; i<3; i++)
	  base[i]->print();
  
  //we can call the derived class function by dynamic_cast casting of class pointers
 // dynamic_cast<B*> (base[0])->bbb();
  
  
 return 0;
}










/*#include <iostream>
using namespace std;
////
class AA{
private:
 static  size_t count;
 AA(){}
public:
 static void inc() {count++;}
 static void dec() {count--;}
 static size_t get() {return count;}
 static void print(){
	 cout<<"Count: "<<count<<endl;
 }
	};
 
 size_t AA :: count = 0;
  
int main(void){


   cout<< AA::get();
   AA::inc();
   AA::inc();
   AA::inc();
   AA::inc();
   AA::print();

return 0;
}*/






/*
//Singleton
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Logger{

public:

   static Logger* Instance(){
	   if (!pInstance)   pInstance = new Logger();
	      return pInstance;
  }

   void openLogFile(string logFile){
	   m_file = logFile;
	   cout<<"File opened: "<<logFile<<endl;
   }

   void writeToLogFile(){
	   cout<<"Written to File: "
       <<m_file<<endl;}

   void closeLogFile(){
	   cout<<"File Closed: "
       <<m_file<<endl;}



private:
   string m_file;
   Logger(){};  // Private so that it can  not be called

   Logger(const Logger&);             // copy constructor is private

   Logger& operator=(const Logger&);  // assignment operator is private

   static Logger* pInstance;

};

Logger* Logger::pInstance = NULL;

int main(void){
 Logger *log = Logger::Instance();
 log->openLogFile("abc.txt");
return 0;
}*/+