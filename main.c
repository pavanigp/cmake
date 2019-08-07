#include<stdio.h>
#include"add.h"
#include"fact.h"
#include"rev.h"

int main()
{
int n1,n2,fac,rev;
printf("enter two numbers:");
scanf("%d %d",&n1,&n2);
int add=addition(n1,n2);
printf("Addition :::%d\n",add);
fac=factorial(add);
printf("Factorial ::::  %d\n",fac);
rev=reverse(fac);
printf("Reverse ::::  %d\n",rev);
}

