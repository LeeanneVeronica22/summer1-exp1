#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
double box=250, side=100, prem=50, genad=25;
double tsbox, tsside, tsprem, tsgenad;
double boxsale, sidesale, premsale, genadsale;
double total;

cout << fixed << showpoint << setprecision(2);

cout << "Number of tickets sold for box: ";
cin >> tsbox;
cout << "Number of tickets sold for sideline: ";
cin >> tsside;
cout << "Number of tickets sold for premium: ";
cin >> tsprem;
cout << "Number of tickets sold for general admission: ";
cin >> tsgenad;
cout << endl;

boxsale = box*tsbox;
sidesale = side*tsside;
premsale = prem*tsprem;
genadsale = genad*tsgenad;
total = boxsale+sidesale+premsale+genadsale;

cout <<	"TICKET TYPE\t\t" << "PRICE\t" << "TICKETS SOLD\t" << "SALE PER TYPE" << endl;
cout <<	"BOX\t\t\t" << "$" << box << "\t\t"  << tsbox << "\t"  << "$" << boxsale << endl;
cout <<	"SIDELINE\t\t" << "$" << side << "\t\t"  << tsside << "\t" << "$" << sidesale<<endl;
cout <<	"PREMIUM\t\t\t" << "$" << prem << "\t\t"  << tsprem <<"\t"  << "$" << premsale << endl;
cout <<	"GENERAL ADMISSION\t" << "$" << genad << "\t\t"  << tsgenad << "\t" << "$" << genadsale <<endl<<endl;

cout << "Total Sale Amount: $" << total;

getch();
return 0;
}

