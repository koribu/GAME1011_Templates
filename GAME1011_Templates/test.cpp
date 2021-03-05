#include "SimpleVector.h"
#include "SearchVect.h"
#include "SortableVector.h"

int main()
{
	SortableVector<int> list(20);

	for (int i = 0; i < list.size(); ++i)
	{
		list[i] = rand() % 500;
	}

	list.print();
	list.sortVector();
	list.print();
	
}