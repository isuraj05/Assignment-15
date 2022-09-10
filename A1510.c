#include<stdio.h>
#include<conio.h>
void frequency(int [],int);
int main()
{
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	frequency(a,n);
	getch();
}

void frequency(int a[],int n)
{
	int i,j,temp,count;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		count=0;
		for(j=0;j<n;j++)
		{
			if(temp==a[j])
			{
				temp=a[j];
				count++;
			}
		}
		printf("%d - %d times\n",temp,count);
	}
}
