#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

//maximum number of books
enum { SIZE = 5 };

//Structure definition
struct book_record
{
   int book_id;
   char book_title[50];
   char author_of_book[50];
   float cost_of_book;

} book[SIZE];

//function prototypes
void Add_Book(void);
void Display_Book(void);
void Book_Author(void);
void Count_Book(void);

//Global variable for the control of books record
size_t count=0;

int main(void){
	int option;
	char ch;
 do{
    cout << "Press 1 to Enter a Book Record."<<endl 
         << "Press 2 to Display Records of all Book availabe in library."<<endl
         << "Press 3 to Search Books by Author Name."<<endl
         << "Press 4 to Count Total Books in the Library."<<endl
         << "Press 5 to Exit from the Systerm."<<endl;
     cin>> option;

  switch(option){
     case 1: Add_Book();       break;
     case 2: Display_Book();   break;
     case 3: Book_Author();    break;
     case 4: Count_Book();     break;
     case 5: exit(0);          break;
     default: 
        cout << "You have Entered invalid option!"<< endl;
	}
     cout << "Are you want to continue. Press y: ";
     cin >> ch;

     }while(ch == 'y' || ch == 'Y');
	return 0;
}


//function Definitions
void Add_Book(void){
   if(count <5 ){
    cout << "Enter the Book Id: ";
    cin>> book[count].book_id;
    cout << "Enter the Book Title: "; cin.ignore();
    cin.getline(book[count].book_title, 50);
    cout << "Enter the Name of the Author: ";  
    cin.getline(book[count].author_of_book, 50);
    cout << "Enter the cost of the Book: ";
    cin >> book[count++].cost_of_book;
  }
   else 
   	cout << "No more space in system for another book"<< endl;
}


void Display_Book(void){
   cout << count+1 << " Records: "<<endl<<endl;

  for(int i=0; i<count; i++){
   cout << "Book Id: "<< book[i].book_id <<endl;
   cout << "Book Title: "<< book[i].book_title <<endl;
   cout << "Author Name: "<< book[i].author_of_book <<endl;
   cout << "Cost of Book: "<< book[i].cost_of_book <<endl;
    }
}

void Book_Author(void){
 char name[50];   cin.ignore();
  cout << "Enter the name of the author: ";
  cin.getline(name, 50); 

 for(int i=0; i<count; i++){
 	cout << name << " = " << book[i].author_of_book<< endl ;
   if(!strcmp(name, book[i].author_of_book)){
    cout << "Book Id: "<< book[i].book_id <<endl;
    cout << "Book Title: "<< book[i].book_title <<endl;
    cout << "Author Name: "<< book[i].author_of_book <<endl;
    cout << "Cost of Book: "<< book[i].cost_of_book <<endl; 
   }
 } 
}

void Count_Book(void){
  cout << "Total number of books in the library are: "<< count+1 << endl;
}






