#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

using namespace std;
bool find_prime_n(int num);

int main()
{  system("color 3f");
   int LowerLimit, UpperLimit;
    cout << "Enter the lower limit: "; cin >> LowerLimit;
    cout << "Enter the upper limit: "; cin >> UpperLimit;
    cout << endl << "All the Prime numbers between "<< LowerLimit <<" and "<< UpperLimit<<" are:"<<endl;
    for(int i=LowerLimit; i<=UpperLimit; i++){
     if(find_prime_n(i))
        cout << i << " ";
    }
    getch();
    return 0;
}

bool find_prime_n(int num){
  if(num == 1) return false;
  for(int i=2; i<num; i++)
  if(num%i==0) return false;
  return true;
}
