#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main () { 
	
	//Open file	
	ofstream outputFile;
	outputFile.open("expensereport.txt");
	
//Variables
double days, carrentals, parkingfees1, parkingfees2, privatevehicle, milesdriven, 
	allowableParking, Eparking1, Eparking2, allowableMiles, DifferenceP1, DifferenceP2;
	char ch1, ch2;

	// Ask if they rented a car
	cout << "Did you rent a car? Y or N ";
	cin >> ch1;
	
// Respond if they did rent a car, and ask for the cost 
// Then calculate savings or overages, and save to the file.
	if (ch1 =='Y') 
	{
 		 cout << "What was the car rental cost?" << endl;
		 cin >> carrentals;
		cout << "The company will reinburse you $" << carrentals << " for car rental expenses." << endl;	
		
	outputFile << "Car Rental Cost: $" << carrentals << endl;	
  cout << "What were the parking fees? " << endl;
  cin >> parkingfees1;
	allowableParking = days * 6;
		
	if (parkingfees1 < allowableParking) 
	{ 
		cout << "The company will reinburse you $" << parkingfees1 << " for parking fees." << endl;
	outputFile << "Parking Cost: $" << parkingfees1 << endl;
	DifferenceP1 = allowableParking - parkingfees1;
outputFile << "      Savings: $" << DifferenceP1 << endl;
	}
		
	if (parkingfees1 > allowableParking)
	{
		cout << "The company will reinburse you $" << allowableParking << " for parking fees." << endl;
		outputFile << "Parking Cost: $" << allowableParking << endl;
		Eparking1 = parkingfees1 - allowableParking;
outputFile << "       Overage: $" << Eparking1 << endl;
	}
	}
	
// If they did not rent a car ask if they used a private vehicle,
// Ask for the parking fees of the private vehicle
// Calculate milage reinbursement
	if (ch1 == 'N')
	{
		cout << "Was a private vehicle used? Y or N." << endl;
  		cin >> ch2;
		
	if (ch2 == 'Y') {
cout << "What were the parking fees? ";
 		cin >> parkingfees2;
   		allowableParking = days * 6;
		
 	if ( parkingfees2 > allowableParking) 
  	{
		cout << "The company will reinburse you $" << allowableParking << " for parking fees." << endl;
		outputFile << "Parking Cost: $" << allowableParking << endl;
Eparking2 = parkingfees2 - allowableParking;
		outputFile << "       Overage: $" << Eparking2 << endl;
  }
		
 	if ( parkingfees2  < allowableParking) 
  	{
		cout << "The company will reinburse you $" << parkingfees2 << " for parking fees." << endl;
	outputFile << "Parking Cost: $" << parkingfees2 << endl;
	DifferenceP2 = allowableParking - parkingfees2;
	outputFile << "      Savings: $" << DifferenceP2 << endl;
  }
cout << "How many miles were driven with the private vehicle? ";
    		cin >> milesdriven;
  		allowableMiles = milesdriven * 0.27;
	cout << "The company will reinburse you $" << allowableMiles << " for miles driven." << endl;
	outputFile << "Milage Reinbursement: $" << allowableMiles << endl;
	}
		
//If they didnt use a private vehilce move on to the next question
 	if ( ch2 == 'N') {
  		 cout << "Continue" << endl;
	}
		return 0;
}
}