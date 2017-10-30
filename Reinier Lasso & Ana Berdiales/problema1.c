// Escriba un programa que pida n cantidad de numeros a evaluar los guarde en un arreglo y luego los pase a otro nuevo arreglo
//que imprima todos los elementos de ese segundo arreglo 
#include<stdio.h>
void main ()
{
	int a, i,j[100],num[100];
    printf ("Introduzca la cantidad de numeros a evaluar\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    printf("Introduzca el numero \n");
	scanf("%d",&num[i]);
	j[i]=num[i];
    }
    printf ("Los valores son:\n");
    for(i=0;i<a;i++)
	printf("%d\n",j[i]);	
}
