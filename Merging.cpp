#include<stdio.h>
#include<conio.h>
int main()
{
	
	int A[50],B[50],C[100], sizeA, sizeB, sizeC, i, j, k;
	
	printf("Enter the size of first array: ");
	scanf("%d",&sizeA);
	printf("Enter Elements : ");
	
	for(i=0; i<sizeA; i++)
	{
		scanf("%d",&A[i]);
	}
	
	printf("Enter the size of second array: ");
	scanf("%d",&sizeB);
	printf("Enter Elements : ");
	
	for(i=0; i<sizeB; i++)
	{
		scanf("%d",&B[i]);
	}
	
	for(i=0; i<sizeA; i++)
	{
		C[i]=A[i];
	}

	sizeC=sizeA+sizeB;
	
	for(i=0, k=sizeA; k<sizeC && i<sizeB; i++, k++)
	{
		C[k]=B[i];
	}
	
	printf("AFter merging :\n");
	
	for(i=0; i<sizeC; i++)
	{
		printf("%d  ",C[i]);
	}
	return 0;
}
