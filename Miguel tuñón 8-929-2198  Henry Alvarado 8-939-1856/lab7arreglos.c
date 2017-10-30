#include<stdio.h>
void main()
{
	int c,i,n[100],j[100];
	
	printf("Ingrese la cantidad de numeros\n");
	scanf("%d",&c);
	
	for(i=0;i<c;i++)
	{
	    printf("Ingrese los nuemros\n");
	    scanf("%d",&n[i]);
	    
	    j[i]=n[i];
    	printf("Los numeros son:%d\n",j[i]);
	}
	
	
}
