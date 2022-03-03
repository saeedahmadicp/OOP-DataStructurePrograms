#include <iostream>

using namespace std;

int main(void){
   int a, b, lcm,c,d;
   cout << "Enter two numbers: "<<endl;
   cin>> a >> b;

    if(a>b) {c=a; d=b;}
    else {c=b; d = a;}
     lcm = d;

     while(1){
       if(lcm%a==0 && lcm%b==0){
           cout << "The LCM is: "<< lcm << endl;
           break;
       }
       ++lcm;
   }
     

    return 0;
}