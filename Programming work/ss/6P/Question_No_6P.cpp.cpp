#include <iostream>
#include <conio.h>

using namespace std;

int main()
{                              //per= percentage
    float total_population,men_per, women_per, literate_men_per, literate_women_per, total_literacy_per, illiterate_women,illiterate_men;
    //Initialization
    total_population = 80000.0f;
    men_per = 52.0f/100.0f;
    women_per = 48.0f/100.0f;
    literate_men_per = 35.0f/100.0f;
    literate_women_per = 13.0f/100.0f;
    total_literacy_per = 48.0f/100.0f;

    illiterate_men = (men_per-literate_men_per)*total_population;
    illiterate_women = (women_per-literate_women_per)*total_population;

    cout << "The numbers of illiterate Men are: " << illiterate_men << "."
         << endl << "while The numbers of illiterate Women are: " << illiterate_women <<"."<< endl;
         getch();
    return 0;
}
