/*
	UpDownCount Definition
*/

#include "UpDownCount.h"

// constructor
UpDownCount::UpDownCount()
{
	start = 0;
	stop = 255;
	incr = 1;
	decr = 1;
}

// count up and down
void UpDownCount::count()
{
	cout << endl << endl << " Counting up"; Sleep(500);

	for (int i = start; i <= stop; i+=incr)
	{
		cout << endl << "  " << i; Sleep(70);
	} Sleep(500);

	system("cls");

	cout << endl << endl << " Counting down"; Sleep(500);

	for (int i = stop; i >= start; i-=decr)
	{
		cout << endl << "  " << i; Sleep(70);
	}
	cout << endl << endl;
}

void UpDownCount::count(int strt, int stp, int incrm, int dcrm)
{
	start = strt;
	stop = stp;
	incr = incrm;
	decr = dcrm;
	count();
}
