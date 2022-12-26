#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
using namespace std;
class Characteristic;
class Weapon
{
public:
	Weapon(string Name, int Damage, int Weight);
	Weapon();
	~Weapon();
	friend Characteristic;
	bool CheckWeight(int maxWeight);
	int SumWeight(Weapon* weapon);
	int SumWeight(int weight);
	int GetDamage();
	int GetWeight();
	string GetName();
	void SetDamage(int damage);
private:
	string _name;
	int _damage;
	int _weight;
};
class Characteristic
{
public:
	int Strength;
	Characteristic(int _strength);
	int GetDamageCh(Weapon* weapon);

private:
};


class MyMath
{
public:
	static int Add(int a, int b);
	static int Sub(int a, int b);
	static int Mult(int a, int b);
	static int Div(int a, int b);
	static int count;

private:
};
#endif
