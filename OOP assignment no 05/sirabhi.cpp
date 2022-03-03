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
}






Static members of a class

#include <iostream>
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
int main(void){


   cout<<AA::get();
   AA::inc();
   AA::print();

return 0;
}

///

#include <iostream>
using namespace std;
////
class BB{
private:
	int data;
public:

	BB(int i):data(i){cout<<"BB() "<<data<<endl;}
	void print(){cout<<"data: "<<data;}
};

class AA{
private:
 static  size_t count;
 static BB bb;
 AA(){}
public:
 static void inc() {count++;}
 static void dec() {count--;}
 static size_t get() {return count;}
 static void print(){
	 bb.print();
	 cout<<"Count: "<<count<<endl;
 }
	};
size_t AA::count;
BB AA::bb(12);
int main(void){


   cout<<AA::get()<<endl;
   AA::inc();
   AA::print();


return 0;
}


-Calling non-static method in a static method by pasing object:

#include <iostream>
using namespace std;
////
class BB{
private:
	int data;
public:

	BB(int i):data(i){cout<<"BB() "<<data<<endl;}
	void print(){cout<<"data: "<<data;}
};

class AA{
private:
 static  size_t count;
 static BB bb;

public:
 AA(){}
 static void inc() {count++;}
 static void dec() {count--;}
 static size_t get() {return count;}
 void f() const {cout<<"f()";}
 static void print(const AA* a){
	 a->f();
	 bb.print();
	 cout<<"Count: "<<count<<endl;
 }
	};
size_t AA::count;
BB AA::bb(12);
int main(void){


   cout<<AA::get()<<endl;
   AA::inc();
   AA::print(new AA());


return 0;
}


Inheritance


#include <iostream>
using namespace std;
////
class AA{
private:
	int data1;
public:
AA(int d=0){ data1 = d ;  cout<<"AA(int)"<<data1<<"\n";}
  ~AA(){ cout<<"~AA()\n";}
  		int get() const {return data1;}
};

class A:public AA{
private:
	int data2;
public:
A(int d1=0,int d2 = 0):AA(d1){ data2 = d2 ;  cout<<"A(int)"<<data2<<"\n";}
  ~A(){ cout<<"~A()\n";}
  		int get() const {return data2;}
};
//
class B: public A{
private:
	int data3;
public:
  B(int a=0,int b=0,int c=0):A(a,b){ data3 = c;
	  cout<<"B()"<<data3<<"\n";}
  ~B(){ cout<<"~B()\n";}
  int getData() const {return data3;}

};
int main(void){
   B b(12,13,14);
   cout << sizeof(b);
return 0;
}


Notes: 
-Total size of an object depends upon direct and indirect bases classes.
-Always call base class consturctor in the initializer list explicitly
-If we don’t call base class constructor in the drived class then compiler itself calls default constructor.
-Having same data member with the same name in the base class and drived class is not a problem (private or public).
-public data and method members with the same name can exist in the base class and derived class. When we access any member on derived class handle, first it is checked in the derived class then base class.


Same data member

#include <iostream>
using namespace std;
////
class AA{
private:

public:
	int data;
AA(int d=0){ data = d ;  cout<<"AA(int)"<<data<<"\n";}
  ~AA(){ cout<<"~AA()\n";}
  		int get() const {return data;}
};

class A:public AA{
private:

public:
	int data;
A(int d1=0,int d2 = 0):AA(d1){ data = d2 ;  cout<<"A(int)"<<data<<"\n";}
  ~A(){ cout<<"~A()\n";}
  		int get() const {return data;}
};
//
class B: public A{
private:

public:
	int data;
  B(int a=0,int b=0,int c=0):A(a,b){ data = c;
	  cout<<"B()"<<data<<"\n";}
  ~B(){ cout<<"~B()\n";}
  int getData() const {return data;}

};
int main(void){
   B b(12,13,14);
   cout << sizeof(b)<<endl;
   cout<< b.data;
return 0;
}


Overload vs override functions

-we can overload function in the same class but not in different classes (base and drived)
-In the same class compiler cannot differentiate b/w two functions with the same name and args but different return type. This is an error.
-In base class and drived class function with the same name and args but different return type can exist. This is not an error.


Copy constructor

#include <iostream>
using namespace std;
////
class AA{
private:

public:
	int data;
AA(int d=0){ data = d ;  cout<<"AA(int)"<<data<<"\n";}
AA(const AA& a){ data = 444 ;  cout<<"AA(const AA&a)"<<data<<"\n";}
AA operator=(const AA& a){ cout<<"operator=(const AA&a)"<<"\n";
 return AA(a.data);}
  ~AA(){ cout<<"~AA()\n";}
  		double get() const {return data;}
  		AA operator++ (){
  			return AA(++data);
  		}
};

class A:public AA{
private:

public:
	int data;
A(int d1=0,int d2 = 0):AA(d1){ data = d2 ;  cout<<"A(int)"<<data<<"\n";}
  ~A(){ cout<<"~A()\n";}
  		float get() const {return data;}
};
//
class B: public A{
private:

public:
	int data;
  B(int a=0,int b=0,int c=0):A(a,b){ data = c;
	  cout<<"B()"<<data<<"\n";}
  ~B(){ cout<<"~B()\n";}
  int getData() const {return data;}

};
int main(void){
   B b(12,13,14);
   cout << sizeof(b)<<endl;
   cout<< b.data<<endl;
   AA a( ++b);
   AA a1;
   AA a2 = a1;
   cout<<a.get();
return 0;
}


Calling base class method

#include <iostream>
using namespace std;
////
class AA{
private:

public:
	int data;
AA(int d=0){ data = d ;  cout<<"AA(int)"<<data<<"\n";}
AA(const AA& a){ data = a.data ;  cout<<"AA(const AA&a)"<<data<<"\n";}
AA operator=(const AA& a){ cout<<"operator=(const AA&a)"<<"\n";
 return AA(a.data);}
  ~AA(){ cout<<"~AA()\n";}
  		double get() const {return data;}
  		AA operator++ (){
  			return AA(++data);
  		}
  	void print(){
  		cout<<"data1: "<<data<<" ";
  	}
};

class A:public AA{
private:

public:
	int data;
A(int d1=0,int d2 = 0):AA(d1){ data = d2 ;  cout<<"A(int)"<<data<<"\n";}
  ~A(){ cout<<"~A()\n";}
  		float get() const {return data;}
  		void print(){
  			     AA::print();
  		    	 cout<<"data2: "<<data<<" ";
  		    	}
};
//
class B: public A{
private:

public:
	int data;
  B(int a=0,int b=0,int c=0):A(a,b){ data = c;
	  cout<<"B()"<<data<<"\n";}
  ~B(){ cout<<"~B()\n";}
  int getData() const {return data;}
  void print(){
	     A::print();
    	 cout<<"data3: "<<data<<" "<<endl;
    	}

};
int main(void){
   B b(12,13,14);
   b.print();
return 0;
}



Why assignment in the initializer list

#include <iostream>
using namespace std;
////


class B
{
  int x;

  public:
    B(int data=0):x(data)
    {cout<<"data: "<<data<<endl;};
    void print()
    {cout<<"Value of x is: "<<x<<endl;}
};

class A
{
   int a;
   B b;

  public:
    A():a(100)
    { b = a;
      cout<<"Value of a:"<<a<<endl;
      b.print();
    }
};

int main()
{
  A a;
  return(0);
}



Private inheritance


#include <iostream>
using namespace std;
////
class AA{
private:

public:
	int data;
AA(int d=0){ data = d ;  cout<<"AA(int)"<<data<<"\n";}
AA(const AA& a){ data = a.data ;  cout<<"AA(const AA&a)"<<data<<"\n";}
AA operator=(const AA& a){ cout<<"operator=(const AA&a)"<<"\n";
 return AA(a.data);}
  ~AA(){ cout<<"~AA()\n";}
  		int get() const {return data;}
  		AA operator++ (){
  			return AA(++data);
  		}
  	void print(){
  		cout<<"data1: "<<data<<" ";
  	}
};

class A:public AA{
private:

public:
	int data;
A(int d1=0,int d2 = 0):AA(d1){ data = d2 ;  cout<<"A(int)"<<data<<"\n";}
  ~A(){ cout<<"~A()\n";}
  		int get() const {return data;}
  		void print(){
  			     AA::print();
  		    	 cout<<"data2: "<<data<<" ";
  		    	}
};
//
class B: private A{
private:

public:
	int data;
  B(int a=0,int b=0,int c=0):A(a,b){ data = c;
	  cout<<"B()"<<data<<"\n";}
  ~B(){ cout<<"~B()\n";}
//  int getData() const {return data;}
  void print(){
	     A::print();
    	 cout<<"data3: "<<data<<" "<<endl;
    	}

};
int main(void){
   B b(12,13,14);
   cout<<b.get();
return 0;
}

Since class B is privately derived from class A so public and protected members of class A becomes private in class B so they cannot be accessed out of class B.

However, we call A::get() function in the drived class.



////
#include <iostream>
using namespace std;
class Person {};
class Student:private Person {};	// private
void eat(const Person& p){}		// anyone can eat
void study(const Student& s){}		// only students study

int main()
{
	Person p;	// p is a Person
	Student s;	// s is a Student
	eat(p);		// fine, p is a Person
	eat(s);		// error! s isn't a Person
	return 0;
}




Protected Inheritance

#include <iostream>
using namespace std;
////
class AA{
private:

public:
	int data;
AA(int d=0){ data = d ;  cout<<"AA(int)"<<data<<"\n";}
AA(const AA& a){ data = a.data ;  cout<<"AA(const AA&a)"<<data<<"\n";}
AA operator=(const AA& a){ cout<<"operator=(const AA&a)"<<"\n";
 return AA(a.data);}
  ~AA(){ cout<<"~AA()\n";}
  		int get() const {return data;}
  		AA operator++ (){
  			return AA(++data);
  		}
  	void print(){
  		cout<<"data1: "<<data<<" ";
  	}
};

class A:public AA{
private:

public:
	int data;
A(int d1=0,int d2 = 0):AA(d1){ data = d2 ;  cout<<"A(int)"<<data<<"\n";}
  ~A(){ cout<<"~A()\n";}
  		int get() const {return data;}
  		void print(){
  			     AA::print();
  		    	 cout<<"data2: "<<data<<" ";
  		    	}
};
//
class B: protected A{
private:

public:
	int data;
  B(int a=0,int b=0,int c=0):A(a,b){ data = c;
	  cout<<"B()"<<data<<"\n";}
  ~B(){ cout<<"~B()\n";}
//  int getData() const {return data;}
  void print(){
	     A::print();
    	 cout<<"data3: "<<data<<" "<<endl;
    	}

};
int main(void){
   B b(12,13,14);
   cout<<b.get();//error
return 0;
}



Multiple Inheritance

#include <iostream>
using namespace std;
class A
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
 	//
 	void print()
 	    {
 	 	    cout << "A::print() \n";
 	    }
};
class B
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
 	void print()
 	 	    {
 	 	 	    cout << "B::print() \n";
 	 	    }
};
class C : public A, public B   //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x + y;
 	}
 	void print()
 	 	    {   A::print();
 	 	 	    cout << "C::print() \n";
 	 	    }
};

int main()
{
 	 C obj1; //object of derived class C
 	 obj1.getx();
 	 obj1.gety();
 	 obj1.sum();
 	 obj1.print();
 	 return 0;
}





Polymorphism

Polymorphism only works with public inheritance

#include <iostream>
using namespace std;
////

#include <iostream>
using namespace std;
class A
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
 	//
 	void print()
 	    {
 	 	    cout << "A::print() \n";
 	    }
};
class B: private A
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
 	void print()
 	 	    {
 	 	 	    cout << "B::print() \n";
 	 	    }
};
class C : private A   //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x;
 	}
 	void print()
 	 	    {   //A::print();
 	 	 	    cout << "C::print() \n";
 	 	    }
};

int main()
{
 	 A *base; //object of derived class C
 	 B b;
 	 C c;
     base = &b;
     //base->print();
     base = &c;
     //base->print();
     b.print();
     c.print();


 	 return 0;
}


With private and protected inheritance we cannot say that object of B or C is also an object of A.



Public Inheritance but
Not a Virtual Function

#include <iostream>
using namespace std;
////

#include <iostream>
using namespace std;
class A
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
 	//
 	void print()
 	    {
 	 	    cout << "A::print() \n";
 	    }
};
class B: public A
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
 	void print()
 	 	    {
 	 	 	    cout << "B::print() \n";
 	 	    }
};
class C : public A   //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x;
 	}
 	void print()
 	 	    {   //A::print();
 	 	 	    cout << "C::print() \n";
 	 	    }
};

int main()
{
 	 A *base; //object of derived class C
 	 B b;
 	 C c;
     base = &b;
     base->print();
     base = &c;
     base->print();
     b.print();
     c.print();


 	 return 0;
}



Virtual method

#include <iostream>
using namespace std;
////
// multiple inheritance.cpp
#include <iostream>
using namespace std;
class A
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
 	//
 	virtual void print()
 	    {
 	 	    cout << "A::print() \n";
 	    }
};
class B: public A
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
 	virtual void print()
 	 	    {
 	 	 	    cout << "B::print() \n";
 	 	    }
};
class C : public A   //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x;
 	}
 	virtual void print()
 	 	    {   //A::print();
 	 	 	    cout << "C::print() \n";
 	 	    }
};

int main()
{
 	 A *base; //object of derived class C
 	 B b;
 	 C c;
     base = &b;
     base->print();//B::print()
     base = &c;
     base->print();//C::print()
     b.print();
     c.print();


 	 return 0;
}
