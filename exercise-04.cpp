/**
* Author : Rio Sapta Samudera
* NPM : 140810180030
* Deskripsi : array
* Tahun : 2019
*/
#include "pch.h"
#include <iostream>
using namespace std;

float average(int a[]) {
	float x = 0, y;
	for (int i = 0; i < 10; i++) {
		x += a[i];
	}
	y = x / 10;
	return y;
}

void input(int a[]) {
	for (int i = 0; i < 10; i++) {
		cout << "Masukkan angka: "; cin >> a[i];
	}
}
int main() {
	int nums[10];
	input(nums);
	cout << "the average is " << average(nums);
}