#include<stdio.h>
int main(){
	int nbr,i,r,arr[30];
	printf("Enter the number of elements in the array");
	scanf("%d",&nbr);
	printf("Enter the array elements");
	for(i=0;i<nbr;i++)
	{
		scanf("%d",&r);
	}
	printf("Enter the item to be searched ");
	scanf("%d",&r);
	i = 0;
	while(i<nbr && r!=arr[i])
	{
		i++;
	}
	if (i< nbr)
{
printf("The element is found in position=%d,i+1");
}
else
{
	printf("Enter not found");
}
return 0;
}