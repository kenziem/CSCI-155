// Indianapolis 500
#include <iostream>
using namespace std;

int main() 
{
//setting up variables
  double A, miles, hours, mph;
  A = 2.5;
  
// Get the number of laps.
  cout << "How many laps did the Indy car drive?";
  cin >> miles;
  
// Get the number of hours it took to drive the amount of laps in previous question.
  cout << "How long did it take in hours to drive the amount of laps answered in the previous question?";
  cin >> hours; 

// Calculate the mph of the Indy car.
  mph = miles * A / hours;

// Display the rate in mph.
  cout << "The Indy car drove mph" << mph << endl;
return 0;
}