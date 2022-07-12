#include<stdio.h>
int main()
{
int n,p,set,clear,toggle,check_bits;
printf("Enter a number: ");
scanf("%d",&n);
printf("Enter a position: ");
scanf("%d",&p);
set= n | 0x01 << p;
clear= n&~(0x01<<p);
toggle=n^(0x01<<p);
check_bits=n&0x01<<p;
printf("Set of %d at %d    = %d\n",n,p,set);
printf("Clear of %d at %d  = %d\n",n,p,clear);
printf("Toggle of %d at %d = %d\n",n,p,toggle);

check_bits?printf("%d at %d = ON\n",n,p):printf("%d at %d = OFF\n",n,p);
/*
if(check_bits)
	printf("%d at %d = ON\n",n,p);
else
	printf("%d at %d = OFF\n",n,p);	
*/
return 0;
}

