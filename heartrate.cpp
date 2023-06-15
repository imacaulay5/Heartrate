#include <iostream>
#define HEARTRATE 220

int main( void )
{
	using namespace std;

	// Initialize years, months, and days variable
	int years;
	int months;
	int days;

	printf("Enter your age in years, months, and days, respectively, separated by a space. Press enter when done.\n");

	// Get values for years, months, and days from user
	cin >> years >> months >> days;

	// Initialize done variable
	bool done;

	// Check input for years is valid
	do
	{
		done = 1;

		if(!(years > 0))
		{
			cout << "Please enter valid positive year value.\n";
			cin >> years;
			if (years > 0)
			{
				done = 1;
			}
			else
			{
				done = 0;
			}
		}
	}
	while(!done);

	// Check input for months is valid
	do
	{
		done = 1;

		if(!(months < 12 && months > 0))
		{
			cout << "Please enter valid month value between 0-12.\n";
			cin >> months;
			if (months < 12 && months > 0)
			{
				done = 1;
			}
			else
			{
				done = 0;
			}
		}
	}
	while(!done);

	// Check inpurt for days is valid
	do
	{
		done = 1;

		if(!(days < 365 && days > 0))
		{
			cout << "Please enter valid day value between 0-365.\n";
			cin >> days;
			if (days < 365 && days > 0)
			{
				done = 1;
			}
			else
			{
				done = 0;
			}
		}
	}
	while(!done);

	// Calculate specific age
	float age = years + (months/12) + (days/365);

	// Calculates maximum heartrate based on users age
	float max_heartrate = (float)HEARTRATE - age;

	cout << "Max Heartrate = " << max_heartrate << "bpm\nTarget 50 = " << max_heartrate*.5 <<
			"bpm\nTarget 70 = " << max_heartrate*.7 << "bpm\nTarget 90 = " << max_heartrate*.9
			<< "bpm\n";

	return 0;
}