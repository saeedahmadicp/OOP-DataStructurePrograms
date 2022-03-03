#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void StringCopy(char *str, char *c_str);

int main(void){
    
   char ch[20]; 
   char str[20];
   cout << "Enter your Message: ";
   cin >> ch;

   StringCopy(ch, str);
   cout << "The copy string is: " << ch << endl;

  return 0;
}

void StringCopy(char *str, char *c_str){
   while(*str)
       *c_str++ = *str++;
        *c_str++ = *str++;
}