#include <iostream>
#include "Entity.h"

using namespace std;

int main(int argc, char* argv[])
{
	int dam = 0;
	if (argc <= 1 || argc > 2 )
		dam = 20;
	else
		dam = atoi(argv[1]);


	Entity basic_bitch("basic_bitch", 10, 10, 10, 10, 10, 42);

	
	basic_bitch.print();
	basic_bitch.take_damage_shield(dam);
	cout << endl;
	basic_bitch.print();
	cout << endl;
}
