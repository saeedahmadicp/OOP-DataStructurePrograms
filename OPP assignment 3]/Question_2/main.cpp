#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{

    system("Color 3f");
    int num, max, min;
    float A_mean, H_mean, sum=0, product=1,sum_of_reciprocal=0;
    double  G_mean;
    cout << "Enter total numbers to be entered: ";
    cin >> num;
    int a[num];
    cout << "Enter the numbers: ";
    for(int i=0; i<num; i++){
    cin >> a[i];
    sum+=a[i];
    product*=a[i];
    sum_of_reciprocal+=1.0/static_cast<float>(a[i]);
    }
    A_mean = sum/static_cast<float>(num);
    H_mean = static_cast<float>(num)/sum_of_reciprocal;
    G_mean = pow(static_cast<double>(product), 1.0/static_cast<double>(num));

    min = a[0];
    max = a[0];
    for(int i=1; i<num; i++){
     if(max < a[i]) max = a[i];
     if(min > a[i]) min = a[i];
    }
    cout << "The sum is: "<< sum << endl
         << "The Arithmetic mean is: " << A_mean  << endl
         << "The Geometric mean is: " << G_mean << endl
         << "The Harmonic mean is: " << H_mean << endl
         << "The minimum is; " << min << endl
         << "The maximum is: " << max << endl;

    return 0;
}
