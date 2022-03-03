#include <iostream>

using namespace std;

void decompose(float real_num, int& int_part, float& fract_part);
void decompose(double real_num, int& int_part, double& fract_part);
void decompose(long double real_num, int& int_part, long double& fract_part);

int main()
{
  int int_p;
  double  real_n, fract_p;

  cout << "Enter zero to exit the program!" << endl;

  do{
  cout << "Enter any Real Number: "; cin >> real_n;
  decompose(real_n, int_p, fract_p);
  cout << "The Integral Part of the number is: " << int_p << endl;
  cout << "The Fractional Part of the number is: " << fract_p << endl;
  } while(real_n !=0);

    return 0;
}


void decompose(float real_num, int& int_part, float& fract_part)
{
 int_part = static_cast<int>(real_num);
 fract_part = real_num - int_part;

}


void decompose(double real_num, int& int_part, double& fract_part)
{
 int_part = static_cast<int>(real_num);
 fract_part = real_num - int_part;

}


void decompose(long double real_num, int& int_part, long double& fract_part)
{
 int_part = static_cast<int>(real_num);
 fract_part = real_num - int_part;

}






