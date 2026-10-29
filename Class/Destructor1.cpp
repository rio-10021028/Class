#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class IntArray
{
private:
	int* m_array;
	int m_size;

	void checkIndex(int i);

public:
	IntArray(int size);
	~IntArray(); // これがデストラクタ
	int get(int i);
	void set(int i, int value);

};

IntArray::IntArray(int size)
{
	m_array = new int[size];
	m_size = size;

	cout << "コンストラクタが呼ばれました。"
		<< "要素数は " << m_size << " です。" << endl;
}

// デストラクタ
IntArray::~IntArray()
{
	delete[] m_array;
	m_array = nullptr;

	cout << "デストラクタが呼び出されました。"
		<< "要素数は " << m_size << " でした。" << endl;
}

int IntArray::get(int i)
{
	checkIndex(i);
	return m_array[i];
}

void IntArray::set(int i, int value)
{
	checkIndex(i);
	m_array[i] = value;
}

void IntArray::checkIndex(int i)
{
	if (0 <= i && i < m_size)
	{
		// 正常～
	}
	else
	{
		cout << "インデックスが不正わよ！" << endl
			<< " 値 : " << i << endl;

		exit(EXIT_FAILURE);
	}
}

void viss(int num)
{
	cout << "viss : No." << num << endl;
}

IntArray a(10);

int main()
{
	viss(1);

	IntArray b(20);
	viss(2);

	IntArray c(30);
	viss(3);
	{
		IntArray d(40);
		viss(4);
	}

	viss(5);
}