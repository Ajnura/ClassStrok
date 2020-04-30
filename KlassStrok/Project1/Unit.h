#pragma once

#include<vector>

using namespace std;

/*
* ���������� � ������� �����������.
*/

class TMyString {
public:
	TMyString() {};
	virtual ~TMyString() {};
	virtual int getSize() = 0; // �������� ����������� �������
	virtual void setSize(int newSize) = 0; // ���������� ����������� �������
	virtual void setChar(int pos, char ch) = 0; // ���������� ������ �� ������� �������
	virtual char operator[](int i) = 0;
};

class TMyDoubleString : public TMyString {
public:
	TMyDoubleString(int newSize);
	TMyDoubleString(double* str, int len);
	virtual ~TMyDoubleString();

	int getSize();
	void setSize(int newSize);
	void setChar(int pos, char ch);
	char operator[](int i);
	friend TMyDoubleString operator+(TMyDoubleString& str1, TMyDoubleString& str2);
protected:
	vector<double> elems;
};

class TMyCharString : public TMyString {
public:
	TMyCharString();
	TMyCharString(int newSize);
	TMyCharString(char* str);
	TMyCharString(char* str, int newSize);
	virtual ~TMyCharString();

	int getSize();
	void setSize(int newSize);
	void setChar(int pos, char ch);
	char operator[](int i);
	friend TMyCharString operator+(TMyCharString& str1, TMyCharString& str2);
protected:
	vector<char> elems;
};


// =================================================================================================




class Unit1
{

};
