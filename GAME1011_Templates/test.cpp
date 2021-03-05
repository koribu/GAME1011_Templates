
#include "SimpleVector.h"
#include "SearchVect.h"
#include "SortableVector.h"

int main()
{
	SimpleVector<double> simpList(8);
	SearchableVector<float> searchList(8);
	SortableVector<int> SortableList(15);
	for(int i = 0; i<simpList.size();i++)
	{
		simpList[i] = i * 3.14;
	}
	for (int i = 0; i < searchList.size(); i++)
	{
		searchList[i] = i * 2.05;
	}
	
	for (int i = 0; i < SortableList.size(); ++i)
	{
		SortableList[i] = rand() % 500;
	}
	cout << "Items of the Simple Vector list are: " << endl;
	simpList.print();
	cout << "Now i call the popBack function to delete last number and print: " << endl;
	simpList.popBack();
	simpList.print();
	cout << "Now i call the pushBack function to add number 13.13 and print: " << endl;
	simpList.pushBack(13.13);
	simpList.print();
	cout << endl;

	cout << "Items of the Searchable Vector list are: " << endl;
	searchList.print();
	cout << "Item of 10.25 is in subscription of "<<searchList.findItem(10.25)<<endl;
	cout << endl;
	
	cout << "Items of the Sortable Vector list are: " << endl;
	SortableList.print();
	cout << "Now i call the sortVector function to sort items and print: " << endl;
	SortableList.sortVector();
	SortableList.print();
	
}