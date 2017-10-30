#include<stdio.h>
void main()
{
	int i,n,num[100],nume[100];
	printf("Introduzca la cantidad a evaluar\n");
	scanf("%d",&n);
	printf("Introduzca los valores\n");
	for(i=0;i<n;i++)
	{
	scanf("%d", &num[i]);
	nume[i]=num[i];
	}
	 printf("Los elementos del segundo arreglo son:");
 for(i=0;i<n;i++)
 {
 printf (" %d", nume[i]);
}
}
