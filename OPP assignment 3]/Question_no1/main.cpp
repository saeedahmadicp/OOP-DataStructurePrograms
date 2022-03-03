#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

  system("Color 3f");
  int i=32;
  cout << "Value\t\tCharacter"<<endl;
  for(unsigned char n=32 ; i<256; n++,i++)
  cout << " "<< i <<"\t\t"<<n<<endl;
  return 0;
}
