#pragma once
#include<iostream>
#include<cstdlib>;
using namespace std;

template <class T>
class SimpleVector
{
private:
	T* aptr;
	int arraySize;
	void subError() const;
public:
	SimpleVector(int);
	SimpleVector(const SimpleVector&); //copy Constructor
	~SimpleVector();


	void pushBack(T);
	void popBack();
	
	int size() const
	{
		return arraySize;
	}
	void sizeUp()
	{
		arraySize++;
	}
	void sizeDown()
	{
		arraySize--;
	}

	T& operator[](int);
	void print() const;
	
};

template <class T>
SimpleVector<T>::SimpleVector(int s)
{
	arraySize = s;
	aptr = new T[s];
	for (int i = 0; i<arraySize;i++)
	{
		aptr[i] = T(); // default constructor of that data type
	}
}

template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
	arraySize = obj.arraySize;
	aptr = new T[arraySize];
	for (int i = 0; i < arraySize; ++i)
	{
		aptr[i] = obj.aptr[i];
	}

}

template <class T>
SimpleVector<T>::~SimpleVector()
{
	if(arraySize>0)
	{
		delete[] aptr;
	}
}

template <class T>
void SimpleVector<T>::pushBack(T obj)
{
	sizeUp();
	
}

template <class T>
void SimpleVector<T> ::popBack()
{
	delete aptr[size() - 1];
	sizeDown();
}

template <class T>
void SimpleVector<T>::subError() const
{
	cout << "ERROR: SUbscript out of range.\n";
	exit(0);
}

template <class T>
T& SimpleVector<T>::operator[](int sub)
{
	if(sub<0||sub >= arraySize)
	{
		subError();
	}
	return aptr[sub];
}

template <class T>
void SimpleVector<T>::print() const
{
	for (int i = 0; i < arraySize; ++i)
	{
		cout << aptr[i] << " ";
	}
	cout << endl;
}





