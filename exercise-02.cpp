/**
* Author : Rio Sapta Samudera
* NPM : 140810180030
* Deskripsi : celcius to fahrenheit
* Tahun : 2019
*/
#include "pch.h"
#include <iostream>
using namespace std;

float cel2fah(float temp) {
	return temp * 9 / 5 + 32;
}

int main() {
	int celcius = 9;
	float fahrenheit = cel2fah(celcius);
	cout << "temp is " << fahrenheit;
}