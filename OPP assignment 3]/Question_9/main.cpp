#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>

using namespace std;

long double find_fact(int num,  long double result=1);

int main()
{
    system("Color 3f");
    int num;
    cout << "Enter any number to find its factorial: ";
    cin >> num;
    for(int i=0; i< 45; i++) cout << "="; cout << endl;
    cout << "The factorial of "<< num << " is: "
         << setiosflags(ios:: fixed) << find_fact(num)
         << "." << endl;
    for(int i=0; i< 45; i++) cout << "="; cout << endl;
    return 0;
}


//tail recursion for factorial
long double find_fact(int num,  long double result){
 if(num>0){
    result*=num;
    return find_fact(num-1, result);
 }
 else
    return result;
}
