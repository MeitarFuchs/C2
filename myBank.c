#include <stdio.h>
#include "myBank.h"

void openAcount(double money)
{
	int IsOff=0;
	int i=0;
	if (money<0)
	printf ("you need to put positive number\n ");
	else
	{
	while( (i<SIZE) && (IsOff==0))
     {  
		if (array[1][i]==0)
        {
			IsOff=1;
			array[0][i] = money;
			array[1][i] = 1;
			printf("The account number is : %d \n", i+901); 
		}
		 i++;
	}
	
	 if (IsOff==0)
		printf("Our bank is full\n");
	}
	return;
}

void balanceAcount(int numA)
{
	if (numA>=901 && numA<=950)
	{
	if (array[1][numA-901]==1)
	{
   		 printf("The balance of this account is:   %0.2f\n", array[0][numA-901]);
	}
	else
    	printf("The acount is close\n ");
	}
	else
	printf("The acount doesn't excist \n ");
	return ;
}


void depositAcount (double dep, int numA)
{
	if (dep>=0 && (numA>=901 && numA<=950))
	{
    if (array[1][numA-901]==1)
    {
        array[0][numA-901]+=dep;
        printf("The new balance of this account is:   %0.2f\n ", array[0][numA-901]);
    }
    else
        printf("The acount is close\n ");
	}
	else
	printf("you need to put positive number or your account doesn't excist\n ");
return;
}


void WithdrawalAcount (double wit, int numA)
{
	if (wit>=0)
	{

    if (array[1][numA-901]==1 )
    {
	    if (array[0][numA-901]-wit>=0 )
	    {
		    array[0][numA-901]-=wit;
		    printf("The new balance of this account is:   %0.2f\n ", array[0][numA-901]);
	    }
    else 
        printf("you dont have enough money\n");
	}
	else
   	 printf("The acount is close\n ");
	}
	else
	printf("you need to put positive number\n ");
return;
}

void closeAcount (int numA)
{
	if (numA>=901 && numA<=950)
	{
	if (array[1][numA-901]==1 )
	{
        array[0][numA-901]=0;
		array[1][numA-901]=0;
		
        }
    else
        printf("this account is already close\n");
	}
	else
printf("your number account doesnt excist\n ");
return;
}


void interestAcount(double rate )
{
	if (rate>=0)
	{
	double r;
	for (int i=0; i<SIZE; i++)
	{
		if (array[1][i]==1 )
		{
			r= (array[0][i])*(rate/100);
			array[0][i]+=r;
		}
	}
	printf("We update the balance for everyone\n");
	}
	else
	printf("your rate should be positive\n");
return;
}

void printAllAcount ()
{
	int count=0;
    for (int i=0; i<SIZE; i++)
    {
	    if (array[1][i]==1 )
	    {
			count++;
	    	printf("The account number is :  %d  the balans is:   %0.2f\n" , i+901 , array[0][i]) ;
	    }
    }
	if (count==0)
	printf("Our Bank is Empty\n") ;
return;
}


void closeAllAcount ()
{
    for (int i=0; i<SIZE; i++)
    {
	    if (array[1][i]==1 )
	    {
	    	closeAcount(i+901);
	    }
	}
return;
}



