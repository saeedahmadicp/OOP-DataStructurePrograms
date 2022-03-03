#include <stdio.h>
#include <string.h>

void GetCipher(char *encrypt, char* original, int key);
void GetDecipher(char *decode, char* encrypt, int key);
int GeneratePrimeNumber(int num);


int GeneratePrimeNumber(int num){
	for(int i=num+1, j; ; i++){
	    for(j=2; j<i; j++) if(i%j==0) break;
	    if(i==j) return i;
	}}

void GetCipher(char *encrypt, char* original, int key){

	while(*original){
		int temp1 = (int) *original++;
		key = GeneratePrimeNumber(key);
		temp1+=key;
		char temp2 = (char) temp1;
		*encrypt++ = temp2;
	}
	*encrypt = '\0';
}

void GetDecipher(char *decode, char* encrypt, int key){

	while(*encrypt){
		int temp1 = (int) *encrypt++;
		key = GeneratePrimeNumber(key);
		temp1-=key;
		char temp2 = (char) temp1;
		*decode++ = temp2;
	}
	*decode = '\0';
}

