/*
	Main function testing UpDownCounter Class
*/

#include <iostream>
#include <Windows.h>

#include "UpDownCount.h"

using namespace std;

int main()
{
	UpDownCount counting;
	counting.count();

	system("pause");
	return 0;
}