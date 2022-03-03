#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>

using namespace std;

float find_fact(int num,  float result=1);

int main()
{
   system("Color 3f");
   int n_terms;
   float sum=0;
   cout << "How many term you want to add of the taylor series of e: ";
   cin >> n_terms;

   for(int i=1; i<=n_terms; i++)
   sum += static_cast<float>(i)/find_fact(i);

  cout << "The sum of the "<< n_terms << " of the taylor series of e is: "
       << setprecision(20)<< sum << "."<< endl;
   getch();

    return 0;
}

//tail recursion for factorial
float find_fact(int num,  float result){
 if(num>0){
    result*=num;
    return find_fact(num-1, result);
 }
 else
    return result;
}
