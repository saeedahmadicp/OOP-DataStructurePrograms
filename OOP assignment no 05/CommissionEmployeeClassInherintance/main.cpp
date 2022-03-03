#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "main.h"
#include "base.h"

using namespace std;

int main(){

BaseCommissionEmployee saeed, saad;

saeed.setFirstName("Usama");
saeed.setLastName("Bin Hafeez");
saeed.setSocialSecurityNumber("123-224-231");
saeed.setGrossSales(20000);
saeed.setCommissionRate(0.02);


saad.setFirstName("Saad");
saad.setLastName("Ahmad");
saad.setSocialSecurityNumber("123-224-231");
saad.setGrossSales(20000);
saad.setCommissionRate(0.02);
saad.setBasicSales(30000);

saad.print();
cout << endl;
saeed.print();
getch();
return 0; }
