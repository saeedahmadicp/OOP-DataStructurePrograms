#include <iostream>
#include <cstdlib>
#include <typeinfo>

using namespace std;

class Base{
	public:
	  virtual void vertFunc() {}
	  
};

class saeed: public Base{ };
class saad: public Base {};

void DisplayName(Base* b){
   cout << "Pointer to an object of: ";
   cout << typeid(*b).name() << endl;
}

int main(){
   saeed s;
   saad sa;
   
   DisplayName(&s);
   DisplayName(&sa);

  return 0;
}

















