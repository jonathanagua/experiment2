#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int previous_meter_reading, current_meter_reading, bill, consumption, unpaid_balance;
int water_demand=35;
int late_charge=20;
double consumption_charge=1.10;
cout<< "Enter the previous meter reading: "; cin>> previous_meter_reading;
cout<<"Enter the current meter reading:"; cin>> current_meter_reading;
cout<< "Enter the amount of unpaid balance"; cin>> unpaid_balance;
consumption=current_meter_reading - previous_meter_reading;
{
	if(unpaid_balance>0)
	{
	bill= (consumption*consumption_charge)+ water_demand+ late_charge;
	}
	else if(unpaid_balance==0)
	{
	bill= (consumption*consumption_charge)+ water_demand;
	}
}
cout<<"Water Bill: P"<< bill;

getch();
return 0;
}
