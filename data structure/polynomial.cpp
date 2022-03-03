#include <iostream>
#include <cmath>

using namespace std;





int main(void){
   string s;
   cout << "Enter the time: ";
   cin >> s;
   cout << s[0] << s[1] << endl;
   s[0]++;
   cout << s <<endl;
   s[1] = 49;
   cout << s;
    return 0;
}