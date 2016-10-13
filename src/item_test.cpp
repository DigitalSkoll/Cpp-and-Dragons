#include <iostream>
#include "Item.h"

using namespace std;

int main()
{
	Item sword("sword", 100, 0, 20);
	Item axe("axe", 150, 0, 25);

	sword.print();
	axe.print();
}
