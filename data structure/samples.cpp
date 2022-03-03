#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(void){

  //taking the number of samples require by the user
  int noOfSamples;
  cout << "Enter the number of samples you want to take: ";
  cin >> noOfSamples;

  //creating memory for holding the result of each sample
  int* samples;
      samples = new int[noOfSamples];

  //declare the constant memory for each possible sample
   const int possibleResults[6] = {1,2,3,4,5,6};  

  //taking the sample N times entered by the user by using rand and srand functions
   srand(time(NULL));
   for(int i=0; i<noOfSamples; i++)
      {
         samples[i] = rand()%6 + 1 ;
      }
    
    int countEachSample[6]= {0};
    float probibilities[6]= {0.00f};

   //finding the occurance of each sample
    for(int i=0; i<noOfSamples; i++){
        for(int j=0; j<6; j++)
            if(samples[i] == possibleResults[j]){
                  ++countEachSample[j];
                  break;
            }
        
    }

   //finding the probibility of each sample
   for(int i=0; i<6; i++){
    probibilities[i] = static_cast<float>(countEachSample[i])/static_cast<float>(noOfSamples);
   }
 
    //showing the result of each sample
    cout << endl << "The probibility of Each sample is given below: "<<endl;
    for(int i=0; i<6; i++){
     cout << "The probibility of occuring "<< i+1 << " is: "<<fixed
     << setprecision(3) << probibilities[i] << endl;
    }

   delete [] samples;

    return 0;
}