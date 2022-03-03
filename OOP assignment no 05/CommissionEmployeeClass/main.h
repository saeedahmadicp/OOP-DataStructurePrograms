#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class CommissionEmployee{
 private:
     string firstName;
     string lastName;
     string socialSecurityNumber;
     double grossSales;
     double commissionRate;
  public:
    CommissionEmployee(const string&name1=" ", const string&name2=" " ,const string& ssn=" ", double gs=0.0, double cr=0.0);
    void setFirstName(const string &);
    string getFirstName() const;
    void setLastName(const string &);
    string getLastName() const;
    void setSocialSecurityNumber(const string&);
    string getSocialSecurityNumber() const;
    void setGrossSales(double);
    double setGrosssSales() const ;
    void setCommissionRate(double);
    double getCommissinRate() const;
    double earnings() const ;
    void print() const;
};



















#endif // MAIN_H_INCLUDED
