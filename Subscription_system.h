#pragma once
#include<iostream>
#include<string>

int const Max_Users = 1e5; 
using namespace std;
int User_Choise = 0;
struct Date
{
	int Day, Month, Year;
};

struct Subscription_Type 
{
	int Scholar_Pass,
		General_Pass,
		Smart_Wallet,
		Exit;
};

struct Subscription
{
	int  Remaining_Trips;
	Subscription_Type Plan_Type;
	Date  Activation_Date, Expiry_Date;

}Data_Of_Users[Max_Users];


void Scholar_Pass()
{
	cout << "1";

}
void General_Pass()
{

	cout << "2";

}
void Smart_Wallet()
{

	cout << "3";

}

struct Subcribtion_Menu
{
public:
	
	void DisplayMenu()
	{
		do
		{
			
			cout << "-------------------------------------" << endl;
			cout << "Please choose your subscribtion type: \n";
			cout << "Press 1 to subscribe as scholar Pass \n";
			cout << "Press 2 to subscribe as General Pass\n";
			cout << "Press 3 to subscribe as Smart Wallet\n";
			cout << "Press 4 to Exit\n";
			cout << "-------------------------------------" << endl;
			cin >> User_Choise;

			if (User_Choise == 1) {
				Scholar_Pass();
				break;
			}
			else if (User_Choise == 2) {
				General_Pass();
				break;
			}
			else if (User_Choise == 3) {
				Smart_Wallet();
				break;
			}
			else if (User_Choise == 4) {
				break;
			}
			else {
				cout << "Invalid choice\n";
				continue;
			}

		
		} while (User_Choise <= 4 && User_Choise > 0);
	}

	

};