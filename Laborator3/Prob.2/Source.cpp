#include <iostream>
#include "Canvas.h"

using namespace std;

int main()
{
	Canvas m(40,40);
	m.Clear();
	//m.Printt();
	m.DrawCircle(20, 20, 15, 'a');
	m.Printt();
	m.FillCircle(20, 20, 15, 'a');
	m.Printt();
	m.DrawRect(10, 16, 18,30 ,'b');
	m.Printt();
    m.FillRect(10, 16, 18, 30, 'b');
	m.Printt();
	m.SetPoint(10, 20, 'H');
	m.Printt();
	m.DrawLine(5, 5, 30, 10, 'a');
	m.Printt();
	system("pause");
	return 0;
}