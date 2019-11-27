#ifndef _MYBANK_H_
#define _MYBANK_H_
#define SIZE 50
#define LEN 2

double array [LEN][SIZE]={{0},{0}};

void openAcount(double m);
void balanceAcount(int b);
void depositAcount (double m, int b);
void WithdrawalAcount (double m, int b);
void closeAcount (int b);
void interestAcount(double a );
void printAllAcount ();
void closeAllAcount ();

#endif