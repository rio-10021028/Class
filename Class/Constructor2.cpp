#include <iostream>
#include <cstdlib>
using namespace std;

class Integer 
{
private:
	int m_value;

public:
	Integer(int num = 0);
	void showValue();
};

Integer::Integer(int num)
{
	m_value = num;
}

void Integer::showValue()
{
	cout << m_value << endl;
	//exit(EXIT_FAILURE);
}

int main()
{
	Integer array[] =
	{
		Integer(),
		Integer(3),
		Integer(9),
	};

	for (int i = 0; i < (sizeof(array) / sizeof(*array)); i++)
	{
		array[i].showValue();
	}
}