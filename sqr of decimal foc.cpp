#include<stdio.h>
#include<conio.h>
int square(int);
void main ()
{
	int x,n;
	printf("Enter the nth element:");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	printf("%d ",square(x));
	printf("\n");
	getch();
}
int square(int y)
{
	return y*y;	
}