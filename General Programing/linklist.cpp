#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <conio.h>

using namespace std;


class StudentRecord{
   private:
      string Name;
      string Qualification;
      string Province;
    public:
      StudentRecord() {}
     
     friend istream& operator >> (istream& is, StudentRecord& sr){
    cout << "Enter your name: ";
    getline(is, sr.Name);
    cout << "Enter your Qualification: ";
    getline(is, sr.Qualification);
    cout << "Enter your Province Name: ";
    getline(is, sr.Province);
   return is;
}
     friend ostream& operator << (ostream& oss,StudentRecord& sr){
     oss << "Name: "<< sr.Name << endl
          << "Qualification: "<< sr.Qualification << endl
          << "Province: "<< sr.Province << endl;
     return oss;
 }

};







template <class Data>
class Node{
  private:
     Data data;
     Node<Data>* next;
   public:
      Node(): next(NULL) {}
      Node(Data data): data(data), next(NULL) {}

      void SetData(Data data) {
          this->data = data;
      }

      Node<Data>*& GetNext(void){
          return this->next;
      }

      void DisplayData(void){
          cout << "The data is: "<< endl << this->data << endl;
      }

};


template <class Data>
class LinkList{
   private:
     Node<Data>* front;
     Node<Data>* rear;
     size_t counter;
   public:
     LinkList(): front(NULL), rear(NULL), counter(0) {}
     ~LinkList(){
         Node<Data>* temp = front;
        while(temp){
          delete temp;
           temp = temp->GetNext();
        }
      }

     void EnqueueData(Node<Data>* obj){
         Node<Data>* node;
         if(obj)
          node = new Node<Data>(*obj);
         else
            { cout << "Sorry! you have Entered Invalid Address."; return ; }
         if(!front) front = node;
         if(rear) rear->GetNext() = node;
         rear = node;
         counter++;
     }

    void DequeueData(void){
      Node<Data>* node;
      if(front)
      { node = front;
       front = front->GetNext();
       delete node;
       counter--; }
      if(front == rear) rear == NULL;
      if(!front) cout << "The list is empty!"<< endl;
    }

     void DisplayAll(void){
       Node<Data>* temp;
        if(!front){
             cout << "Sorry! the list is empty."<< endl;
             return ; }
        temp = front;
        while(temp){
            temp->DisplayData();
            temp = temp->GetNext();
        }
      
     }


};


int main(void){

StudentRecord a, b, c;
  cin >> a;
  cin >> b;
Node<StudentRecord> e,f,g;
   e.SetData(a);
   f.SetData(b);

 LinkList<StudentRecord> h;
    h.EnqueueData(&e);
    h.EnqueueData(&f);
    h.DisplayAll();

    

 return 0;
}
