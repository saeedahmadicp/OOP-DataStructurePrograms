#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int original_cost, profit, cost_per_atom;

    cout << "Enter the total selling price of 15 items: ";
    cin >> original_cost;
    cout << "Enter the profit earned on selling 15 items: ";
    cin >> profit;

    cost_per_atom = (original_cost+profit)/15.0f;

    cout << "The cost of one item will be: " << cost_per_atom << "." << endl;
    getch();
    return 0;
}
