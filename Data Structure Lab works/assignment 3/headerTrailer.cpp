#include <iostream>
#include <string>
using namespace std;

struct nodeType
{
    string info;
    nodeType* link;
};

class HeaderTrailer
{
private:
    nodeType* first;
    nodeType* last;
    int count;

public:
    HeaderTrailer();
    void initializeList();
    void printList();
    void destroyList();
    int length();
    bool isEmpty() const;
    bool search(const string&) const;
    void insert(const string&) ;
    void deleteNode(const string&) ;
    ~HeaderTrailer();
};

int main(void){
 
   HeaderTrailer string_list;
   string_list.insert("saeed");
   string_list.insert("ahmad");
   string_list.insert("khan");
   string_list.printList();


    return 0;
}

HeaderTrailer::HeaderTrailer(): count(0)
{
    first = new nodeType;
    first->info = "A";
    last = new nodeType;
    last->info = "zzzzzzzz";
    last->link = NULL;
    first->link = last;
}

bool HeaderTrailer::isEmpty()const
{
    return count == 0;
}

void HeaderTrailer::initializeList()
{
    destroyList();
}

int HeaderTrailer::length()
{
    return count;
}

void HeaderTrailer::printList()
{
    nodeType* current;
    current = first->link;
     if(count == 0)
        cerr << "!!!List is empty!!!" ;

    while(current->link != NULL)
    {
        cout << current->info << endl;
        current = current->link;
    }

    cout << endl;
}

bool HeaderTrailer::search(const string& elem) const
{
    if (isEmpty())
	{
		cout << "!!!List is currently empty!!!" << endl;
		return false;
	}

    nodeType* current = first->link;
    bool found = false;

    while(current != last && !found)
        if (current->info == elem)
            found = true;
    else
        current = current->link;

    if (found == true)
        return true;

    return false;
}

void HeaderTrailer::insert(const string& elem)
{
    if (elem <= first->info || elem >= last->info)
        cerr << "Cannot insert the element" ;

    nodeType* newNode = new nodeType;
    newNode->info = elem;
    newNode->link = NULL;

    if(count == 0)
    {
        newNode->link = last;
        first->link = newNode;
        ++count;
    }
    else
    {
        nodeType* current = first->link;
        nodeType* trailCurrent = NULL;
        bool found = false;

        while(current != last && !found)
            if(current->info >= elem)
                found = true;
        else
        {
            trailCurrent = current;
            current = current->link;
        }

        if (current == first->link)
        {
            first->link = newNode;
            newNode->link = current;
            ++count;
        }
        else
        {
           trailCurrent->link = newNode;
            newNode->link = current;
            ++count;
        }

    }

    return;
}

void HeaderTrailer::deleteNode(const string& elem)
{
    if (count == 0 || elem <= first->info || elem >= last->info)
        cerr << "!!!List is empty!!!" ;

    nodeType* current = first->link;
    nodeType* trailCurrent = first;
    bool found = false;

    while (current != last && !found)
        if (current->info >= elem)
            found = true;
    else{
        trailCurrent = current;
        current = current->link;
        }

    if(current->info == elem && current != last)
    {
        trailCurrent->link = current->link;
        delete current;
        count--;
    }
    else
    {
        cout << "!!!Sorry... Item to be deleted couldn't be found in the list!!!" << endl;
    }

    return;
}

void HeaderTrailer::destroyList()
{
    nodeType* current = first->link;
    nodeType* temp = NULL;

    while(current != last)
    {
        temp = current;
        current = current->link;
        delete temp;
    }
    count = 0;
}

HeaderTrailer::~HeaderTrailer()
{
    destroyList();
}
