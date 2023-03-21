#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main(void)
{
	char name[30];
	int pin;
	long int account;
	float accountBalance = 0;
	float initDeposit;
	int continueTransact = 1;

	int opt;


	printf("\t\nWhat is your name: ");
	fgets(name, 30, stdin);
	printf("\t\nEnter your pin: ");
	scanf("%d", &pin);

	printf("\t\nEnter your account number: ");
	scanf("%ld", &account);
	printf("\n\t\tHow much do you want to deposit: ");
	scanf("%f", &initDeposit);
	accountBalance = accountBalance + initDeposit;
	initDeposit = 0;

	do{

	printf("\t\nChoose what you want to do: ");
	printf("\t\n1. Check the balance. ");
	printf("\t\n2. Deposit money. ");
	printf("\t\n3. Withdraw money.");
	printf("\t\n4. Transfer money. ");
	printf("\t\n5. Exit. ");
	scanf("%d",&opt);

	float deposit;
	float withdraw;
	float transferAmount;
	long int transferAccount;


	switch (opt){
		case 1:

		printf("\t\nYour account balance is: %.2f", accountBalance);

		break;

		case 2:

		printf("\t\nEnter amount you want to deposit: ");
		scanf("%f", &deposit);

		accountBalance = accountBalance + deposit;

		depositMoney(deposit, accountBalance);
		
		/*printf("\n\t\t\t----------Millie Bank.-----------");*/
		/*printf("\n\t\t\tYou have deposited_________%.2f.", deposit);*/
		/*printf("\n\t\t\tNew balance ------%.2f.", accountBalance);*/
		/*printf("\n\t\t\t--------Thankyou for choosing Millie Bank----");*/
		deposit = 0;

		break;

		case 3:

		system("clear");

		printf("\n\tHow much do you want to withdraw: ");
		scanf("%f", &withdraw);

		if (withdraw >= (accountBalance - 100))
		{
			insufficient(accountBalance);
			/*printf("\n\t\tYour account balance is: %.2f", accountBalance);*/
			/*printf("\n\t\t\tInsufficient balance.");*/
		}
		else
		{

			accountBalance = accountBalance - withdraw;

			withdrawMoney(withdraw, accountBalance);

			/*printf("\n\t\t\t----------Millie Bank.-----------");*/
			/*printf("\n\t\t\tYou have withdrawn_________%.2f.", withdraw);*/
			/*printf("\n\t\t\tNew balance ------%.2f.", accountBalance);*/
			/*printf("\n\t\t\t--------Thankyou for choosing Millie Bank----");*/
			withdraw = 0;
		}
		break;

		case 4:

		system("clear");

		printf("\n\t\tHow much do you want to transfer: ");
		scanf("%f", &transferAmount);
		printf("\n\t\tEnter account number: ");
		scanf("%ld", &transferAccount);

		if (transferAmount >= (accountBalance - 200))
		{
			insufficient(accountBalance);
			/*printf("\n\t\tYour account balance is: %.2f", accountBalance);*/
			/*printf("\n\t\t\tInsufficient balance.");*/
		}
		else
		{
			accountBalance = accountBalance - transferAmount;
			
			transferAmountfuct(transferAmount, accountBalance);

			/*printf("\n\t\t\t----------Millie Bank.-----------");*/
			/*printf("\n\t\t\t==========Transfer slip==========");*/
			/*printf("\n\t\t\tYou have transferred_________%.2f.", transferAmount);*/
			/*printf("\n\t\t\tNew balance ------%.2f.", accountBalance);*/
			/*printf("\n\t\t\t--------Thankyou for choosing Millie Bank----");*/
			transferAmount = 0;
		}
		break;

		case 5:

		printf("\n\t\t\tExisting .......");
		printf("\n\t\t\t--------Thankyou for choosing Millie Bank----");

		break;



	}
	printf("\n\tAny other transaction? ");
	printf("\t\tPress 1[Yes], 0[No\n]");
	scanf("%d", &continueTransact);

	} while (continueTransact != 0);


	return (0);
}
