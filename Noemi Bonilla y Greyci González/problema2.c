#include <stdio.h>
void main () {
	int i, n, num[100], mayor=0, menor=0;
	printf("Ingrese la cantidad de numeros a evaluar\n");
	scanf("%d", &n);
	printf("\n\n");
	printf("Introduzca los valores (separados por salto de linea)\n");
	for (i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
	}
	mayor=num[0];
	menor=num[0];
	for (i=0; i<n; i++)	
	{
	if (num[i]>mayor)
	{
		mayor=num[i];
	}
	if (num[i]<menor)
	{
		menor=num[i];
	}
    }
	printf("El valor maximo es: %d", mayor);
	printf("\n");
	printf("El valor minimo es: %d", menor);
}
