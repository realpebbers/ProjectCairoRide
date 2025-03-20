#pragma once
#include<iostream>
#include<string>

int const Max_Users = 1e5;
using namespace std;

struct Date
{
	int Day, Month, Year;
};

struct Subscription_Type 
{
	int Scholar_Pass,
		General_Pass,
		Smart_Wallet;
};

struct Subscription
{
	int  Remaining_Trips;
	Subscription_Type Plan_Type;
	Date  Activation_Date, Expiry_Date;

}Data_Of_Users[Max_Users];


void Scholar_Pass()
{


}
void Genral_Pass()
{



}
void Smart_Wallet()
{



}