#pragma once
#include<iostream>
#include<string>
using namespace std;
struct Date
{
	int Day, Month, Year;
};
struct Subscription
{
	int  Remaining_Trips;
	string Plan_Type;
	Date  Activation_Date, Expiry_Date;

};



 
