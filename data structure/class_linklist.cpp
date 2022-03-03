#include <iostream>
#include <cstdlib>
#include <cstdbool>

using namespace std;

template <class type>
struct nodeType {
   type info;
   nodeType<type>* link;
};

//iterator class 
template<class type>
class linkList{
  protected: 
   int count;
   nodeType<type> *first;
   nodeType<type> * last;
  private:
    void copylist(const linkList<type>& otherlist);
  public: 
     linkList(): first(NULL), last(NULL) {}
     //assignment operator oveloading
     const linkList<type>& operator = (const linkList<type>& temp){

     } 

    void initializelist(void){

    }

    void print(void) const {

    
    }
    bool isEmptyList(void) const{

    }

    int length() const{

    }

    void destroyList(){

    }

    type frontElement(void){

    }

    type backElement(void){

    }
    virtual bool search(const type& searchItem) const = 0;
    virtual void insertFirst(const type& newItem) = 0;
    virtual void insertlast(const type& newItem);
    virtual void deleteNode(const type& deleleItem) = 0;
    linkedListIterator<type> begin(void):
    linkedListIterator<type> end(void):
    linkList(const linkList<type>& otherlist);
    ~linkList();
};

//iterator class 
template <class type>
class linkedListIterator: public linkList{
    private: 
      nodeType<type>* current;
    public: 
     linkedListIterator(nodeType<type>* current=NULL): current(current){}
    
     type operator*(void){
         return this->current->info;
     }

     linkedListIterator<type> operator ++ (void){
         current = current->link;
         return *this;
     }

  bool operator == (const linkedListIterator<type>& right) const {
      return this == right.current;
  }  

   bool operator != (const linkedListIterator<type>& right) const {
      return this != right.current;
  }

};













