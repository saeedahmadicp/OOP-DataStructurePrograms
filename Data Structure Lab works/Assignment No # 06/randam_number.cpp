#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(void){


int n;
int number;

srand(time(NULL));
cout << "Enter the total number: ";
cin >> number;


for(int i=0; i<number; i++){
   cout << "\t"<< i+1 <<". ";
    for(int j=0;j<4; j++){
       n = rand()%26 + 65;
       cout << (char) n ;
    }
    cout << endl;
}

return 0;
}
