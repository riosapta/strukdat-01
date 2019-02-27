/**
* Author : Rio Sapta Samudera
* NPM : 140810180030
* Deskripsi : Fizz Buzz
* Tahun : 2019
*/

#include "pch.h"
#include <iostream>
using namespace std;

void fizzbuzz() {
	for (int i = 1; i < 101; i++) {
		if (i % 3 == 0 && i % 5 == 0) cout << "FizzBuzz\n";
		else if (i % 3 == 0) cout << "Fizz\n";
		else if (i % 5 == 0) cout << "Buzz\n";
		else cout << i << endl;
	}
}

int main()
{
	fizzbuzz();
}


