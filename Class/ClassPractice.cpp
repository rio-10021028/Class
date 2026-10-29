#include <iostream>
using namespace std;

const int NAME_MAX = 16;

class Hero
{
public:
	char name[NAME_MAX + 1];  // 名前
	int hp;  // 体力
	int power;  // 力
	int defence;  // 防御力
	int speed;  // 素早さ
	int luck;  // 運

	Hero();  // コンストラクタ
	void damage(int damage);  // damage
	void heal(int heal_value);  // 回復
	void showName();  // 名前表示
};

Hero::Hero()
{
	while (true)
	{
		char input[100];

		cout << "enter Hero name > " << flush;
		cin >> input;

		if (sizeof(input) / sizeof(input[0]) <= NAME_MAX + 1)
		{
			for (int i = 0; i < sizeof(input) / sizeof(input[0]); i++)
			{
				name[i] = input[i];
			}
			break;
		}

		cout << "長い。" << endl;
	}

	cout << "hp, power, defence, speed, luck > " << flush;
	cin >> hp >> power >> defence >> speed >> luck;
}

void Hero::damage(int damage)
{
	hp -= damage;

	showName();
	cout << " は " << damage << " ダメージうけた！" << endl
		<< "HP : " << (hp > 0 ? hp : 0) << endl;

	if (hp <= 0)
	{
		showName();
		cout << " は、やられてしまった！" << endl;
	}
}

void Hero::heal(int heal_value)
{
	hp += heal_value;

	showName();
	cout << " は " << heal_value << " 回復した！" << endl;
}

void Hero::showName()
{
	cout << name;
}

int main()
{
	//Hero team[] = 
	//{
	//	{"a", 1, 1, 1, 1, 1, }, 
	//	{"b", 1, 1, 1, 1, 1, }, 
	//	{"c", 1, 1, 1, 1, 1, },
	//	{"d", 1, 1, 1, 1, 1, },
	//};

	Hero a;
}