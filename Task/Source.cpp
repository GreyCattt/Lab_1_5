#include <iostream>
#include <cmath>
int main() 
{
	int constA = 85,
		nB = 27,
		nE = 6;
	int nC;
	int* pnC;
	pnC = &nC;
	*pnC = -16;
	bool Rez3 = ((constA ^ ~nB) + *pnC) < (1 * (nE << sizeof(short)));
		

	return 0;
}