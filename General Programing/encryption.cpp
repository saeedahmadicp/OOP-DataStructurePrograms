#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;

string Encryption(string msg, int SecretKey);
string Decryption(string msg, int SecretKey);
int GeneratePrimeNumber(int num);


int main(void){
   
   string message;
     cout << "Enter your message: ";
    getline(cin, message);

     string encrypt;
     encrypt = Encryption(message, 12);
       
        cout << endl << "Your original message was: "<< message << endl
              << "Your Encrypted message is: "<< encrypt << endl;
   getch();
   string decrypt ; 
      cout << "Enter your message: ";
       getline(cin, decrypt);
     cout << endl << "Your original message was: "<< Decryption(decrypt, 12);

    return 0;
}


int GeneratePrimeNumber(int num){
	for(int i=num+1, j; ; i++){
	    for(j=2; j<i; j++) if(i%j==0) break;
	    if(i==j) return i;
	}}

string Encryption(string msg, int SecretKey){
    int num, i=0;
     while(msg[i]){
      SecretKey = GeneratePrimeNumber(SecretKey);
       num = static_cast<int>(msg[i]) + SecretKey;
       msg[i++] = static_cast<char>(num);
     }
  return msg;
}

string Decryption(string msg, int SecretKey){
   int num, i=0;
     while(msg[i]){
      SecretKey = GeneratePrimeNumber(SecretKey);
       num = static_cast<int>(msg[i]) - SecretKey;
       msg[i++] = static_cast<char>(num);
     }
  return msg;

}
