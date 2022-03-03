#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  
  enum {SIZE = 100};
  int arr[SIZE];

 /* srand((unsigned) time(NULL));
   for(int i=0; i<100; i++)
    	arr[i] = rand()%10000+1;

    ofstream os("saeedkhan.dat", ios:: binary);
	os.write(reinterpret_cast<char*>(arr), SIZE*sizeof(int));
    os.close();	 */
	
 ifstream is("saeedkhan.dat", ios :: binary);
 is.read(reinterpret_cast<char*> (arr), SIZE* sizeof(int));
 is.close();
 
 for(int i=0; i<100; i++)
	cout << arr[i] << endl;

 return 0;
}