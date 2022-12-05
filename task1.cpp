#include<iostream>
#include <math.h>
#include <stdio.h>
 
void outputArray();
void mathogidanie(int* arr);
void dispersion(int* arr, double mathogidanie);
void standardDeviation(int* arr, double mathogidanie);
void normalisation(int* arr, double mathogidanie);

int main() {
	outputArray();
}

void outputArray() {
	
	int arrayNumbers[10];

	for (int i = 0; i < 10; i++) {
		std::cin >> arrayNumbers[i];

	}
	mathogidanie(arrayNumbers);


}
 void mathogidanie(int*arr) {
	double mathogidanie = 0;
	for (int i = 0; i < 10; i++) {
		mathogidanie += arr[i];
	}
	mathogidanie /= 10;
	std::cout << "mathogidanie " << mathogidanie << '/n';
	dispersion(arr, mathogidanie);
	standardDeviation(arr, mathogidanie);
	normalisation(arr, mathogidanie);
}

 void dispersion(int* arr, double mathogidanie) {
	 double dispersion = 0;
	 for (int i = 0; i < 10; i++) {
		 dispersion = pow(arr[i] - mathogidanie, 2);

	 }
	 dispersion = sqrt(dispersion / 9);
	 std::cout << '\n' << "dispersion " << dispersion << '/n';

 }
 void standardDeviation(int* arr, double mathExpectation) {
	 double deviation = 0;
	 for (int i = 0; i < 10; i++) {
		 deviation += pow(arr[i] - mathExpectation, 2);
	 }
	 deviation = sqrt(deviation / 10);
	 std::cout << '\n'<< "Deviation: " << deviation << '\n';
 }
 void normalisation(int* arr, double mathExpectation) {
	 double normalisation;
	 double max = arr[0];
	 double min = arr[0];
	 for (int i = 0; i < 10; i++) {
		 if (max < arr[i]) max = arr[i];
		 if (min > arr[i]) min = arr[i];

	 }
	 normalisation = (mathExpectation - min) / (max - min);
	 std::cout << '\n' << "Normalisation: " << normalisation;
 }
