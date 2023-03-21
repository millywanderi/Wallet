#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void transferAmountfuct(float transferAmount, float accountBalance)
{
	printf("\n\t\t\t\t----------Millie Bank.-----------");
	printf("\n\t\t\t\t==========Transfer slip==========");
	printf("\n\t\t\t\t %s \t\t %s ", __DATE__, __TIME__);
	printf("\n\t\t\t\tYou have transferred_________%.2f.", transferAmount);
	printf("\n\t\t\t\tNew balance ------%.2f.", accountBalance);
	printf("\n\t\t\t\t--------Thankyou for choosing Millie Bank----" );
}
