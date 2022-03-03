#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
 char ch;
 char saeed[1000];
 int i=0;
 ifstream infile("saeed.txt"); 
 while(infile){
   infile.get(ch);
   cout << ch;
   saeed[i++] = ch;   

 } saeed[i] = '\0';
	
	cout << saeed;
 return 0;
}

