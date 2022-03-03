#include <iostream>
#include <conio.h>

using namespace std;

long long factorial(long long num);
inline void print_line(void);

int main()
{
    long long num,fact;
    cout << "Enter any number for factorial: "; cin >> num;
    fact = factorial(num);
     print_line();
    cout << "The Factorial of " << num << " is : " << fact << "." << endl;
     print_line();
    getch();
    return 0;
}

inline void print_line(void){
 for(int i=0; i<40; i++) cout << ".";
 cout << endl;
}


long long factorial(long long num){
 if(num>1)
    return num* factorial(num-1);
 else
    return 1;
}

