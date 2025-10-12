/*
NAME:cecilia_muthoni_iregi 
REG:CT100/G/26194/25
description:A program displaying use of while loop to print ATM balance ;
*/

#include<stdio.h>
int main (){
int account =1000;
int withdrawal;
int balance;

while (balance>0);

{
printf("enter the amount to withdraw\n");
scanf("%d",& withdrawal);
balance=account - withdrawal ;
printf("new balance is %d\n",balance);
account= balance;
}
return 0;}
