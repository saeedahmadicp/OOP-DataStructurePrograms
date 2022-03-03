#include <iostream>
#include <cstdbool>
#include <cstdlib>
#include <conio.h>



using namespace std;

class BankAccount{
    private:
        string FirstName;
        string LastName;
        string CNIC;
        float CurrentBalance;
        long AccountNo;
        static int count;
        static long account_no;
    public: 
       //null constructor
       BankAccount() {
          AccountNo = account_no++;
          count++;
       }
    //Argument constructor
        BankAccount(string FirstName, string LastName, string CNIC,float CurrentBalance):
            FirstName(FirstName), LastName(LastName), CNIC(CNIC),  CurrentBalance(CurrentBalance),
             AccountNo(account_no++) { count++; }
   
       long GetAccountNo(void);
       void CreateAccount(void);
       void CashWithDraw(void);
       void CashDeposit(void);
       void DisplayAccount(void);
       void DisplayAccounts(void);
       void DisplayAccountNos(void);
       int TotalAccounts(void);

   //decleration of freind function
     friend ostream& operator << (ostream& os, BankAccount& a);
     friend istream& operator >> (istream& is, BankAccount& a);
     
};

//initialization of static data member
int BankAccount :: count =0;
long BankAccount :: account_no = 100000;

int main(void){
    cout << "\t\t***Welcome to Bank Management System***"<<endl;
    int limit;
    cout << "How many Accounts Your want to create: ";
    cin >> limit;

    BankAccount* Accounts = new BankAccount[limit];
    int AccountIndex = 0;
    long Temp_Account_No;
     system("cls");

     int option,i;

    while(3){
     cout << "\t\t***Welcome to Bank Management System***"<<endl;
     cout << "1. Create Account"<<endl
          << "2. Cash With Draw" << endl
          << "3. Cash Deposit"<< endl
          << "4. Display Account Data"<<endl
          << "5. Display All Acounts Data"<< endl
          << "6. Show All Account No"<< endl
          << "7. Exit" << endl;
          cin >> option;

     switch(option){
       case 1: 
          if(AccountIndex >= limit)
             cout << "You cannot create further accounts!";
          else  
            Accounts[AccountIndex++].CreateAccount();
          break;

       case 2:
         cout << "Enter Your Account No: ";
         cin >> Temp_Account_No;
         
           for(i=0; i<AccountIndex; i++){
              if(Accounts[i].GetAccountNo() == Temp_Account_No)
                  Accounts[i].CashWithDraw();
                  break;
           }
             if(i==AccountIndex)
                 cout << "You have Entered Invalid Account number!"<<endl; 
                                
         break;

       case 3:
         cout << "Enter Your Account No: ";
         cin >> Temp_Account_No;
           for(i=0; i<AccountIndex; i++){
              if(Accounts[i].GetAccountNo() == Temp_Account_No)
                  Accounts[i].CashDeposit();
                  break;
           }
              if(i==AccountIndex)
                 cout << "You have Entered Invalid Account number!"<<endl;
         break;

      case 4:
         cout << "Enter Your Account No: ";
         cin >> Temp_Account_No;
           for(i=0; i<AccountIndex; i++){
              if(Accounts[i].GetAccountNo() == Temp_Account_No)
                  Accounts[i].DisplayAccount();
                  break;
           }
             if(i==AccountIndex)
                 cout << "You have Entered Invalid Account number!"<<endl;
         break;

      case 5:
          if(!AccountIndex)
             cout << "Sorry! there is no account to display."<< endl;
          else {
             cout << "All the Data of account is: "<< endl <<endl;
               for(int i=0; i<AccountIndex; i++)
                    cout << Accounts[i] << endl << endl;
               }
        break;

      case 6:
           if(!AccountIndex)
               cout << "Sorry! there is no account to display."<< endl;
            else {
               cout << "All the account numbers of the availabe accounts are: "<< endl <<endl;
                for(int i=0; i<AccountIndex; i++)
                  cout << i+1 << ". " << Accounts[i].GetAccountNo()<< endl;
                 }
       break;
      case 7:
         exit(0);
      break;

      default:
        cout << "Your have Entered Invalid option!" << endl;
     }

       cout << endl << endl << "\t\tPress Enter to Continue!"<< endl;
       getch();
       system("cls");
    }

    //we have deallocate all the heap memory
     delete [] Accounts;
     
    return 0;
}



       void BankAccount :: CreateAccount(void){
           cout << "Enter your First Name: "; cin.ignore();
           getline(cin, FirstName);
           cout << "Enter your Last Name: ";
           getline(cin, LastName);
           cout << "Enter your CNIC number: ";
           getline(cin, CNIC);

          for(int i=0; i==0; ){
           cout << "Enter your Initial Amount to Deposit: ";
           cin >> CurrentBalance;
           if(CurrentBalance < 0)
             cout << "You have Enter Invalid Balance!" << endl;
           else i++;
       }
        cout << "Your Account is Successfully Created! Your Account number is: "<< AccountNo <<endl;
       }
       
       long BankAccount :: GetAccountNo(void){
         return AccountNo;  
       }

       void BankAccount ::  CashWithDraw(void){
         float Balance;
         cout << "Enter the cash to Withdraw: ";
         cin >> Balance;
         if(Balance < 0){
            cout << "You have Entered Invalid Ammount!"<<endl;
            return ;
         }
         else {
          if(Balance > CurrentBalance){
             cout << "Sorry! You have not enough balance to Withdraw."<<endl;
          }
          else {
             CurrentBalance -=Balance;
             cout << "Thank you! your balance is successfully Withdraw."<<endl
                  << "Your new balance is now: "<< CurrentBalance << endl;
          }}}

       void BankAccount ::  CashDeposit(void){
          float Balance;
          cout << "Enter the cash to be deposit: ";
          cin >> Balance;
          if(Balance < 0){
             cout << "You have Entered Invalid amount!"<<endl;
             return ;
          }
         else {
            CurrentBalance+=Balance;
            cout << "Cash Deposit is Successfully Completed."<< endl;
            cout << "Your new balance is: "<< CurrentBalance <<endl;
         }
       }

       void BankAccount ::  DisplayAccount(void){
             cout << "Your Account Data is: " << endl;
             cout << "Name: "<< FirstName << " "<< LastName <<endl
                  << "CNIC No: "<< CNIC <<endl
                  << "Current Balance: "<< CurrentBalance << endl
                  << "Account No: "<< AccountNo << endl;
       }

       void BankAccount :: DisplayAccountNos(void){
         int no_of_accounts = TotalAccounts();
          cout << "Currently We have "<< no_of_accounts << " accounts. Their Account no are: "<< endl;
         for(int i=100000, j=1; i<no_of_accounts; i++, j++)
           cout << j << ". "<< i << endl;
       }

       int BankAccount :: TotalAccounts(void){
          return account_no - 100000;
       }

       ostream& operator << (ostream& os, BankAccount& a){
            os << "Name: "<< a.FirstName << " "<< a.LastName <<endl
               << "CNIC No: "<< a.CNIC <<endl
               << "Current Balance: "<< a.CurrentBalance << endl
               << "Account No: "<< a.AccountNo << endl;
           return os;
       }

    istream& operator >> (istream& is, BankAccount& a){
        cout << "Enter your First Name: "; cin.ignore();
           getline(is, a.FirstName);
           cout << "Enter your Last Name: ";
           getline(is, a.LastName);
           cout << "Enter your CNIC number: ";
           getline(is, a.CNIC);

          for(int i=0; i==0; ){
           cout << "Enter your Initial Amount to Deposit: ";
           is >> a.CurrentBalance;
           if(a.CurrentBalance < 0)
             cout << "You have Enter Invalid Balance!" << endl;
           else i++;
       }
        cout << "Your Account is Successfully Created! Your Account number is: "<< a.GetAccountNo() <<endl;
         return is;
      }
   