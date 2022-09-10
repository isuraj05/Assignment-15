#include<stdio.h>
#include<conio.h>
int countDuplicate(int [],int);
int main()
{
	int n,i,cd;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	cd=countDuplicate(a,n);
	printf("\nTotal number of duplicate values is/are %d",cd);
	getch();
}

int countDuplicate(int a[],int n)
{
	int i,j,d,count=0;
	for(i=0;i<n-1;i++)
	{
		d=a[i];
		for(j=i;j<n-1;j++)
		{
			if(d==a[j+1])
				count++;
		}
	}
	return count;
}
