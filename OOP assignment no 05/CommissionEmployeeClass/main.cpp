#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "main.h"

using namespace std;

int main(){
CommissionEmployee saeed;
saeed.setFirstName("Usama");
saeed.setLastName("Bin Hafeez");
saeed.setSocialSecurityNumber("123-224-231");
saeed.setGrossSales(20000);
saeed.setCommissionRate(0.02);
saeed.print();
getch();
return 0; }
