#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float basic_salary, gross_salary, dearness_allowance, house_rent_allowence;

    cout << "Enter Your Basic Salary: " ;
    cin >> basic_salary;

    dearness_allowance=(basic_salary*40.0f/100.0f);
    house_rent_allowence=(basic_salary*20.0f/100.0f);
    gross_salary= (basic_salary)+dearness_allowance+house_rent_allowence;
     cout << "Your Gross Salary is: " << gross_salary << "." << endl;
     getch();

    return 0;
}
