#pragma once

class IntArray
{
private:
	int* m_array;
	int m_size;

	void checkIndex(int i);

public:
	IntArray(int size);
	IntArray(const IntArray& other); // コピーコンストラクタ
	~IntArray(); // これがデストラクタ
	void operator=(const IntArray& other); // 演算子オーバーロード
	int size();
	int get(int i);
	void set(int i, int value);

};