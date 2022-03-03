#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED
#include "main.h"

class BaseCommissionEmployee: public CommissionEmployee{
  private:
       double BasicSales;
       double TotalSalaes;
  public:
  BaseCommissionEmployee(const string&name1= " ", const string&name2= " " ,
                         const string& ssn= " ", double gs =0.0, double cr=0.0, double Bs=0.0, double ts=0.0);

   void setBasicSales(double);
   double getBasicSales() const ;
   double getTotalSales();
   void print();
};

#endif // BASE_H_INCLUDED
