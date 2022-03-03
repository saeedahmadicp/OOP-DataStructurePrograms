#include <iostream>

unsigned int counter=0;

using namespace std;

void increment(void){
counter++;
}

void decrement(void){
counter--;
}

unsigned int get_value(void){
return counter;
}

void display(void){
cout <<  "The value of counter is: " << counter << endl;
}

void reset(void){
counter=0;
}

