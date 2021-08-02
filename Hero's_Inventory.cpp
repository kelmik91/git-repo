#include "iostream"
#include "string"
using namespace std;

int main(){
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];
	int numItems = 0;
	
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";
	
	cout << "Your items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}
	
	cout << "\n You trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	
	cout << "\n Your items:";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}
	
	cout << "\n The item name ' " << inventory[0] << " ' has ";
	cout << inventory[0].size() << " leters in it. \n";
	
	cout << "\n \t You find a healing potion.";
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}else
	{
		cout << "You have too many items and can't carry another.";
	}
	
	cout << "\n Your items: \n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	return 0;
}
