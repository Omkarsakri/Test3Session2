#include<stdio.h>
#include<math.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("enter the numerator and denominator of two numbers\n");
  scanf("%d%d%d%d",num1,den1,num2,den2);
}

void add(int num1,int den1,int num2,int den2,int*num3,int*den3)
{
  int num33,den33;
  num33=(num1*den2)+(num2*den1);
  den33=(den1*den2);
  int gcd=0;
    for(int i=1; i <= num33 && i <= den33; ++i)
     {
      if(num33%i==0 && den33&i==0)
         gcd = i;
     }
  *num3= num33/gcd;
  *den3= den33/gcd;
}

void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("%d/%d + %d/%d = %d/%d", num1,den1,num2,den2, num3,den3);
}

int main()
{
int num1,num2,num3,den1,den2,den3;
input(&num1,&den1,&num2,&den2);
add(num1,den1,num2,den2,&num3,&den3);
output(num1,den1,num2,den2,num3,den3);
return 0;
}
