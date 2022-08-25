#include "Character.h"

int main()
{
	Enemy e1("e1", 10, 2);
	Enemy e2("e2", 10, 2);
	Player p1("p1", 15, 3);
	Player p2("p2", 15, 3);
	
	Character* ptr1 = &e1;
	Character* ptr2 = &e2;
	Character* ptr3 = &p1;
	Character* ptr4 = &p2;

	ptr1->Attack(*ptr1, *ptr3);

	ptr3->DisplayHealth();

	ptr3->Attack(*ptr3, *ptr1);

	ptr1->DisplayHealth();

	ptr1->Attack(*ptr1, *ptr2);

	ptr2->DisplayHealth();
}