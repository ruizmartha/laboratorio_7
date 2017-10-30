#include<stdio.h>

void main(){
	int n,arreglo[n],x,menor,mayor;
	
	printf("Introduzca la cantidad de numeros ");
	scanf("%d",&x);
	
	for(n=0; n<x; n++){
		printf("\n Introduzca el numero: ");
		scanf("%d",&arreglo[n]);
	}
	menor= arreglo[0];
	mayor= arreglo[0];
	
	for(n=0; n<x; n++){
		if(arreglo[n]>mayor){
		mayor=arreglo[n];}
	else if(arreglo[n]<menor){
		menor=arreglo[n];
	}
	}
	printf("menor es: %d\nmayor es: %d",menor,mayor);
}
