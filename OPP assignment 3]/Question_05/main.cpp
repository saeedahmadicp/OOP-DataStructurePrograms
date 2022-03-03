#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    system("Color 3f");
    int n, count_positive_no=0, count_negative_no=0, count_zeros=0;
    cout << "How many numbers you want to enter: "; cin>> n;
    cout << "Enter All the numbers: ";
    for(int i=0; i<n; i++){
        float num;
        cin >> num;
       if(num == 0) count_zeros++;
       else if(num > 0) count_positive_no++;
       else if(num < 0) count_negative_no++;
    }
    cout << "The number of zeros are " << count_zeros << "," <<endl
         << "the no. of positive numbers are "<< count_positive_no << endl
         << "and the no. of negative numbers are: " << count_negative_no << ".";
         getch();
    return 0;
}
