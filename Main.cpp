#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


template <typename T>
void sort(T myArray[], int nElem);
template <typename T2>
void print(T2 anyArray[], int nElms);

int main()
{
	string strArray[] = { "a", "z", "d", "f", "R" };
	float fltArray[] = { 5.37, 7.65, 1.78, 6.23, 5.56 };
	int inArray[] = { 6, 5, 2, 8, 1 };

	int elems = 5;
	
	cout << "The string array is:\n" << endl;
	print(strArray, elems);
	cout << "\n\nThe float array is:\n" << endl;
	print(fltArray, elems);
	cout << "\n\nThe int array is:\n" << endl;
	print(inArray, elems);

	cout << "\n\n";

	system("Pause");
	return 0;
}

template <typename T>
void sort(T myArray[], int nElem)
{
	T temp;
	for (int i = 0; i < nElem; i++)
	{
		for (int j = i; j < nElem; j++)
		{
			if (myArray[j] < myArray[i])
			{
				temp = myArray[i];
				myArray[i] = myArray[j];
				myArray[j] = temp;
			}
		}
	}
}

template <typename T2>
void print(T2 anyArray[], int nElms)
{
	for (int i = 0; i < nElms; i++)
		cout << anyArray[i] << "\t";
	cout << "\n\nThe sorted Array is:\n\n";
	sort(anyArray, nElms);
	for (int i = 0; i < nElms; i++)
		cout << anyArray[i] << "\t";
}
