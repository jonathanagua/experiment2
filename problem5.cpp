#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=22, a,first_number=0,second_number=1,next_number;
    for(a=0;a<n;a++)
   {
      if(a<=1)
         next_number=a;
      else
      {
         next_number=first_number+second_number;
         first_number=second_number;
         second_number=next_number;
      }
      cout<<next_number<<"";
      if(a<21)
		{
				cout<<",";	
	
			}
   }
	
		
	
getch();	
return 0;

}
