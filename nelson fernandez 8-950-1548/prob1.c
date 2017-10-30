#include<stdio.h>
void main(){
	int n,i=0,num[100],j[100];
	printf("intriduzca un valor:  ");
	scanf("%d",&n);
	printf("introduzca los valores a evaluar: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	    j[i]=num[i];
	}
	
	for(i=0;i<n;i++){
	printf(" son: %d \n",j[i]);
}

 		
 

}



