  #include "main.h"
  #include "base.h"

CommissionEmployee :: CommissionEmployee(const string&name1,
                                          const string&name2,const string& ssn, double gs, double cr){
         firstName = name1;
         lastName = name2;
         socialSecurityNumber = ssn;
         grossSales = gs;
         commissionRate = cr;
    }

    void  CommissionEmployee :: setFirstName(const string &name1){
        firstName = name1;
    }
    string  CommissionEmployee :: getFirstName() const{
      return firstName;
    }
    void CommissionEmployee :: setLastName(const string &name2){
      lastName = name2;
    }
    string CommissionEmployee :: getLastName() const{
     return lastName;
    }
    void CommissionEmployee :: setSocialSecurityNumber(const string&ssn){
      socialSecurityNumber = ssn;
    }
    string CommissionEmployee :: getSocialSecurityNumber() const{
      return socialSecurityNumber;
    }
    void CommissionEmployee :: setGrossSales(double gs){
        if(gs>=0)
        grossSales = gs;
        else throw invalid_argument("Gross sell must be greater or equal to zero!\n");
    }
    double CommissionEmployee :: getGrosssSales() const {
      return grossSales;
    }
    void CommissionEmployee :: setCommissionRate(double cr){
      if(cr >=0 && cr <=1)
      commissionRate = cr;
      else
         throw invalid_argument("Commission rate is invalid\n");
    }
    double CommissionEmployee :: getCommissinRate() const{
      return commissionRate;
    }
    double CommissionEmployee :: earnings() const {
        return grossSales*commissionRate;
    }
    void CommissionEmployee :: print() const{
     cout << "Name: "<< firstName << " "<< lastName <<endl;
     cout << "Social Security Number: "<< socialSecurityNumber << endl;
     cout << "Gross Sales: "<< grossSales<<endl;
     cout << "Commission Rate: "<< commissionRate << endl;
     cout << "Total Income: "<< CommissionEmployee :: earnings() +
                               CommissionEmployee :: grossSales()<< endl;

    }


BaseCommissionEmployee :: BaseCommissionEmployee(const string&name1, const string&name2,
                         const string& ssn, double gs, double cr, double Bs, double ts){
  CommissionEmployee(name1,name2,ssn, gs,cr);
          BasicSales = Bs;
          TotalSalaes = ts;
                         }

   void BaseCommissionEmployee :: setBasicSales(double bs){
       BasicSales = bs;
   }
   double BaseCommissionEmployee :: getBasicSales() const {
      return BasicSales;
   }
   double BaseCommissionEmployee :: getTotalSales(){
      return (BasicSales)+( CommissionEmployee ::earnings())+(CommissionEmployee :: getGrosssSales());
   }

void BaseCommissionEmployee ::  print(){
    CommissionEmployee :: print();
    cout << "The Basic Sales is: "<<BaseCommissionEmployee :: getBasicSales() << endl;
    cout << "The total income is: "<< BaseCommissionEmployee :: getTotalSales() <<endl;

}


















