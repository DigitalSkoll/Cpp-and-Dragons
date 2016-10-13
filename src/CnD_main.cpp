#include <iostream>
#include "Entity.h"
#include "Item.h"

using namespace std;

void buying(Entity& p);			// Does not work
void combat(Entity& p1, Entity& p2);	// Starts Comabt to find the winner

int main()
{
	srand(time(NULL));
	Entity player_1("player 1", 10, 10, 10, 10, 10, 10, 300); 
	Entity player_2("player 2", 10, 10, 10, 10, 10, 10, 300); 
	Item sword("sword", 100, 0, 10);
	Item axe("axe", 150, 0, 15);
	Item shield("shield", 100, 10, 0);
	Item nice_shield("nice shield", 150, 15, 0);

	player_1.add_item(sword);
	player_1.add_item(axe);

	player_2.add_item(nice_shield);
	player_2.add_item(axe);

	cout << "Player 1 has: " << player_1.num_inven() << " items\n\n";
	cout << "Player 1 Inventory: \n";
	player_1.print_all_inven();
	cout << "\n\n";
	cout << "Player 2 has: " << player_2.num_inven() << " items\n\n";
	cout << "Player 2 Inventory: \n";
	player_2.print_all_inven();

	cout << "player 1 has bought: " << player_1.inven_cost() << " gold worth of items\n";
	cout << "player 2 has bought: " << player_2.inven_cost() << " gold worth of items\n";


	cout << "\n\n";
	cout << "COMBAT!!!!!!\n";

	combat(player_1, player_2);





}

void combat(Entity& p1, Entity& p2)
{
	while (p1.get_hp() >  0 && p2.get_hp() > 0)
	{
		cout << p1.get_name() << " attacks " << p2.get_name() << endl;
		p2.take_damage_shield(p1.attack());
		cout << p2.get_name() << " attacks " << p1.get_name() << endl;
		p1.take_damage_shield(p2.attack());
	}
	if (p1.get_hp() > 0)
		cout << p1.get_name()  << " is the Winner with " << p1.get_hp() << " left!\n";
	else if (p2.get_hp() > 0)
		cout << p2.get_name() << " is the Winner with " << p2.get_hp() << " left!\n";
	else
		cout << "It is a Draw!\n";
}


void buying(Entity& p)
{
	Item sword("sword", 100, 0, 10);
	Item axe("axe", 150, 0, 15);
	Item shield("shield", 100, 10, 0);
	Item nice_shield("nice shield", 150, 15, 0);
	
	cout << "0";
	sword.print();
	cout << "1";
	axe.print();
	cout << "2";
	shield.print();
	cout << "3";
	nice_shield.print();

	int more = 'y';
	int choice = 0;
	while (p.get_wallet() != 0 && more != 'n')
	{
		cout << "What item to buy: ";
		cin >> choice;
		switch (choice)
		{
			case 0:
				cout << "Sword Bought\n";
				p.add_item(sword);
				break;
			case 1:
				cout << "Axe Bought\n";
				p.add_item(axe);
				break;
			case 2:
				cout << "Shield Bought\n";
				p.add_item(shield);
				break;
			case 3:
				cout << "Nice Shield Bought\n";
				p.add_item(nice_shield);
				break;
			default:
				cout << "[ERROR] Not Valid Choice\n\n";
		}
		cout << "Continue? [y/n]: ";
		cin >> more;
		cout << "\n";
	}
}
