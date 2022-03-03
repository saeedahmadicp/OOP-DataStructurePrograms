#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdbool>

using namespace std;


struct nodeType{
   string info;
   nodeType* link;
};



class linklistType{
    public:
   const linklistType& operator = (const linklistType& right);  
   void initializeList(void);
   void printList(void);
   bool isEmptyList(void);
   void destroyList(void);
   virtual void deleteNode(const string str)=0;
   virtual bool search(const string str) const=0;
   linklistType();
   linklistType(const linklistType& anotherlist);
   ~linklistType();
 private:
    void copylist(const linklistType& anotherlist);
  protected: 
    int count;
    nodeType* first;
    nodeType* last;
    nodeType* header;
    nodeType* trailer;
};



class orderedlinklist : public linklistType{
   public: 
     bool search(const string str) const;
     void insert(const string str);
     void deleteNode(const string str);
};



int main(void){
    cout << "saeed "<<endl;
   orderedlinklist string_list;
   string_list.insert("saeed");
   string_list.insert("ahmad");
   string_list.insert("khan");
   string_list.printList();
  cout << "ahmad"<<endl;

    return 0;
}




//linklistType class member functions
   const linklistType&  linklistType :: operator = (const linklistType& right){
       if(this != &right){
           copylist(right);
       }
       return *this;
   }  

   
   void linklistType :: initializeList(void){
       destroyList();
   }

  
   void linklistType :: printList(void){
       if(this->count == 0)
          cout << "List is empty!"<< endl;
      else{
     nodeType* current;
       current = first->link;
       while(current != this->trailer){
           cout << current->info << endl;
           current = current->link;
       }
      }}

  
   bool linklistType :: isEmptyList(void){
       return (this->count == 0);
   }

  
   void linklistType :: destroyList(void){
       if(this->count != 0){
          nodeType* current;
         while(first != this->trailer){
             current = first->link;
             first = first->link;
             delete current;
         }
         this->first->link = this->trailer;
         this->last = this->trailer;
         count = 0;
       }
   }

  
   
   linklistType :: linklistType(){
       this->first = this->header;
       this->first->link = this->last;
       this->last = this->trailer;
       this->header = new nodeType;
       this->trailer = new nodeType;
       this->header->info = "A";
       this->trailer->info = "zzzzzzzz";
       this->header->link = NULL;
       this->trailer->link = NULL;
       count =0;
   }
   
   
   linklistType :: linklistType(const linklistType& anotherlist){
     if(this != &anotherlist){
         this->copylist(anotherlist);
     }
   
   }
   
   
   linklistType :: ~linklistType(){
       destroyList();
   }


void linklistType :: copylist(const linklistType& anotherlist){
     nodeType* newNode;
     nodeType* current;
     
    if(this->count == 0)
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
          newNode = new nodeType;
          newNode->info = current->info;
          newNode->link = NULL;
          last->link = newNode;
          last = newNode;
          current = current->link;
      }
    }
    

}




//class orderlinklist functions
     
     bool orderedlinklist:: search(const string str) const{
      bool found = false;
       nodeType* current;
      current = this->first->link;
      while(current != this->trailer && !found){
          if(current->info >= str)
             found = true;
           else 
             current = current->link;
      }
        if(found)
          found = (current->info == str);
         return found;
     }


     void orderedlinklist:: insert(const string str){
      nodeType* newNode;
      nodeType* current;
      nodeType* trailcurrent;
      bool found = false;
      newNode = new nodeType;
      newNode->info = str;
      newNode->link = NULL;
      current = this->first;
           if(this->count == 0){
               first->link = newNode;
               newNode->link = this->last;
               ++this->count;
           }
           else{
         
             while(current != this->trailer && !found){
                 if(current->info >= str)
                   found = true;
                  else{
                      trailcurrent = current;
                      current = current->link;
                  } }  
           
                trailcurrent->link = newNode;
                newNode->link = current;
               ++this->count;
            
         }
         }
       


     void orderedlinklist:: deleteNode(const string str){
         nodeType* current;
         nodeType* trailcurrent;
         bool found = false;

         current = this->first->link;
         if(this->count == 0)
           cout << "The link list is empty!"<<endl;
         else{
            while(current != this->trailer && !found){
                if(current->info >= str)
                  found = true;
                else{
                    trailcurrent = current;
                    current = current->link;
                }
            }
             if(found){
                if(current->info == str){
                   trailcurrent->link = current->link;

                      delete current;
                      --this->count;
                  } 
                
                else 
                  cout << "The item is not found in the linklist!"<<endl;
             }
             else 
              cout << "The item is not found in the linklist!"<<endl;
         }

     }











