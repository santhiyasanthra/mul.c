#include <stdio.h>

int main(void) {
int i,n,mul;
scanf("%d",&n);
printf("%d\n",n);
for(i=1;i<=n;i++)
{
	mul=n*i;
	printf("%d\t",mul);
}
	return 0;
}
