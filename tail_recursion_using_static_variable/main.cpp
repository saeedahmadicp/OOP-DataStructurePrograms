#include <iostream>
#include <conio.h>

using namespace std;
int power_cal(int base, int power);
inline void print_line(void);

int main(void){
 int num, power;
 cout << "Enter any number: ";
  cin >>num;
  cout << "Enter the power you want to raised to " << num << " : " ;
  cin >>power;
  print_line();
  cout << num << " raised to the power " << power << " equals to " << power_cal(num, power) <<"."<<endl;
 print_line();
 getch();
return 0;}

inline void print_line(void){
 for(int i=0; i<40; i++) cout << ".";
 cout << endl;
}

int power_cal(int base, int power){
static long long result=1;

if(power>0){
    result*=base;
    return power_cal(base , power-1);
}

else
    return result;
}
