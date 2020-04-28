#pragma once

#include "Unit1.h"

#include "stdio.h"
#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {

	// For Char
	char ch1[] = {'N', '*'};
	char ch2[] = {'A'};

	int sizeCh1 = sizeof(ch1)/sizeof(char);
	int sizeCh2 = sizeof(ch2)/sizeof(char);

	cout << "sizeCh1 " << sizeCh1 << "\n";
	cout << "sizeCh1 " << sizeCh2 << "\n";

	TMyCharString strCh1 = TMyCharString(ch1, sizeCh1);
	TMyCharString strCh2 = TMyCharString(ch2, sizeCh2);

	TMyCharString strCh = strCh1 + strCh2;

	cout << "\n\n Input Char \n";
	for (int i = 0; i < strCh.getSize(); i++) {
		cout << strCh[i];
	}

	// For Double
	double arr1[] = { 12.3, 24, 31 };
	double arr2[] = { 4, 5 };
	
	TMyDoubleString str1 = TMyDoubleString(arr1, sizeof(arr1) / sizeof(double));
	TMyDoubleString str2 = TMyDoubleString(arr2, sizeof(arr2) / sizeof(double));

	TMyDoubleString str = str1 + str2;


	cout << "\n\n Input Double \n";
	for (int i = 0; i < str.getSize(); i++) {
		cout << (double)str[i];
	}

	cout << "\n";
	system("PAUSE");
}

