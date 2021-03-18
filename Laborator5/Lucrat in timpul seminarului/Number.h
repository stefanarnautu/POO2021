#pragma once
class Number
{
	int baza;
	char* valoare_tip_char;

public:
	Number(const char* value, int base); // where base is between 2 and 16
	Number(const Number& ex); //copy constructor
	Number(const Number&& ex); //move constructor
	//~Number();
	int operator[](int index);
	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
    int  GetBase(); 
	
	Number& operator=(const Number&& ex);


	friend int operator+(Number nr, int valoare);
	friend int operator-(Number nr, int valoare);
};

