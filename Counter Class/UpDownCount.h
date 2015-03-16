/*
	Counter Class
*/

#include <iostream>
#include <Windows.h>

using namespace std;

#ifndef UPDOWNCOUNT_H
#define UPDOWNCOUNT_H

class UpDownCount
{
private:

	int start, stop, incr, decr;

public:

	UpDownCount();
	void count();
	void count(int, int, int, int);

};

#endif