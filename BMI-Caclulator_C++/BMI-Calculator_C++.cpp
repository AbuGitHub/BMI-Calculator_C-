/*  Abuzar Noorali
Assignment: 1, Ch 2
Due Date: 09/06/2016
Purpose/Description: This program calculates the BMI of the user based on their weight and height
*/
#include <iostream>
using namespace std;
int main()
{
	double weight;
	double height;
	//Program discription and get user weight and height
	cout << "This is a Body Mass Index calculator, \n" << "Please enter your weight in pounds, and your height in inches: \n";
	cin >> weight >> height;
	//Calculate and display BMI
	double BMI = (weight * 703) / (height * height);
	cout << "BMI: " << BMI << "\n\n";
	//Display Health and Human Services Information 
	cout << "BMI VALUES\n" << "Underweight: less than 18.5 \n" << "Normal: between 18.5 and 24.9\n" << "Overweight: between 25 and 29.9\n" << "Obese: 30 or greater";
	cout << "\n\n";
	if (BMI <= 18.5)
		cout << "You are Under weight.\n";
	if (BMI >= 18.5 && BMI <= 24.9)
		cout << "You are Normal weight.\n";
	if (BMI >= 25 && BMI <= 29.9)
		cout << "You are Over wieght.\n";
	if (BMI >= 30)
		cout << "You are Obese.\n";
	cout << "\n";
	return 0;
}