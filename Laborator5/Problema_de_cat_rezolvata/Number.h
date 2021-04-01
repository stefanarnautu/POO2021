#pragma once
class Number
{
	int baza;
	char* valoare_tip_char;

public:
	Number(const char* value, int base); // where base is between 2 and 16
	Number(const Number& ex); //copy constructor
	Number(const Number&& ex); //move constructor
	Number();
	//~Number();
	
	int operator[](int index);
	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount();
    int  GetBase(); 
	
	Number& operator=(const Number&& ex);
	Number operator+(Number ex);
	Number operator-(Number ex);

	friend Number operator+(Number nr, int valoare);
	friend Number operator-(Number nr, int valoare);

	friend int trs_baza(char* valoare,int baza);
	
	bool operator<(Number ex);
	bool operator>(Number ex);
	bool operator<=(Number ex);
	bool operator>=(Number ex);
	bool operator==(Number ex);
	bool operator<(int numar);
	bool operator>(int numar);
	bool operator<=(int numar);
	bool operator>=(int numar);
	bool operator==(int numar);
};

