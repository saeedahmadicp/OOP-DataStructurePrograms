#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float weight_on_moon, weight_on_earth;

    cout << "Enter the weight on Earth: ";
    cin >> weight_on_earth;

    //As the gravity of moon is 1/6 that of earth so the weight will also 1/6 that of Earth
    weight_on_moon = weight_on_earth/6.0f;

    cout << endl << "The Equivalent weight on moon for " << weight_on_earth << " newtons on Earth is: " << weight_on_moon
         << " newtons." << endl<< endl;
        getch();
    return 0;
}
