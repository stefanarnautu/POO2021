#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <map>

using namespace std;
class Compare {
public:
	bool operator() (pair<string, int> p1, pair<string, int> p2) {
		//if (p1.second < p2.second)
		//	return true;
		//if (p1.second > p2.second)
			//return false;
		//if (p1.first < p2.first)
			//return false;
		return true;
	}
};
int main()
{
	string mys;
	ifstream myF("stringul.txt");
	if (!myF)
	{
		printf("Nu pot sa deschid\n");
		return 0;
	}
	if (!getline(myF,mys))
		printf("erroare\n");


	map<string, int> myM;
	printf("Sirul meu: %s\n", mys.c_str());

	string aux;
	int j = 0;
	int a = 0; 
	aux="";
	//printf("%s\n", aux);
	
	for (int i = 0; i < mys.size(); i++)
	{
		if (mys[i] != ' ' and mys[i] != '.' and mys[i] != ',')
		{
			if(mys[i]>='A' and mys[i]<='Z')
			 {
				mys[i] += 32;
				aux += mys[i];
			 }
			else	aux += mys[i];
		}
		else {
			if (aux != "")
			{
				if (myM.count(aux) != 0)
				{
					myM[aux] += 1;
				}
				else myM[aux] = 1;

				//printf("%s\n", aux.c_str());
			}
			aux="";
			a = 0;
		}
    }

	for (auto mapIterator = myM.begin(); mapIterator != myM.end(); mapIterator++) 
	{
		printf(" \"%s\" : %d\n", mapIterator->first.c_str(), mapIterator->second);
	}

	priority_queue<pair<string, int>, vector<pair<string, int>>/*, Compare*/> myQ;
	for (auto mapIterator = myM.begin(); mapIterator != myM.end(); mapIterator++) {
		myQ.push(pair<const char*, int>(mapIterator->first.c_str(), mapIterator->second));
	}

	while (!myQ.empty())
	{
		printf("%s => %d\n", myQ.top().first.c_str(), myQ.top().second);
		myQ.pop();
	}
	system("pause");
	return 0;
}