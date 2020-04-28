#include "Unit1.h"
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

/***************************DOUBLE************************************/

// Конструктор принимающий размерность
TMyDoubleString::TMyDoubleString(int newSize) {
	setSize(newSize);
}

// Конструктор принимающий ?указатель на числа? и размерность
TMyDoubleString::TMyDoubleString(double* str, int len) {
	setSize(len);
	for (int i = 0; i < len; i++) {
		setChar(i, str[i]);
	}
}

// Получить размерность массива 
int TMyDoubleString::getSize() {
	return this->elems.size();
}

// Установить размерность массива 
void TMyDoubleString::setSize(int newSize) {
	this->elems.resize(newSize);
}

// Установить на конкретную позицию, конкретный символ
void TMyDoubleString::setChar(int pos, char ch) {
	cout << ch << "\n";
	this->elems[pos] = (double)ch;
	cout << (double)ch << "\n";
}

// Вернуть элемента на конкретной позиции в формате char
char TMyDoubleString::operator[](int i) {
	return (char)this->elems[i];
}

void slozhenie(TMyString& ret, TMyString& str1, TMyString& str2) {
	for (int i = 0; i < str1.getSize(); i++) {
		ret.setChar(i, str1[i]);
	}
	for (int i = 0; i < str2.getSize(); i++) {
		ret.setChar(str1.getSize() + i, str2[i]);
	}
}

TMyDoubleString operator+(TMyDoubleString& str1, TMyDoubleString& str2) {
	// Экземляр класса, большое число. 1 + 2 = 12
	TMyDoubleString ret(str1.getSize() + str2.getSize());
	slozhenie(ret, str1, str2);
	return ret;
}


// Деструктор 
TMyDoubleString::~TMyDoubleString() {
	this->elems.clear();
}


/***************************CHAR************************************/

TMyCharString::TMyCharString(int newSize)
{
	setSize(newSize);
}

TMyCharString::TMyCharString()
{
	setSize(0);
}

TMyCharString::TMyCharString(char* str)
{
	int len = strlen(str);
	cout << "sizeChar: " << len << "\n";
	setSize(len);
	for (int i = 0; i < len; i++) {
		setChar(i, str[i]);
	}
}

TMyCharString::TMyCharString(char* str, int newSize)
{
	cout << "sizeChar: " << newSize << "\n";
	setSize(newSize);
	for (int i = 0; i < newSize; i++) {
		setChar(i, str[i]);
	}
}

TMyCharString::~TMyCharString()
{
	this->elems.clear();
}

char TMyCharString::operator[](int i) {
	return this->elems[i];
}

int TMyCharString::getSize() {
	return this->elems.size();
}

void TMyCharString::setSize(int newSize) {
	this->elems.resize(newSize);
}

void TMyCharString::setChar(int pos, char ch) {
	this->elems[pos] = ch;
	cout << ch << "\n";
}

TMyCharString operator+(TMyCharString& str1, TMyCharString& str2) {
	TMyCharString ret(str1.getSize() + str2.getSize());
	slozhenie(ret, str1, str2);
	return ret;
}















/////////////////////
//template<class T>
//TTemplateString<T>::TTemplateString(int newSize)
//{
//	setSize(newSize);
//}
//
//template<class T>
//TTemplateString<T>::~TTemplateString()
//{
//	this->elems.clear();
//}
//
//template<class T>
//T& TTemplateString<T>::operator[](int i) {
//	return this->elems[i];
//}
//
//template<class T>
//unsigned int TTemplateString<T>::getSize() {
//	return this->elems.size();
//}
//
//template<class T>
//void TTemplateString<T>::setSize(int newSize) {
//	return this->elems.resize(newSize);
//}
