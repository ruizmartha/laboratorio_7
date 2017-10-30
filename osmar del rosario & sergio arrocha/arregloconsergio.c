#include<stdio.h>
void main(){
	int i, num[100], n, max=0, min=500000;
	
	printf("Introduzca la cantidad a evaluar: \t");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Introduzca un valor: \t");
	scanf("%d",&num[i]);
	
	
	if(num[i]>max){
		max=num[i];
}
	if (num[i]<min){
		min=num[i];
}
}
printf("El numero mayor es: %d", max);
printf("*\t*\t*\t*\t*");
printf("El numero menor es: %d", min);
	


}
