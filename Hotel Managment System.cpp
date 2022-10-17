#include <iostream>
using namespace std;


class MainMenu
{
public:
	int choice, j = 0, Rn, RLP, PRN;
	string username, password, Pnumber, adress, sex, Pverification;
	bool rooms[500];
	string pword[500];
	string Rname[500];
	string Rnumber[500];
	string Radress[500];
	string Rsex[500];
	string RregisteredDay[500];
	string RregisteredDate[500];

	void Menu()
	{
		for (int FR = 0; FR < 500; FR++)
		{
			rooms[FR] = false;
		}
		cout << "\t\tHOTEL KRYSTAL" << endl;
		cout << "____________________________________________________________________________________\n";
		cout << "1) Sing-up\n2) Book a room\n3) View all room informations\n4) View you personal details\n5) Edit your personal details\n6) Change password" << endl;
		cout << "____________________________________________________________________________________\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			j++;
			cout << "\t LOGIN" << endl;
			cout << "username:" << endl;
			cin >> username;
			cout << "password:" << endl;
			cin >> password;
			cout << "phone number:" << endl;
			cin >> Pnumber;
			cout << "adress:" << endl;
			cin >> adress;
			cout << "sex:" << endl;
			cin >> sex;
			cout << "account registered!" << endl;
			break;

		case 2:
			cout << "wich room do you want to book? (room max: 500)" << endl;
			cin >> Rn;
			if (rooms[Rn] == true)
			{
				cout << "this room is arleady taken" << endl;
			}
			else {
				cout << "how manny days will you stay there?" << endl;
				cin >> RregisteredDay[Rn];
				cout << "what day is today?" << endl;
				cin >> RregisteredDate[Rn];
				rooms[Rn] = true;
				Rname[Rn] = username;
				Rnumber[Rn] = Pnumber;
				Radress[Rn] = adress;


				cout << "your room has succesfully booked" << endl;
			}

			break;

		case 3:
			cout << "do you want to see a particular room (1) or the entire list? (2)" << endl;
			cin >> RLP;
			if (!(RLP == 1 || RLP == 2))
			{
				cout << "please choose 1 or 2" << endl;
			}
			else
			{
				if (RLP = 1)
				{
					cout << "which room do you want to see?" << endl;
					cin >> PRN;
					cout << "N: " << PRN << " Room information" << endl;
					cout << "room number: " << PRN;
					cout << "\troom-attached name: " << Rname[PRN];
					cout << "\troom-attached number: " << Rnumber[PRN] << endl;
					cout << "\tthe user will stay for: " << RregisteredDay[PRN] << endl;
					cout << "\tand has been there since: " << RregisteredDate[PRN] << endl;
					cout << "-----------------------------------------------------------------------------------------" << endl;
				}
				if (RLP = 2)
				{
					for (int RYH = 1; RYH < 500; RYH++)
					{
						cout << "room number: " << PRN;
						cout << "\troom-attached name: " << Rname[PRN];
						cout << "\troom-attached number: " << Rnumber[PRN] << endl;
						cout << "\tthe user will stay for: " << RregisteredDay[PRN] << endl;
						cout << "\tand has been there since: " << RregisteredDate[PRN] << endl;
						cout << "-----------------------------------------------------------------------------------------" << endl;
					}
				}
			}
			break;
			
		case 4:
			cout << "\tPERSONAL INFORMATIONS" << endl;
			cout << "username: " << username << endl;
			cout << "password: " << password << endl;
			cout << "phone number: " << Pnumber << endl;
		break;

		case 5:
			cout << "Editing the personal informations..." << endl;
			cout << "username:" << endl;
			cin >> username;
			cout << "phone number:" << endl;
			cin >> Pnumber;
			cout << "adress:" << endl;
			cin >> adress;
			cout << "sex:" << endl;
			cin >> sex;
			cout << "account updated!" << endl;
		break;

		case 6:
			cout << "Changing password: " << endl;
			cout << "please enter the previous password: " << endl;
			cin >> Pverification;
			if (Pverification == password)
			{
				cout << "please enter the new password: " << endl;
				cin >> password;
			}
			else
			{
				cout << "passwords does't match, try again" << endl;
			}
		break;

		default:
			cout << "please choose from one of the option with the corresponding number." << endl;
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
