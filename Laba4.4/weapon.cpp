#include <iostream>
#include "weapon.h"
using namespace std;

int MyMath::count = 0;

Weapon::Weapon(string Name, int Damage, int Weight) {
	_name = Name;
	Weapon::SetDamage(Damage);
	_weight = Weight;
};
Weapon::Weapon() {
	_name = "Default";
	Weapon::SetDamage(10);
	_weight = 10;
};
Weapon::~Weapon() {
	cout << Weapon::GetName() << " " << Weapon::GetDamage() << " " << Weapon::GetWeight() << endl;
	cout << "This struct will be deleted!" << endl;
};

bool Weapon::CheckWeight(int maxWeight) {
	if (maxWeight < Weapon::GetWeight()) {
		return true;
	}
	else {
		return false;
	}
}

int Weapon::GetDamage() {
	return _damage;
}
int Weapon::GetWeight() {
	return _weight;
}

string Weapon::GetName() {
	return _name;
}
void Weapon::SetDamage(int damage) {
	_damage = damage;
}

int Weapon::SumWeight(Weapon* weapon) {
	return weapon->GetDamage() + Weapon::GetDamage();
}
int Weapon::SumWeight(int weight) {
	return Weapon::GetWeight() + weight;
}

Characteristic::Characteristic(int _strength) {
	Strength = _strength;
}
int Characteristic::GetDamageCh(Weapon* weapon) {
	return Strength + weapon->Weapon::_damage;
}
int MyMath::Add(int a, int b) {
	MyMath::count++;
	return a + b;
}

int MyMath::Sub(int a, int b) {
	MyMath::count++;
	return a - b;
}

int MyMath::Mult(int a, int b) {
	MyMath::count++;
	return a * b;
}

int MyMath::Div(int a, int b) {
	MyMath::count++;
	return a / b;
}