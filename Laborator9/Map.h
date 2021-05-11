#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

template <class T1,class T2>
class Map
{
	int nr, dimensiune;
public:	
	struct Nod
	{
		T1 valoare;
		T2 sir;
		int index;
	}*nod;
	

	Map()
	{
		this->dimensiune = 10;
		this->nr = 0;
		nod = (Nod*)malloc(this->dimensiune * sizeof(Nod));
	}
	int Nr()
	{
		return this->nr;
	}
	void Clear()
	{
		delete[] nod;
		this->nr = 0;
		this->dimensiune = 0;
	}
	Nod* begin()
	{
		return &nod[0];
	}
	Nod* end()
	{
		return &nod[this->nr];
	}
	T2& operator[](T1 val)
	{
		for (int i = 0; i < this->nr; i++)
			if (nod[i].valoare == val)
				return nod[i].sir;

		nod[nr].valoare = val;
		nod[nr].index = nr;
		nr++;
		return nod[nr - 1].sir;
	}
	bool Get(const T1& val, T2& value)
	{
		for (int i = 0; i < this->nr; i++)
			if (nod[i].valoare == val)
			{
				value = nod[i].sir;
				return true;
			}
		return false;
	}
	void Set(T1  key, T2 val)
	{
		int ok = 0;
		for (int i = 0; i < nr; i++)
		{
			if (nod[i].valoare == key)
			{
				ok = 1;
				nod[i].sir = val;
			}
		}
		if (ok == 0)
		{
			nod[nr].valoare = key;
			nod[nr].sir = val;
			nod[nr].index = nr;
			nr++;
		}
	}
};

