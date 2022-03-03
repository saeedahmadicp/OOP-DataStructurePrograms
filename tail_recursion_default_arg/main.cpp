#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

long long fact_2(int num=2, long long store=1);
long long fact(int num=2);
inline void print_line(void);

int main()
{
    int num, option;
    long long factorial;

    while(3){
    cout << "Enter 1 to call the function using default values."<<endl <<"Enter 2 to call the function manually."
         <<endl <<"Enter 3 to exit." <<endl;
    cin >> option;

    if(option==1) { factorial = fact();
     print_line();
    cout << "The Factorial by using default value is : " << factorial << "." << endl;
    print_line();
    }

    else if(option==2){
    cout << "Enter any number for factorial: "; cin >> num;
    factorial = fact(num);
    print_line();
    cout << "The Factorial of " << num << " is : " << factorial << "." << endl;
    print_line();}
    else
        exit(0);
        cout << endl;
    }
    getch();
    return 0;
}
inline void print_line(void){
 for(int i=0; i<40; i++) cout << ".";
 cout << endl;
}
long long fact(int num){

    return fact_2(num, 1);
}
long long fact_2(int num, long long store){
 if(num>1)
    return fact_2(num-1, store*num);
 else
    return store;
}


