#include <iostream>
#include <cstdlib>
#include <cstdbool>
#include <conio.h>

using namespace std;

class CircularQueue{
    private: 
      int rear;
      int front;
      int* ptr;
      int count;
      int max_size;
    public:
     //constructor
      CircularQueue(int size=10);
     //functions decleration
      void insert(int item);
      void remove(void);
      bool isFull(void);
      bool isEmpty(void);
      void display(void);
      bool underflow(void);
      bool overflow(void);
};


int main(void){
    int size;
    cout << "Enter the size for the Queue: ";
    cin >> size;

    CircularQueue queue(size);
    int num;
    int option;

    while(3){
       cout << "1. Add element to Queue. "<<endl
            << "2. Remove element from the Queue. "<<endl
            << "3. Display Queue elements. "<<endl
            << "4. Exit program. "<<endl;
       cin >> option;
       switch (option)
       {
       case 1:
          cout << "Enter the Element to enque: ";
          cin >> num;
          queue.insert(num);
           break;

       case 2:
          queue.remove();
           break;

       case 3:
          if(!queue.isEmpty())
          cout << "The Element of the Queue are: "<<endl;
          queue.display();
           break;
       case 4:
          exit(0);
           break;
       default:
         cout << "You have Entered invalid option."<<endl;
           break;
       }
       cout<< endl <<endl << "\t\tPress Enter to continue!"<<endl;
       getch();
       system("cls");
    }

    return 0;
}



     //constructor
      
     CircularQueue ::CircularQueue(int size):rear(0),front(0),count(0),max_size(size){
         this->ptr = new int[size];
      }

     //functions definitions
      void CircularQueue :: insert(int item){
           if(!this->isFull()){
              ptr[this->rear] = item;
              ++this->count;
              if(this->rear == this->max_size-1)
                  this->rear = 0;
              else 
                 ++this->rear;
           }
           else
             cout << "Queue is Full!"<<endl;
           
      }

      void CircularQueue :: remove(void){
          if(!this->isEmpty()){
              if(this->front == this->max_size-1)
                  this->front = 0;
              else 
                  ++this->front;
                 
             --this->count;
          }
      }

      bool CircularQueue :: isFull(void){
          return this->count == max_size;
      }

      bool CircularQueue :: isEmpty(void){
          return this->count == 0;
      }

      void CircularQueue :: display(void){
         if(!this->isEmpty()){
            for(int i= this->front, j = 0; j<this->count; i++,j++){
                  cout << ptr[i]<<endl;
                  if(i == this->max_size-1)
                     i=-1;
            }
         }
         else 
           cout << "Queue is Empty!"<<endl;
      }
    
      bool CircularQueue :: underflow(void){
           return this->rear < 0;
      }

      bool CircularQueue :: overflow(void){
          return this->rear > max_size;
      }