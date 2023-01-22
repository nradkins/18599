// the purpose of this code is to create an app to simulate a basic concept in gas dynamics called mach number.
// The mach number is defined as the ratio of the velocity of something relative to the local acoustic velocity.
// For calculations on earth, you would use the local speed of sound in air as your reference velocity. This 
// calculator should take in user input as to the desired speed, then output a string with the mach number given 
// in it. Finally, the mach number should be defined as a variable.

#include <iostream>
using namespace std;

int main()
{
	double MachNumber;
	double velocity;
	string object;
	const double speed_of_sound = 343;
	
	cout << "Enter in the velocity of your object in meters per second: " << endl;
	cout << "" << endl;
	cin >> velocity;
	cout << "" << endl;
	cout << "What object are you measuring the mach number of? " << endl;
	cout << "" << endl;
	cin >> object;
	cout << "" << endl;

	MachNumber = velocity / speed_of_sound;
	cout << "Results:" << endl;
	cout << "" << endl;
	cout << "The velocity of the " << object << " is " << velocity << " meters per second" << endl;
	cout << "The mach number of the " << object << " for your given velocity is " << MachNumber << endl;
	return 0;
}