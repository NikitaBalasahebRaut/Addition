
#include "Header.h"

int main()
{
 int no1 = 0;
 int no2 = 0;
 int iRet = 0;
 
 printf("Enter The First no \n");
 scanf("%d",&no1);
 printf("Enter The Second no\n");
 scanf("%d",&no2);
 
 iRet = Addition(no1,no2);
 printf("Addition is %d",iRet);
 
 return 0;
 
 }
 
 /*output
 
 D:\ProgramTopicWise\LB\ProblemsOnDigits\Addition>gcc Header.h Helper.c Main.c -o myexe

D:\ProgramTopicWise\LB\ProblemsOnDigits\Addition>myexe
Enter The First no
12
Enter The Second no
12
Addition is 24

*/