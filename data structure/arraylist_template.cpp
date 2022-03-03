#include <iostream>
#include <cstring>
#include <cstdlib>


using namespace std;

template <class Type>
class ArrayList{
   private:
      Type* array;
      size_t size;
      size_t max_size;
   public:
      //constructor
      ArrayList(size_t size=100);
      //copyconstructor
      ArrayList(const ArrayList<Type>& otherlist);
      //assignment operator overloading
      const ArrayList<Type>& operator = (const ArrayList<Type>& otherlist);
      //destructor
      ~ArrayList(void);
      //function declerations 
      bool isEmpty(void) const;
      bool isFull(void) const;
      int listSize(void) const;
      int maxSize(void) const;
      void printLIst(void) const;
      bool isItemEqualATLoc(int location,const Type& Item) const;
      void insertAtLoc(int location, const Type& Item);
      void insertAtEnd(const Type& Item);
      void removeAtLoc(int location);
      void retriveAtLoc(int location, Type& Item) const;
      void replaceAtLoc(int location, const Type& Item);
      void clearList(void);
      int sequenceSearch(const Type& Item) const;
      void insertItem(const Type& Item);
      void removeItem(const Type& Item);

};


int main(void){
       ArrayList<string> a;
       string b, c;
       cout << "Enter your name: ";
       cin >> b >> c;

       a.insertAtEnd(b);
       a.insertAtEnd(c);

       cout << "Enter your name: ";
       cin >> b >> c;

       a.insertAtEnd(b);
       a.insertAtEnd(c);

       a.printLIst();


    return 0;
}

      //constructor definition
     template <class Type>
     ArrayList<Type> :: ArrayList(size_t size){
             this->array = new Type[size];
              //condition for checking whether memory is allocated successfully or not
         if(!this->array) {
               cout << "There is not enough memory to be allocate!"<<endl;
               exit(0);
           }
             this->size = 0;
             this->max_size = size;
     }

      //copyconstructor definition
      template <class Type>
     ArrayList<Type> ::  ArrayList(const ArrayList<Type>& otherlist){
         this->max_size = otherlist.max_size;
         this->array = new Type[this->max_size];
         //condition for checking whether memory is allocated successfully or not
       if(!this->array) {
               cout << "There is not enough memory to be allocate!"<<endl;
               exit(0);
           }
         this->size = otherlist.size;
         for(int i=0; i<this->size; i++)
            this->array[i] = otherlist.array[i];
     }

      //assignment operator overloading
      template <class Type>
      const ArrayList<Type>& ArrayList<Type> ::  operator = (const ArrayList<Type>& otherlist){
            if(this->array != otherlist.array) //avoid self assignment
            {
                //deleting the previous memory
                delete [] array;
              //allocating the new memory
                this->max_size = otherlist.max_size;
                this->size = otherlist.size;
                this->array = new Type[this->max_size];
                 //condition for checking whether memory is allocated successfully or not
               if(!this->array) {
               cout << "There is not enough memory to be allocate!"<<endl;
               exit(0);
                }
              for(int i=0; i<this->size; i++)
                  this->array[i] = otherlist.array[i];

            }
          return this;
      }

      //destructor definition
      template <class Type>
     ArrayList<Type> ::  ~ArrayList(void){
         delete [] array;
     }

      //function Definitions
      template <class Type>
      bool ArrayList<Type> :: isEmpty(void) const{
         return this->size == 0;
      }
      
      template <class Type>
      bool ArrayList<Type> :: isFull(void) const{
        return this->size == this->max_size;
      }
      
      template <class Type>
      int ArrayList<Type> :: listSize(void) const{
          return this->size;
      }
      
      template <class Type>
      int ArrayList<Type> :: maxSize(void) const{
          return this->max_size;
      }
      
      template <class Type>
      void ArrayList<Type> :: printLIst(void) const{
         if(this->isEmpty())
            cout << "The List is empty!" <<endl;
         else 
           for(int i=0; i<this->size; i++)
            cout << i+1 << ". "<< this->array[i] << endl;   
      }
      
      template <class Type>
      bool ArrayList<Type> :: isItemEqualATLoc(int location,const Type& Item) const{
        return this->array[location] == Item;
      }
      
      template <class Type>
      void ArrayList<Type> :: insertAtLoc(int location, const Type& Item) {
         if(location < 0 || location > this->size)
             cout << "You have Entered Invalid location!"<<endl;
          else{
             for(int i=location; i<this->size; i++)
                this->array[i+1]= this->array[i];
                this->array[location]= Item;
                this->size++;
          }

      }
      
      template <class Type>
      void ArrayList<Type> :: insertAtEnd(const Type& Item){
          if(this->isFull())
            cout << "The list is Full!"<<endl;
          else 
             this->array[this->size++] = Item;
      }

      
      template <class Type>
      void ArrayList<Type> :: removeAtLoc(int location){
         if(location < 0 || location >= this->size)
              cout << "The location you entered is out of range!"<<endl;
         else 
         {
           for(int i=location; i<this->size; i++)
              this->array[i]= this->array[i+1];
              this->size--;
         }
      }
      
      template <class Type>
      void ArrayList<Type> :: retriveAtLoc(int location, Type& Item) const{
          if(location < 0 || location >= this->size)
              cout << "The location you entered is out of range!"<<endl;
          else 
              Item = this->array[location];
      }
      
      template <class Type>         
      void ArrayList<Type> :: replaceAtLoc(int location, const Type& Item){
        if(location < 0 || location >= this->size)
              cout << "The location you entered is out of range!"<<endl;
        else
            this->array[location] = Item;
      }
      
      template <class Type>
      void ArrayList<Type> :: clearList(void){
        this->size = 0;
      }
      
      template <class Type>
      int ArrayList<Type> :: sequenceSearch(const Type& Item) const{
          for(int i=0; i<this->size; i++)
             if(Item == this->array[i])
                  return i;
              return -1;
      }
     
      template <class Type>
      void ArrayList<Type> :: insertItem(const Type& Item){
         if(isFull())
             cout << "The List is full!"<< endl;
         else if(!this->size)
             this->array[this->size++] = Item;
         else 
            {
              int location = sequenceSearch(Item);
              if(location == -1)
                   this->array[this->size++] = Item;
              else 
                cout << "The element already exist in the list. Duplication is not allowed!"<<endl;
            }
      }
      
      template <class Type>
      void ArrayList<Type> :: removeItem(const Type& Item){
         int location = sequenceSearch(Item);
         if(location != -1)
            removeAtLoc(location);
          else 
            cout << "The Item doesn't exist in the list"<< endl;
      }