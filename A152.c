#include<stdio.h>
#include<conio.h>
int smallest(int [],int);
int main()
{
	int n,i,sml;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	sml=smallest(a,n);
	printf("Smallest number from the given array is %d",sml);
	getch();
}
int smallest(int a[],int n)
{
	int s,i;
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			if(s>a[i+1])
			    s=a[i+1];
		}
	}
	return s;
}
