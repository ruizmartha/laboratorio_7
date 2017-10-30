#include<stdio.h>
void main(){
	int n, i,can[100],min=0,max=0;
	printf("introduzca un valor:  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("introduzca el valor: \n");
    scanf("%d",&can[i]);	
}
max=can[0];
min=can[0];
	for(i=0;i<n;i++){
	
	if(can[i]<max){
	max=can[i];
}
    if(can[i]>min)
	{
    min=can[i];
}
}

printf("el valor maximo es: %d \n",max);
printf("el valor minimo es: %d \n",min);
}
