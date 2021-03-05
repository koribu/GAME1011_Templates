#pragma once
#include "SimpleVector.h"

template <class T>
class SearchableVector :public SimpleVector<T>
{
public:
	SearchableVector(int s) :SimpleVector<T>(s){ }
	SearchableVector(SearchableVector& obj) :SimpleVector<T>(obj) { } //copy constructor
	SearchableVector(SimpleVector<T>& obj): SimpleVector<T>(obj){ }
	int findItem(T);
	
};

//template <class T>
//SearchableVector<T>::SearchableVector(SearchableVector& obj) : SimpleVector<T>(obj){ }

	
template <class T>
int SearchableVector<T>::findItem(T item)
{
	//for (int i = 0; i < this->size();i++)
	//{
	//	if(this->operator[](i) == item)
	//	{
	//		return i; 
	//	}
	//}
	//return -1;
	int sub = this->size() / 2 ,min =0,max = this->size() / 2;
	while(true)
	{
		
		if(this->operator[](sub) == item)
		{
			return sub;
		}
		if(this->operator[](sub)<item)
		{
			min = sub;
			sub = (sub + max) / 2;
		}
		else if(this->operator[](sub) > item)
		{
			max = sub;
			sub = (sub + min) / 2;	
		}
		if(min == max)
		{
			return -1;
		}

	}
}

