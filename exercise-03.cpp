/**
* Author : Rio Sapta Samudera
* NPM : 140810180030
* Deskripsi : swap
* Tahun : 2019
*/
#include "pch.h"
#include <iostream>
using namespace std;


void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 5;
	int y = 4;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	swap(x, y);
	cout << "After swap" << endl;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
}