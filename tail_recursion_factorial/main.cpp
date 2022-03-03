#include <iostream>
#include <conio.h>

using namespace std;
long long fact_2(int num, long long store);
long long fact(int num);
inline void print_line(void);

int main()
{
    int num;
    long long factorial;
    cout << "Enter any number for factorial: "; cin >> num;
    factorial = fact(num);
    print_line();
    cout << "The Factorial of " << num << " is : " << factorial << "." << endl;
    print_line();
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

