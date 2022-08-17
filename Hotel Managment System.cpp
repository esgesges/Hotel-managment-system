#include <iostream>
using namespace std;


class MainMenu
{
public:
	int choice;

	void Menu()
	{
		cout << "\t\tHOTEL KRYSTAL" << endl;
		cout << "____________________________________________________________________________________\n";
		cout << "1) Sing-up\n2) Book a room\n3) View your room informations\n4) View you personal details\n5) Edit your personal details\n6) Change password" << endl;
		cout << "____________________________________________________________________________________\n";
		cin >> choice;
		switch (choice)
		{
		case 1:

		break;

		case 2:

		break;

		case 3:

		break;

		case 4:

		break;

		case 5:

		break;

		case 6

		break;
		}
	}
};






int main()
{
	MainMenu giorgio;
	int i = 0;
	while (i == 0)
	{
		giorgio.Menu();
	}
}