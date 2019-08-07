#include"rev.h"
int reverse(int fac)
{
int rev=0,rem;
while(fac!=0)
{
rem=fac%10;
rev=rev*10+rem;
fac=fac/10;
}
return rev;
}

