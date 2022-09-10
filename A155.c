#include<stdio.h>
#include<conio.h>
int duplicate(int [],int);
int main()
{
	int n,i,dv;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	dv=duplicate(a,n);
	printf("\nThe value is %d",dv);
	getch();
}

int duplicate(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
			return a[i];
	}
	return 0;
}
