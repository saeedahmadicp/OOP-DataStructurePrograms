#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int SumSquare(int a, int b){
 return (a+b)*(a+b);	
}

void check_and_do(int num, char ch){
	if(ch == 'f' || ch == 'F')
	 { int fact=1;
		 for(int i=1; i<=num; i++) fact*=i;
		 cout <<"The factorial of the number is: "<< fact <<endl;
			 }
    else if(ch == 'c' || ch == 'C')
	 cout <<"The cube of the number is: "<< num*num*num <<endl;
 
    else if(ch == 's' || ch == 'S')
		cout << "The square of the number is: "<< num*num << endl;
	else
		cout <<"Sorry! you have Entered invalid character."<<endl;
}

  int sum(int num){
    if(num==1)
		return 1;
	else
		return num+sum(num-1);
 }
 
int main()
{
	int x; char ch;
	cout << "Enter any integer: ";cin>> x;
	//cout << "Enter any character: ";cin>> ch;
	// check_and_do(x, ch);
	cout << "The result is: "<<sum(x)<<endl;
	getch();
	return 0;
}