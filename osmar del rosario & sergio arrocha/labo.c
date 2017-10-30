#include<stdio.h>
void main(){
	
	int  i,n,j[100],k[100];
	
	printf("introduzca la cantidad valores:\n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("introduzca los valores:\n ");
		
		scanf("%d",&j[i]);
		
		   k[i]=j[i];
}
for(i=0;i<n;i++){	 
printf("\n\n");

	printf("los valores son %d \n", k[i]);
}
}



