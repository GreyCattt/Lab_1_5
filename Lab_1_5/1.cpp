/**
* Done by:
* Student Name: Ivan Rudiy
* Student Group: 123 
*Lab 1.5
*/
#include <iostream>
#include <cmath>
int main() 
{
	float fltR = 36.7,
		fltT = 56.2;
	int nY = 99,
		nU = 99;
	bool bRez1 = ((fltR || fltT) != (!(nY < nU)));//I studied how it works


	std::cout << bRez1 << std::endl;

	int nA = 86,
		nB = 65;
	float fltC = 75.2,
		fltD = 43.6;
	bool bRez2 = (!(nA||nB)!=(!(fltC<fltD)));//I understand
	std::cout << bRez2 << std::endl;




	return 0;
}