#include <stdio.h>
#include<math.h>
 int n ;
 float f1(int n) 
 { return pow(1.5,n) ;} 
 float f2(int n)
 { return pow(n,3) ;} 
 float f3(int n)
 { return pow(2,log(n));}
 float f4(int n)
 { return pow(log(n),log(n));}
 float f5(int n)
 { return (n)*log(n);}
 float f6(int n)
 { return log(log(n)) ;}
 float f7(int n)
 { return log(n);}
 float f8(int n)
 { return pow(2,n);}
 float f9(int n)
     { return pow(2,pow(n,n));}
 float f10(int n)
 { return exp(n) ;}
 



 int main()
{   int n[] = {10,20,30,40,50,60,70,80,90,100};
  int i;
  float ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
  printf("X    |   f1   |  f2  |  f3  |  f4  |  f5  |  f6  |  f7  |  f8  |  f9  |  f10  \n");
  printf("x=10 |");
  for(i=1; i<=10;i++)
{ ans1 = (f1(n[i]));
    printf (" %.2f  |", ans1 );}
    printf("\n");
      printf("x=20 |");
    for(i=1; i<=10;i++)
{
    ans2 = (f2(n[i]));
printf ("%.2f  |", ans2 );} 

  printf("\n");
    printf("x=30 |");
 for(i=1; i<=10;i++)
{
    ans3 = (f3(n[i]));
printf ("%.2f  |", ans3 );}
  printf("\n");
    printf("x=40 |");
 for(i=1; i<=10;i++)
{

ans4 = (f4(n[i]));
printf ("%.2f  |", ans4);}
  printf("\n");
    printf("x=50 |");
 for(i=1; i<=10;i++)
{
    ans5 = (f5(n[i]));
printf ("%.2f  |", ans5 );}
      printf("\n");
        printf("x=60 |");
     for(i=1; i<=10;i++)
{
ans6 = (f6(n[i]));
printf ("%.2f  |", ans6 );} 
  printf("\n");
    printf("x=70 |");
 for(i=1; i<=10;i++)

{ans7 = (f7(n[i]));
printf ("%.2f  |", ans7 );}
  printf("\n");
    printf("x=80 |");
 for(i=1; i<=10;i++)
{
ans8 = (f8(n[i]));
    printf ("%.2f  |", ans8);} 
       printf("\n");
         printf("x=90 |");
     for(i=1; i<=10;i++)
{
ans9 = (f9(n[i]));
printf ("%.2f  |", ans9 );}
   printf("\n");
     printf("x=100 |");
 for(i=1; i<=10;i++)
{
ans10 = (f10(n[i]));
printf ("%.2f  |", ans10);}

    return 0;
}

