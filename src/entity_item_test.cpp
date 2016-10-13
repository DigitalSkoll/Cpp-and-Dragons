#include <iostream>
#include "Entity.h"
#include "Item.h"

using namespace std;

int main()
{
	srand(time(NULL));
	Entity warrior("Warrior", 10, 10, 10, 10, 10, 10, 400);

	Item sword("sword", 100, 0, 10);
	Item shield("shield", 100, 10, 0);

//	sword.print();
//	shield.print();

	warrior.add_item(sword);
//
//	warrior.print();
//	cout << endl;
//	warrior.print();
//
	warrior.add_item(shield);

//	cout << endl;
//
//	warrior.print();
//
//	cout << endl;
//
	warrior.print_all_inven();

	cout << "Attack: " << warrior.attack() << endl;
	cout << "Attack: " << warrior.attack() << endl;
	cout << "Attack: " << warrior.attack() << endl;
	cout << "Attack: " << warrior.attack() << endl;



}
