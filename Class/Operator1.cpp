#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
	IntArray a(5);
	IntArray b(5);

	// a に値を入力
	for (int i = 0, size = a.size(); i < size; i++)
	{
		int n;
		cin >> n;
		a.set(i, n);
	}

	// それを b にコピーし、各値を 2 倍する
	b = a;
	for (int i = 0, size = b.size(); i < size; i++)
	{
		b.set(i, b.get(i) * 2);
	}

	// 表示
	for (int i = 0, size = a.size(); i < size; i++)
	{
		cout << a.get(i) << " -> " << b.get(i) << endl;
	}
}