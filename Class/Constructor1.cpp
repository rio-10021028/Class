#include <iostream>
using namespace std;

class Integer
{
public:
	int m_value;
	double m_num;

	Integer(int num = 0);
	Integer(double num = 0);
	void show();
};

// コンストラクタ
Integer::Integer(int num)
{
	m_value = num;
}

//Integer::Integer(double num)
//{
//	m_num = num;
//}

void add(Integer* pointer)
{
	pointer->m_value++;
}

// メンバ変数の表示
void Integer::show()
{
	cout << m_value << endl;
}

int main()
{
	//Integer a, b(10), c(100);

	//add(&a);

	//a.show();
	//b.show();
	//c.show();

	Integer arr[4] =
	{
		Integer(1.1),
		Integer(1),
		Integer(2),
	};

	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		arr[i].show();
		cout << arr[i].m_value << endl;
	}
}