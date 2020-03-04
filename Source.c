#include <stdio.h>
#include <conio.h>

int main()
{
	int uang = 10000;
	int hujan = 0; 
	
	printf("uang>10000 dan tidak hujan: %d \n", (uang > 7300) && (!hujan));

	uang = 11000;
	hujan = 1; 
	printf("uang>11000 dan tidak hujan: %d \n", (uang > 7300) && (!hujan));

	_getch();
	return 0;
}