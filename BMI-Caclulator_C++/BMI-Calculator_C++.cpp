#include <iostream>
using namespace std;
int main()
{
	double weight; 						//Hold user's weight		
	double height;						//Hold user's height

										//Program discription and get user weight and height

	cout << "This is a Body Mass Index calculator, \n\n" << "Please enter your weight in pounds, and your height in inches: \n";
	cout << "Your Weight: (in pounds): ";
	cin >> weight;
	cout << "\nYour Height: (in inches): ";
	cin >> height;

	//Calculate and display BMI

	double BMI = (weight * 703) / (height * height);

	cout << "\nYour BMI is (Weight X 703) / (height X height): " << BMI << "\n\n";

	//Display Health and Human Services Information 

	cout << "-----------------------------------------------------------------------\n";
	cout << "BMI VALUES\n\n";
	if (BMI <= 18.5) { cout << "-> "; }; cout << "Underweight: less than 18.5\n";
	if (BMI >= 18.5 && BMI <= 24.9) { cout << "-> "; };	cout << "Normal: between 18.5 and 24.9\n";
	if (BMI >= 25 && BMI <= 29.9) { cout << "-> "; };	cout << "Overweight: between 25 and 29.9\n";
	if (BMI >= 30) { cout << "-> "; };	cout << "Obese: 30 or greater";
	cout << "\n\n";
	cout << "-----------------------------------------------------------------------\n";

	//Find users BMI on scale
	if (BMI <= 18.5)						//If user's BMI is 18.5 or less, display under weight message
		cout << "You are Under weight.\n";
	if (BMI >= 18.5 && BMI <= 24.9)			//If user's BMI is between 18.5 and 24.9, display normal weight message
		cout << "You are Normal weight.\n";
	if (BMI >= 25 && BMI <= 29.9)			//If user's BMI is between 25 and 29.9, display over weight message
		cout << "You are Over wieght.\n";
	if (BMI >= 30)							//If user's BMI is 30 or greater, display obese message
		cout << "You are Obese.\n";
	cout << "\n";

	return 0;
}							//End main function
