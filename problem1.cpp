#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	string package;
	int hours, price;
	cout<<"Enter type of package purchased (Only enter either A,B, or C): "; cin >> package;
	cout<< "Enter the number of hours used: "; cin >> hours;
	{
	if( package =="A")
	{
		if(hours<=10)
		{
			price= 995;
		}
		else if (hours>10)
		{
			price = 995+(hours-10)*20;
		}

	}
	else if( package=="B")
	{
		if(hours<=20)
		{
			price= 1495;
		}
		else if(hours>20)
		{
		price=1495 +(hours-20)*10;
		}
	
	}
	else if( package=="C")
	{
		price= 1995;
	}

	}
cout<<"Toal amount due: P"<< price;
getch();
return 0;
}

	
	

