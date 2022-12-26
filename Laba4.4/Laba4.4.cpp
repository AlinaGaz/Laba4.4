#include "weapon.h"

int main() {
	Weapon first = Weapon("Sword", 20, 20);
	Weapon* second = new Weapon();
	cout << "Check: " << first.CheckWeight(40) << endl;
	cout << "Check: " << first.CheckWeight(10) << endl;
	cout << "Sum: " << first.SumWeight(second) << endl;
	cout << "Sum: " << first.SumWeight(10) << endl;
	delete second;
	Characteristic* str = new Characteristic(32);
	cout << "Damage: " << str->GetDamageCh(&first) << endl;
	cout << "Add: " << MyMath::Add(10, 5) << endl;
	cout << "Sub: " << MyMath::Sub(10, 5) << endl;
	cout << "Mult: " << MyMath::Mult(10, 5) << endl;
	cout << "Div: " << MyMath::Div(10, 5) << endl;
	cout << "Count: " << MyMath::count << endl;
}