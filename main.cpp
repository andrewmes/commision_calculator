#include <iostream>

using namespace std;

int hourlyPay(int pitches, int hours) {
	int hourly = 20;
	int pitchPay = 20;
	int actualPay = (hourly * hours) + (pitchPay * pitches);

	return actualPay;
}

int comPay(int pitches){
	int pitchPay = 0;

	if (pitches > 0 && pitches < 3)
	{
		pitchPay = pitches * 55;
	}
	else if (pitches > 2 && pitches < 6)
	{
		pitchPay = pitches * 90;
	}
	else if (pitches > 5 && pitches < 8)
	{
		pitchPay = pitches * 120;
	}
	else if (pitches >= 8)
	{
		pitchPay = pitches * 140;
	}

	return pitchPay;
}

int main() {
	int userInput = 1;

	while(userInput == 1)
	{
		int hoursWorked = 0;
		int pitchGoal = 0;
		char training = 'n';

		cout << "please enter hours you'll work" << endl;
		cin >> hoursWorked;

		cout << "what is your goal for pitches this week?" << endl;
		cin >> pitchGoal;

		if (hourlyPay(pitchGoal, hoursWorked) > comPay(pitchGoal))
		{
			cout << "You'll get the most from Hourly Pay with $" << hourlyPay(pitchGoal, hoursWorked) << endl;
		}
		else if (hourlyPay(pitchGoal, hoursWorked) < comPay(pitchGoal))
		{
			cout << "You'll get the most from Pitch Pay with $" << comPay(pitchGoal) << endl;
		}
		else if (hourlyPay(pitchGoal, hoursWorked) == comPay(pitchGoal))
		{
			cout << "They're the same. $" << comPay(pitchGoal) << endl;
		}
		cout << "Do you want to do Another Calculation? Enter '1' if so..." << endl;
		cin >> userInput;
	}

}