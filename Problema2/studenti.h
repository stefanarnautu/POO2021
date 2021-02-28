#pragma once
class studenti
{
private:
	char nume[20];
	float notaeng;
	float notamate;
	float notaist;
	float medie;

public:
	studenti();
	void setnotaeng(float nota);
	void setnotamate(float nota);
	void setnotaist(float nota);
	void setmedie(float nota1, float nota2, float nota3);
	void setnume(char* nume);
	float getnotaeng();
	float getnotamate();
	float getnotaist();
	float getmedie();
	char* getnume();
	
};

