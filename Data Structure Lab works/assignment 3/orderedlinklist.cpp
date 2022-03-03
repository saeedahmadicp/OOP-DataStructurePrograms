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
class orderedlinklist : public linklistType<Type>{
   public: 
     bool search(const Type& item) const;
     void insertFirst(const Type& item);
     void insertLast(const Type& item);
     void insert(const Type& item);
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




//class orderlinklist functions
     template<class Type>
     bool orderedlinklist<Type>:: search(const Type& item) const{
      bool found = false;
       nodeType<Type>* current;
      current = this->first;
      while(current != NULL && !found){
          if(current->info >= item)
             found = true;
           else 
             current = current->link;
      }
        if(found)
          found = (current->info == item);
         return found;
     }

     template<class Type>
     void orderedlinklist<Type>:: insertFirst(const Type& item){
         this->insert(item); 
      }

     template<class Type>
     void orderedlinklist<Type>:: insertLast(const Type& item){
       this->insert(item);
     }

     template<class Type>
     void orderedlinklist<Type>:: insert(const Type& item){
      nodeType<Type>* newNode;
      nodeType<Type>* current;
      nodeType<Type>* trailcurrent;
      bool found = false;
      newNode = new nodeType<Type>;
      newNode->info = item;
      newNode->link = NULL;
      current = this->first;
         if(current == NULL){
             this->first = this->last = newNode;
         }
         else{
             while(current != NULL && !found){
                 if(current->info >= item)
                   found = true;
                  else{
                      trailcurrent = current;
                      current = current->link;
                  }   
             }
            if(current== this->first){
               newNode->link = this->first;
               this->first = newNode;
            }
            else{
                trailcurrent->link = newNode;
                newNode->link = current;
                if(this->current == NULL)
                   this->last = newNode;
            }
         }
         ++this->count; 

     }

     template<class Type>
     void orderedlinklist<Type>:: deleteNode(const Type& item){
         nodeType<Type>* current;
         nodeType<Type>* trailcurrent;
         bool found = false;

         current = this->first;
         if(current == NULL)
           cout << "The link list is empty!"<<endl;
         else{
            while(current != NULL && !found){
                if(current->info >= item)
                  found = true;
                else{
                    trailcurrent = current;
                    current = current->link;
                }
            }
             if(found){
                if(current->info == item){
                   if(current == this->first){
                       this->first = this->first->link;
                       if(this->first == NULL)
                          this->last == NULL;
                    delete current;
                    --this->count;
                   }
                  else{
                     trailcurrent->link = current->link;
                     if(current->link == NULL)
                      this->last = trailcurrent;
                      delete current;
                      --this->count;
                  } 
                }
                else 
                  cout << "The item is not found in the linklist!"<<endl;
             }
             else 
              cout << "The item is not found in the linklist!"<<endl;
         }

     }











