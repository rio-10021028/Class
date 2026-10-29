#include <iostream>
#include <algorithm>
#include <cstdlib>
#include "IntArray.h"
using namespace std;

IntArray::IntArray(int size)
{
	m_array = new int[size];
	m_size = size;

	cout << "コンストラクタが呼ばれました。"
		<< "要素数は " << m_size << " です。" << endl;
}

IntArray::IntArray(const IntArray& other)
{
	m_array = new int[other.m_size];
	m_size = other.m_size;

	copy(other.m_array, other.m_array + m_size, m_array);

	cout << "コピーコンストラクタが呼ばれました。" << endl;
}

// デストラクタ
IntArray::~IntArray()
{
	delete[] m_array;
	m_array = nullptr;

	cout << "デストラクタが呼び出されました。"
		<< "要素数は " << m_size << " でした。" << endl;
}

void IntArray::operator=(const IntArray& other)
{
	int* array = new int[other.m_size];

	delete[] m_array;
	m_array = array;
	m_size = other.m_size;
	copy(other.m_array, other.m_array + m_size, m_array);

	cout << "演算子オーバーロードが呼び出されました。" << endl;
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

int IntArray::size()
{
	return m_size;
}