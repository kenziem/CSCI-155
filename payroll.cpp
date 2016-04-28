// This progam calculates the user's pay. 
#include <iostream>
using namespace std;

int main() { 
//setting up variables
double hours, rate, pay, weekly, A;
  A = 7;

// Get the number of hours worked. 
cout << "How many hours do you work in an average day? "; 
cin >> hours; 

// Get the hourly pay rate. 
cout << "How much do you get paid per hour? "; 
cin >> rate; 

// Calculate the pay. 
pay = hours * rate;
weekly = pay * A;

// Display the pay. 
cout << "You have earned $" << pay << " in an average day" << endl;
  cout << "You have earned $" << weekly << " in a week" << endl;
  cout << "Good job!" << endl;
return 0; 
}