#include <iostream>

using namespace std;

int main()
{
    int num1, num2, temp;
    cout << "Enter two Integers: " ;
    cin >> num1 >> num2;
    cout << "Original numbers are: " <<endl << "number1 = " << num1<< " number2 = " << num2 <<endl;
    //Swaping
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "We have swap the numbers, their values are: " << endl;
    cout << "number1 = " << num1<< " number2 = " << num2 <<endl;
    return 0;
}
