#include <iostream>
#include "IntArray.h"
using namespace std;

void viss(int num)
{
	cout << "viss : No." << num << endl;
}

void show(IntArray array)
{
	viss(2);

	for (int i = 0; i < array.size(); i++)
	{
		cout << array.get(i) << " ";
	}
	cout << endl;

	viss(3);
}

int main()
{
	IntArray array0to9(10);
	IntArray array2(10);

	array2 = array0to9;


	for (int i = 0; i < array0to9.size(); i++)
	{
		array0to9.set(i, i);
		array2.set(i, i);
	}

	viss(1);
	show(array2);

	show(array0to9);

	viss(4);
}