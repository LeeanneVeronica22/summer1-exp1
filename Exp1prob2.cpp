#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
double mass, density, volume;

cout << fixed << showpoint << setprecision(2);

cout << "Mass (in grams): ";
cin >> mass;


cout << "Density (in g/cm^3): ";
cin >> density;


volume = mass/(4*density);



cout << "\nComputed Volume: " << volume << " cm^3";

getch();
return 0;
}
