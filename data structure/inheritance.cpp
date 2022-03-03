#include <iostream>
using namespace std;

class BaseClass{
   public:
   //Now add virtual keyword
   virtual void print(){
     cout << "I am Base Class."<<endl;
   }
};

class DerivedClass: public BaseClass {
   public:
   void print(){
    cout << "I am Derived Class."<< endl;
   }
};
/* Here dynamic binding occur,during run-time the 
   pointer object is binded with the respective class
   print() member function */
void printObject(BaseClass* pointer){
  pointer->print();
}



int main(void){

    BaseClass a;
    DerivedClass b;

    printObject(&a);
    printObject(&b);
    
    return 0;
}


     

