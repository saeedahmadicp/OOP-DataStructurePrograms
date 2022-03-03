#include <iostream>
#include <conio.h>

#define PI (22.0f/7.0f)
using namespace std;

int main()
{
    float length, width, radius, area_circle, area_rectangle, circumference, perimeter;

    cout << "Enter the length of Rectangle: ";
    cin >> length;
    cout << "Enter the width of Rectangle: ";
    cin >> width;
    cout << "Enter the radius of Circle: ";
    cin >> radius;

    area_rectangle = (length * width);
    perimeter = 2* (length + width);
    area_circle =  PI * (radius * radius);
    circumference = 2 * PI * (radius);

    cout << endl << endl<< "\t*****RECTANGLE*****" << endl;
    cout << "Area = " << area_rectangle << endl << "Perimeter = "  << perimeter << endl << endl;
    cout << endl << endl<< "\t*****CIRCLE*****" <<endl;
    cout << "Area = " << area_circle << endl << "Circumference = "  <<circumference << endl << endl;
    getch();
    return 0;
}
