#include <stdio.h>
#include "myBank.h"

int main()
{
    printf("******* welcome To Our Bank *******\n");
    char op=32;
    int numberA=0;
    double rate=0;
    double amount=0;
    int flagExit=0;

    do
    {
       printf("Transaction type? 'O','B','D', 'W', 'C', 'I', 'P', 'E'  : \n");  
      if (scanf( " %c",&op)==1)
    {
            switch (op)
        {
            case 'O':

            printf("initial deposit:\n");
             if (scanf("%lf", &amount)==1)
              openAcount(amount);
              else
              printf("your amount should be numbers, please choose again\n");
            break;
           
            case 'B':
            printf("Account Number? \n");
           if ( scanf("%d",&numberA)==1)
            balanceAcount(numberA);
            else
             printf("your  number account should be numbers, please choose again\n");
            break;

            case 'D':
            printf("Account Number?\n ");
            if ((scanf("%d",&numberA))==1)
            { 
              printf("Amount? \n");
              if (scanf("%lf",&amount)==1)
                depositAcount(amount, numberA);
              else
              printf("your amount should be numbers, please choose again\n");
            }
            else
              printf("your  number account should be numbers, please choose again\n");

            break;
            
            case 'W':
            printf("Account Number?\n ");
            if (scanf("%d",&numberA)==1)
            { 
              if (numberA>=901 && numberA<=950)
              {
                printf("Amount? \n");
                if ( scanf("%lf",&amount)==1)
                  WithdrawalAcount(amount, numberA);
                else
                  printf("your amount should be numbers, please choose again\n");
              }
              else
              printf("your account number dosent excist\n");
            }
            else
            printf("your  number account should be numbers, please choose again\n");

            break;

            case 'C':
            printf("Account Number? \n");
             if (scanf("%d",&numberA)==1)
            {
              closeAcount( numberA);
              
            }
            else
             printf("your  number account should be numbers, please choose again\n");
            break;

            case 'I':
            printf("Ilterest rate? \n");
             if (scanf("%lf",&rate)==1)
            interestAcount( rate);
            else 
            printf("the rate should be numbers, please choose again\n");
            break;

            case 'P':
            printAllAcount( );
            break;
        
            case 'E':
            flagExit=1;
            closeAllAcount( );
            printf("We close all your opens accounts\n");
             printf("See You Soon :)\n");
            
            break;

        default :
          printf("the Transaction isn't exist\n");
          break;
        
      }
    }
    }while(flagExit==0);
    
    return 0;
}