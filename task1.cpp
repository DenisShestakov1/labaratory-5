#include<iostream>
#include <math.h>
#include <stdio.h>
 
void output();
void mathogidanie(int* arr);
void dispersion(int* arr, double mathogidanie);
void standardDeviation(int* arr, double mathogidanie);
void normalisation(int* arr, double mathogidanie);

int main() {

	output();

	double arr[10];
	for (int count = 0; count < 10; count++) {

		double user_input;
		std::cout << "enter number - ";
		std::cin >> user_input;
		arr[count] = user_input;
	}
}

void output() {
	const int arrLength = 10;
	int arrayNumbers[arrLength];

	for (int i = 0; i < arrLength; i++) {
		std::cin >> arrayNumbers[i];

	}
	mathogidanie(arrayNumbers);


}
 void mathogidanie(int*arr) {
	
}


 void dispersion(int* arr, double mathogidanie) {
	 double dispersion = 0;
	 for (int i = 0; i < 10; i++) {
		 dispersion = pow(arr[i] - mathogidanie, 2);

	 }
	 

 }
 void standardDeviation(int* arr, double mathogidanie) {
	 double deviation = 0;
	 for (int i = 0; i < 10; i++) {
		 deviation += pow(arr[i] - mathogidanie, 2);
	 }
	 deviation = sqrt(deviation / 10);
	 std::cout << '\n'<< "Deviation: " << deviation << '\n';
 }
 void normalisation(int* arr, double mathogidanie) {
	 double normalisation;
	 double max = arr[0];
	 double min = arr[0];
	 for (int i = 0; i < 10; i++) {
		 if (max < arr[i]) max = arr[i];
		 if (min > arr[i]) min = arr[i];

	 }
	 std::cout << '\n' << "Normalisation: " << normalisation << '\n';
 }
 void threesigm(double mathogidanie, double dispersion) {
	 double choice;
	
	 std::cout << "enter number - ";
	 std::cin >> choice;

	 if (sigma_up > choice && choice > sigma_dawn) {
		 std::cout << "this number falls under the 3 sigma rule";
	 }
	 else {
		 std::cout << "this number does not fall under the 3 sigma rule";

	 }
 }
