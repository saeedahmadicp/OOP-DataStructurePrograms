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


;

template <class Type>
class linklistType{
    public:

   const linklistType<Type>& operator = (const linklistType<Type>& right);  
   void initializeList(void);
   void printList(void);
   bool isEmptyList(void);
   void destroyList(void);
  
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
       orderedlinklist<int> a;
       a.insert(12);
       a.insert(45);
       a.insert(4343);
       a.printList();
    return 0;
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
       bool terminate = false;
       if(first == NULL && last == NULL)
          cout << "List is empty!"<< endl;
      else{
     nodeType<Type>* current;
       current = first;
       while(!terminate){
           cout << current->info << endl;
           current = current->link;
           if(current == this->first)
              terminate = true;
       }
      }}

  template<class Type>
   bool linklistType<Type> :: isEmptyList(void){
       return (this->first == NULL && this->last == NULL);
   }

  template <class Type>
   void linklistType<Type> :: destroyList(void){
       bool terminate=false;
       if(first != NULL){
          nodeType<Type>* current, *first_node;
          first_node = first;
         while(!terminate){
             current = first;
             first = first->link;
             delete current;
             if(first == first_node)
              terminate = true;
         }
         last = NULL;
         count = 0;
       }
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
     bool terminate = false;
     
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
      while(!terminate){
          newNode = new nodeType<Type>;
          newNode->info = current->info;
          newNode->link = NULL;
          last->link = newNode;
          last = newNode;
          current = current->link;
          if(current == this->first)
            terminate = true;
      }
    }
    

}


//class orderlinklist functions
     template<class Type>
     bool orderedlinklist<Type>:: search(const Type& item) const {
      bool found = false;
      bool terminate = false;

       nodeType<Type>* current;
      current = this->first;
      while(!terminate && !found){
          if(current->info >= item)
             found = true;
           else {
             current = current->link;
             if(current == this->first)
               terminate = true;
           }
             
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
      bool terminate = false;
      newNode = new nodeType<Type>;
      newNode->info = item;
      newNode->link = NULL;
      current = this->first;
         if(current == NULL){
             this->first = this->last = newNode;
             this->last->link = this->first;
         }
         else{
             while(!terminate && !found){
                 if(current->info >= item)
                   found = true;
                  else{
                      trailcurrent = current;
                      current = current->link;
                      if(current == this->first)
                        terminate = true;
                  }   
             }
            if(current == this->first){
               newNode->link = this->first;
               this->first = newNode;
            }
            else{
                trailcurrent->link = newNode;
                newNode->link = current;
                if(current == NULL){
                   this->last = newNode;
                   this->last->link = this->first;
                }
            }
         }
         ++this->count; 

     }

     template<class Type>
     void orderedlinklist<Type>:: deleteNode(const Type& item){
         nodeType<Type>* current;
         nodeType<Type>* trailcurrent;
         bool found = false;
         bool terminate = false;

         current = this->first;
         if(current == NULL)
           cout << "The link list is empty!"<<endl;
         else{
            while(!terminate && !found){
                if(current->info >= item)
                  found = true;
                else{
                    trailcurrent = current;
                    current = current->link;
                    if(current = this->first)
                     terminate = true;
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
                     if(current->link == this->first)
                      this->last = trailcurrent;
                      this->last->link = this->first;
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