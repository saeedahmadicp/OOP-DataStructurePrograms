#include <iostream>
#include <cstdlib>

using namespace std;

template <class type>
struct nodeType{
    type info;
    nodeType* link;
    //constructor
      nodeType(): link(NULL) {}
};


//forward linklist
template <class type>
class linkList{
    private: 
        nodeType<type>* head;
        nodeType<type>* tail;
    public:
      //exception class 1
       class invalidPointer{
           private: 
             string error;
           public: 
            invalidPointer(string error): error(error){}
            string errorFunction(void){ return  this->error; }
       };
    //excepiton class 2
       class EmptyMemory{};
    //constructor 
       linkList(): head(NULL), tail(NULL) {}
    //destructor
    ~linkList(){
        nodeType<type>* temp, *node;
           temp = this->head;
        while(temp){
             node = temp;
            temp = temp->link;
            delete node;
        }
    }

    //function for inserting at first position
     void insertAtFirst(nodeType<type>* temp){
      if(!temp)
            throw invalidPointer("insertAtFirst()");
        nodeType<type>* node = new nodeType<type>(*temp);
      if(!head)
          this->head = this->tail = node;
      else{
          node->link = this->head;
          this->head = node;
      }
     }

    //function for inserting element at last position
     void insertAtLast(nodeType* temp){
        if(!temp)
              throw invalidPointer("insertElement()");
        nodeType* newNode = new nodeType(*temp);
         if(!this->head) 
               this->head = newNode;
          if(this->tail)  this->tail->link = newNode;
            this->tail = newNode;
    }

    //function for removing last element
    nodeType<type>* removeLast(void){
      if(!this->head) throw EmptyMemory();
      nodeType<type>* node,*temp;
         node = this->tail;
         temp = this->head;
         while(temp){
             if(temp->link == this->tail){
                 this->tail = temp;
                 break;
                 this->tail->link = NULL;
             }
             temp = temp->link;
         }
        return node;
    }


    //function for removing first element 
    nodeType<type>* removeFirst(void){
       if(!this->head) throw EmptyMemory();
       nodeType<type>* temp;
         temp = this->head;
           this->head = this->head->link;
        if(!this->head) this->tail = NULL;
        return temp;
    }

   void Display(void){
       if(!this->head) throw EmptyMemory();
       nodeType<type>* temp;
         temp = this->head;
         cout << "All the data is: "<< endl;
         int i=0;
      while(temp){
          cout <<++i<<". "<<temp->info << endl;
          temp = temp->link;
      }
   }
};

   

int main(void){

try{
    linkList<int> a;
    nodeType<int> *node = new nodeType<int>[5];
    cout << "Enter the data: ";
    for(int i=0; i<5; i++)
        cin>> node[i].info;
    
    for(int i=0; i<5; i++)
       a.insertAtLast(&node[i]);

      a.Display();
}

        catch(linkList<int>:: EmptyMemory){
            cout << "The memory is currently empty!"<< endl;
        }
        
        catch(linkList<int>:: invalidPointer d){
            cout << "The program is terminated due to invalid pointer. The error is occurred "
                 <<"in the function: "<< d.errorFunction() << endl;
        }


    return 0;
}










