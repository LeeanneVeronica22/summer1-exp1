#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
double netbal, payment, d1, d2, averagedb;
double interest, intrate;

cout << fixed << showpoint << setprecision(3);

cout << "Balance shown in the bill: ";
cin >> netbal;
cout << "Payment made: ";
cin >> payment;
cout << "Number of days in the billing cycle: ";
cin >> d1;
cout << "Number of days payment is made before billing cycle: ";
cin >> d2;
cout << "Interest rate per month: " ;
cin >> intrate;

averagedb= (netbal*d1 -payment*d2)/d1;
interest = (averagedb*intrate);


cout << "\nThe amount of your interest is :" << interest;

getch();
return 0;
}
