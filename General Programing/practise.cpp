#include <iostream>
#include <cstring>

using namespace std;

class Base{
   public:
     virtual void showdata() =0 ;
     virtual void getdata() = 0 ;
};


class Student: public Base{
    private: 
       string name;
       string rank;
    public:
      Student(){}

    void getdata(void){
      cout << "Enter your name: ";
      getline(cin, name);
      cout << "Enter your rank: ";
      cin >> rank;
    }

    void showdata(void){
        cout<< "Name: "<< name<< endl
            << "Rank: "<< rank << endl;
    }

};


class Teacher: public Base{
    private: 
       string name;
       string rank;
   public: 
      Teacher(){}

     void getdata(void){
         cout << Enter your name:
         
     }
};