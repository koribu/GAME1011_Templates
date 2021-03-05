#pragma once
#include "SimpleVector.h"

template<class T>
class SortableVector : public SimpleVector<T>
{
public:
	SortableVector(int s) : SimpleVector<T>(s){ }
	SortableVector(SortableVector& obj) :SimpleVector<T>(obj){ }

	void sortVector();
	
};

template <class T>
void SortableVector<T>::sortVector()
{
	T temp;

	for (int i = 0; i < this->size(); ++i)
	{
		for (int j = 0; j < this->size() - 1; ++j)
		{
			if (this->operator[](j) > this->operator[](j + 1))
			{
				temp = this->operator[](j + 1);
				this->operator[](j + 1) = this->operator[](j);
				this->operator[](j) = temp;
			}
		}
	}
}
