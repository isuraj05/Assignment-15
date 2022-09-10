#include<stdio.h>
#include<conio.h>
void reverse(int [],int);
int main()
{
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("\nEnter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	reverse(a,n);
	getch();
}

void reverse(int a[],int n)
{
	int i,k=1,temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-k];
		a[n-k]=temp;
		k++;
	}
	
	for(i=0;i<n;i++)
	    printf("%d  ",a[i]);
}
