#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int x,y;
	double z=2.5;
	double v;
	cout<<setprecision(2)<< fixed <<showpoint;
	cout<< "Enter value of x: ";
	cin>>x;
	cout<<"Eneter value of y:";
	cin>>y;
	switch (x)
	{
		case 1: 
			if(y > 1 && y < 5) 
			{
				v=x*y*z;
			}
			else if (y >= 5)
			{
				v=x+y/z;
			}
			cout<< "V=";
			std::cout << std::setw(10);
   			std::cout <<v << std::endl;
			break;
		case 2: 
			if(y<=5)
			{
				v=abs((x-y)/z);
			}
			else if(y>5)
			{
				v=x-sqrt(y+z);	
			}
			cout<< "V=";
			std::cout << std::setw(10);
   			std::cout <<v << std::endl;
			break;
		default:
			v= x+y+z;
			cout<< "V=";
			std::cout << std::setw(10);
   			std::cout <<v << std::endl;
	
}
	
getch();
return 0;
}
