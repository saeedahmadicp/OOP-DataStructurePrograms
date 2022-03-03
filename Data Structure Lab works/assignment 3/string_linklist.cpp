#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdbool>

using namespace std;

template <class Type>
struct nodeType{
   Type info;
   nodeType<Type>* link;
};


template <class Type>
class linklistIterator{
   private:
     nodeType<Type>* current;
   public:
   linklistIterator();
   linklistIterator(linklistIterator<Type> *ptr);
   Type operator * ();
   linklistIterator<Type> operator ++ (void);
   bool  operator == (const linklistIterator<Type>& right) const;
   bool  operator  != (const linklistIterator<Type>& right) const;

};

template <class Type>
class linklistType{
    public:

   const linklistType<Type>& operator = (const linklistType<Type>& right);  
   void initializeList(void);
   void printList(void);
   bool isEmptyList(void);
   void destroyList(void);
   Type front(void) const;
   Type back(void) const;
   virtual void insertFirst(const Type &newnode)=0;
   virtual void insertLast(const Type &newnode)=0;
   virtual void deletenode(const Type &deletenode)=0;
   virtual void search(const Type & newnode) const=0;
   linklistIterator<Type>& begin();
   linklistIterator<Type>& end();
   linklistType();
   linklistType(const linklistType<Type>& anotherlist);
   ~linklistType();
 private:
    void copylist(const linklistType<Type>& anotherlist);
  protected: 
    int count;
    nodeType<Type>* first;
    nodeType<Type>* last;
};


template<class Type>
class unorderedlinklist : public linklistType<Type>{
   public: 
     bool search(const Type& item) const;
     void insertFirst(const Type& item);
     void insertLast(const Type& item);
     void deleteNode(const Type& item);
};



int main(void){
  
    return 0;
}



   template<class Type>
   linklistIterator<Type>:: linklistIterator(){
       this->current = NULL;
   }
  
   template <class Type>
   linklistIterator<Type>:: linklistIterator(linklistIterator<Type> *ptr){
       this->current = ptr;
   }

   template<class Type>
   Type linklistIterator<Type>:: operator * (){
       return current->info;
   }

   template <class Type>
   linklistIterator<Type> linklistIterator<Type>::  operator ++ (void){
       this->current = this->current->link;
       return *this;
   }

  template<class Type>
   bool linklistIterator<Type>:: operator == (const linklistIterator<Type>& right) const{
          return this->current == right.current;
   }

   template<class Type>
   bool linklistIterator<Type>:: operator != (const linklistIterator<Type>& right) const{
       return this->current != right.current;
   }


//linklistType class member functions
   template <class Type>
   const linklistType<Type>&  linklistType<Type> :: operator = (const linklistType<Type>& right){
       if(this != &right){
           copylist(right);
       }
       return *this;
   }  

   template <class Type>
   void linklistType<Type> :: initializeList(void){
       destroyList();
   }

  template<class Type>
   void linklistType<Type> :: printList(void){
       if(first == NULL && last == NULL)
          cout << "List is empty!"<< endl;
      else{
     nodeType<Type>* current;
       current = first;
       while(current != NULL){
           cout << current->info << endl;
           current = current->link;
       }
      }}

  template<class Type>
   bool linklistType<Type> :: isEmptyList(void){
       return (this->first == NULL && this->last == NULL);
   }

  template <class Type>
   void linklistType<Type> :: destroyList(void){
       if(first != NULL){
          nodeType<Type>* current;
         while(first != NULL){
             current = first;
             first = first->link;
             delete current;
         }
         last = NULL;
         count = 0;
       }
   }

  template<class Type>
   Type linklistType<Type> :: front(void) const{
       return first->info;
   }

   template<class Type>
   Type linklistType<Type> :: back(void) const{
       return last->info;
   }

  template<class Type>
   linklistIterator<Type>& linklistType<Type> :: begin(){
       linklistIterator<Type> current(this->first);
       return current;
   }

   template<class Type>
   linklistIterator<Type>& linklistType<Type> :: end(){
       linklistIterator<Type> current(NULL);
       return current;
   }

   template<class Type>
   linklistType<Type> :: linklistType(){
       this->first = NULL;
       this->last = NULL;
       count =0;
   }
   
   template<class Type>
   linklistType<Type> :: linklistType(const linklistType<Type>& anotherlist){
     if(this != &anotherlist){
         this->copylist(anotherlist);
     }
   
   }
   
   template<class Type>
   linklistType<Type> :: ~linklistType(){
       destroyList();
   }

template <class Type>
void linklistType<Type> :: copylist(const linklistType<Type>& anotherlist){
     nodeType<Type>* newNode;
     nodeType<Type>* current;
     
    if(this->first != NULL)
        this->destroyList();
    if(anotherlist.first == NULL){
        this->first = NULL;
        this->last = NULL;
        this->count =0;
    }
    else{
      current = anotherlist.first;
      this->count = anotherlist.count;
      this->first->info = current->info;
      this->first->link = NULL;
      this->last = this->first;
      current = current->link;
      while(current != NULL){
          newNode = new nodeType<Type>;
          newNode->info = current->info;
          newNode->link = NULL;
          last->link = newNode;
          last = newNode;
          current = current->link;
      }
    }
    

}




//unorderedlinklist member functions
     template<class Type>
     bool unorderedlinklist<Type>:: search(const Type& item) const{
         bool found;
         nodeType<Type>* current;
         found = false;
         current = this->first;
         while(current != NULL && !found){
             if(current->info == item)
                found = true;
             else 
               current = current->link;
         }
         return found;
     }


     template<class Type>
     void unorderedlinklist<Type>:: insertFirst(const Type& item){
            nodeType<Type>* current;
            current->info = item;
            current->link = this->first;
            this->first = current;
            this->count++;
            if(this->last == NULL)
               this->last = current;
     }

     template<class Type>
     void unorderedlinklist<Type>:: insertLast(const Type& item){
          nodeType<Type>* current;
          current->info = item;
          current->link = NULL;
       if(this->first == NULL){
           this->first = current;
           this->last = current;
           this->count++;
       } 
       else{
          this->last->link = current;
          this->last = current;
          this->count++;
       }

     }

     template<class Type>
     void unorderedlinklist<Type>:: deleteNode(const Type& item){
        nodeType<Type>* current;
        nodeType<Type>* trailcurrent;
        bool found;
        if(this->first == NULL)
            cout << "The list is empty!"<<endl;
        else{
            if(this->first->info == item){
                current = this->first;
                this->first = this->first->link;
              if(this->first == NULL)
                this->last = NULL;
                delete current;
                --this->count;
            }
           else{
             trailcurrent = this->first;
             current = this->first->link;
             found = false;
             while(current != NULL && !found){
                 if(this->current->info != item){
                     trailcurrent = current;
                     current = current->link;
                 }
                 else 
                  found = true;
             }

             if(found){
                 trailcurrent->link = current->link;
                 --this->count;
                 if(current == this->last)
                     this->last = trailcurrent;
                 delete current;
                 
             }
             else cout << "The item is not found in the list."<<endl;

           }
        }
        

       
     }




