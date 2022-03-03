#include <iostream>
#include <cstring>

using namespace std;

class A{
  private: 
    int data;
	string name;
  public: 
    A(int data=0, string name= " "): data(data), name(name) {}
	//{this->data = data; this->name = name;}
	~A() {}
	
 friend ostream& operator << (ostream& os, A &a){
   os << "Name: "<< a.name << endl << "Service Number: " << a.data << endl;
   return os;   
 }	
 
 friend istream& operator >> (istream& is, A &a){
   cout << "Enter Your Name: ";
   getline(is, a.name); 
   cout << "Enter Your Service Number: ";
   is >> a.data;
   return is;
 }

  string GetName() const { return name;}
  int GetServiceNumber() const { return data;}
};

class B: public A{
   private:
      string title;
      long income;
   public: 
     B(int data=0, string name= " ",string title=" ", long income =0): 
	  A(data, name),title(title), income(income)
	 {}
	 
 friend ostream& operator << (ostream& os, B &b){
   os << "Name: "<< b.GetName() << endl << "Service Number: "<< b.GetServiceNumber()
   << endl<< "Job Title: "<< b.title << endl << "Income: " << b.income << endl;
   return os;   
 }	
 
 string GetTitle() const { return title; }
 long  GetIncome() const { return income; }
	
};

class C: public B{
    private: 
       long fund;
    public: 
     C(int data=0, string name= " ",string title=" ", long income =0, long fund=0):
     B(data, name,title, income), fund(fund)
	 {}	

friend ostream& operator << (ostream& os, C &c){
   os << "Name: "<< c.GetName() << endl << "Service Number: "<< c.GetServiceNumber()
   << endl<< "Job Title: "<< c.GetTitle()<<endl<< "Income: "<< c.GetIncome() << endl
   << "Total Fund: "<< c.fund<<endl;
   return os;   
 }	 
	
};


int main(){
  C saeed(12154,"Saeed Khan Khattak", "CEO", 150000, 10000000);
 cout << saeed;
  A a;
  cin >> a;
  cout << a;
return 0;	
}



/*
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
*/





/*
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

*/
//-Calling non-static method in a static method by pasing object:
