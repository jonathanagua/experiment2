#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int counter;
	for(counter=1;counter<=10;counter++)
	cout<< counter<< ",";
	counter=10;
	while (counter < 30)
	{
		counter = counter +2;
		cout<< counter<< "";
		if (counter<30)
		{
				cout <<",";	
	
			}
	}
		
	
getch();	
return 0;

}
