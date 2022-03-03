#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    double dist_km, dist_mtr, dist_ft, dist_inch, dist_cm;

    cout << "Enter the Distance between two cities in km: ";
    cin >> dist_km;

    dist_mtr = dist_km * 1000.0;
    dist_ft = dist_mtr *  1.0/0.3048f ; // 1 foot is equal to 0.3048 meter
    dist_cm = dist_mtr * 100.0;
    dist_inch = dist_cm *  1.0/2.54  ; //1 inch is equal to 2.54cm
    cout << "The Distances between two cities are: " << endl;
    cout << "In meters: " << endl << dist_mtr << "." << endl << endl;
    cout << "In feet: " << endl << dist_ft << "." << endl << endl;
    cout << "In inches: " << endl << dist_inch << "." << endl << endl;
    cout << "In centimeters: " << endl << dist_cm << "." << endl << endl;
    getch();
    return 0;
}
