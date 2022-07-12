#include<stdio.h>
int main()
{
        int a,b;
        printf("enter a,b values:\n");
        scanf("%d%d",&a,&b);
        a=a^b;
        b=a^b;
        a=a^b;
       /*
	a=a+b;
	b=a-b;
	a=a-b;

	a=a*b;
	b=a/b;
        a=a/b;*/

        printf("after swapping=%d %d\n",a,b);
}

