#include "SimpleVector.h"
#include "SearchVect.h"

int main()
{
	const int SIZE = 10;

	SimpleVector<int> intTable(SIZE);
	SearchableVector<double> doubleTable(SIZE);

	for (int i = 0; i < SIZE; ++i)
	{
		intTable[i] = (i * 2);
		doubleTable[i] = (i * 2.14);
	}

	cout<<doubleTable.findItem(6.42)<<"***";

	intTable.print();
	doubleTable.print();
}