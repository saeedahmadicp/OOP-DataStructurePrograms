#include <iostream>
#include <cstdlib>

using namespace std;

template<class Type>
struct nodeType
{
	Type info;
	nodeType<Type>* link;
};

template<class Type>
class CircularLinkedList
{
	private:
		int count; 
		nodeType<Type>* first;

public:
	CircularLinkedList();
	void printList();
	void destroyList();
	void initializeList();
	int length() const;
	bool isEmpty() const;
	void copyList(const CircularLinkedList<Type>&);
	void insertElem(const Type&);
	void deleteNode(const Type&);
	bool searchItem(const Type&) const;
	~CircularLinkedList();
};


int main(void){
     CircularLinkedList<int> a;
     a.insertElem(12);
     a.insertElem(234);
     a.printList();
    return 0;
}


template<class Type>
CircularLinkedList<Type>::CircularLinkedList() : count(0), first(NULL)
{}


template<class Type>
bool CircularLinkedList<Type>::isEmpty() const
{
	return count == 0;
}


template<class Type>
int CircularLinkedList<Type>::length() const
{
	return count;
}


template<class Type>
void CircularLinkedList<Type>::initializeList()
{
	destroyList();
}


template<class Type>
void CircularLinkedList<Type>::printList()
{
	if (isEmpty())
	{
		cerr << "Cannot print! List is empty!" << endl;
		return;
	}
	nodeType<Type>* current = first->link;
	do
	{
		cout << current->info << endl;
		current = current->link;
	} while (current != first->link);
}


template<class Type>
void CircularLinkedList<Type>::copyList(const CircularLinkedList<Type>& obj)
{
	if (first != NULL)
	{
		destroyList();
	}

	if (obj.first == NULL)
	{
		cout << "The list you want as an initializer is currently empty!" << endl;
		first = NULL;
		count = 0;
	}

	else
	{
		nodeType<Type>* newNode;
		nodeType<Type>* current;
		nodeType<Type>* last;

		current = obj.first->link;
		count = obj.count;

		first = new nodeType<Type>;
		first->info = current->info;
		first->link = first;
		last = first;
		current = current->link;

		while (current != obj.first->link)
		{
			newNode = new nodeType<Type>;
			newNode->info = current->info;
			newNode->link = first;
			last->link = newNode;
			last = newNode;
			current = current->link;
		}
		first = last;
	}
}


template<class Type>
bool CircularLinkedList<Type>::searchItem(const Type& elem) const
{
	if (isEmpty())
	{
		cerr << "List is currently empty!" << endl;
		return false;
	}

	nodeType<Type>* current = first->link;
	for (int i = 1; i <= count; ++i)
	{
		if (current->info == elem)
			return true;
		else if (i == count && current->info != elem)
			return false;
		else
			current = current->link;
	}
}


template<class Type>
void CircularLinkedList<Type>::insertElem(const Type& elem)
{
	nodeType<Type>* newNode = new nodeType<Type>;
	nodeType<Type>* current = NULL;
	nodeType<Type>* trailcurrent = 0;
	bool found = false;
	newNode->info = elem;
	newNode->link = NULL;
	++count;

	if (first == NULL)								
	{
		first = newNode;
		newNode->link = first;
	}
	else
	{
		current = first->link;
		bool found = false;
		do
		{
			if (current->info >= elem)
				found = true;
			else if (current == first && !found)  
			{
				newNode->link = first->link;
				first->link = newNode;
				first = newNode;
				return;
			}
			else
			{
				trailcurrent = current;        
				current = current->link;
			}
		} while (current != first->link && !found);

		if (current == first->link)
		{
			newNode->link = current;		
			first->link = newNode;
		}
		else
		{
			if (found)
				trailcurrent->link = newNode;
			newNode->link = current;
		}
	}

}


template<class Type>
void CircularLinkedList<Type>::deleteNode(const Type& elem)
{
	if (first == NULL)
	{
		cerr << "List is empty";
	}

	else
	{
		nodeType<Type>* current = first->link;
		nodeType<Type>* trailCurrent = NULL;
		bool found = false;
		static bool flag = 0;

		while ((current != first->link || flag == 0) && !found)
			if (current->info >= elem)
				found = true;
			else
			{
				trailCurrent = current;
				current = current->link;
				if (current == first)		
					flag = 1;
			}

		if (current->info == elem)
		{
			if (current == first->link)
			{
				first->link = current->link;
				delete current;
				if (count == 1)			
				{
					first->link = NULL;
					first = NULL;
					--count;
				}
			}
			else
			{
				if (current == first && current->info == elem)		
				{
					trailCurrent->link = first->link;
					first = trailCurrent;
					delete current;
					--count;
					return;
				}

				trailCurrent->link = current->link;		
				delete current;
				--count;
			}
		}
		else
		{
			cout << "Item not found!" << endl;	
			return;
		}
	}
}


template<class Type>
void CircularLinkedList<Type>::destroyList()
{
	if (count == 0){
		cout << "List is empty!";
		return;
	}

	nodeType<Type>* current = first->link;
	nodeType<Type>* temp = NULL;
	while (current != first)
	{
		temp = current;
		current = current->link;
		delete temp;
	}

	first->link = NULL;
	delete first;
	first = NULL;

	count = 0;

	return;
}


template<class Type>
CircularLinkedList<Type>::~CircularLinkedList()
{
	destroyList();
}