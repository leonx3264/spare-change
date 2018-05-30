/*
Author: Leon Vargas 
--Takes change and converts to dollar--
*/

#include <iostream>
using namespace std;

int main(void)
{
	//local declarations 
	float totalAmnt(int q, int d, int n, int p);
	void display(int q, int d, int n, int p, float c);
	
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	float cash;
	
	//input quarters
	cout << "please enter number of quarters: ";
	cin >> quarters;
	
	//input dimes
	cout << "please enter the number of dimes: ";
	cin >> dimes;
	
	//input nickels
	cout << "please enter the number of nickels: ";
	cin >> nickels;
	
	//input pennies
	cout << "please enter the number of pennies: ";
	cin >> pennies;
	
	cash = totalAmnt(quarters, dimes, nickels, pennies);
	display(quarters, dimes, nickels, pennies, cash);
	
	//end
	return(0);
}

//total amount function 
float totalAmnt(int q, int d, int n, int p)
{
	float quarters = (q * 0.25);
	float dimes = (d * 0.10);
	float nickels = (n * 0.05);
	float pennies = (p * 0.01);
	float dollars = (quarters + dimes + nickels + pennies);
	
	return(dollars);
}

//display function
void display(int q, int d, int n, int p, float c)
{
	cout << "\nquarters: " << q;
	cout << "\ndimes: " << d;
	cout << "\nnickels: " << n;
	cout << "\npennies: " << p;
	cout << "\ntotal cash: $" << c;
	
	return;
}
