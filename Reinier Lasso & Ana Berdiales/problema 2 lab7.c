#include<stdio.h>
void main()
{
	int v[100],cont=0,a,i,cont2=10000;
    printf("cuantos valores vas a evaluar? \n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
	printf("introduza valor: \n");
	scanf("%d",&v[i]);
  }
	for(i=0;i<a;i++)
	{
		if(v[i]>cont)
		{
			cont=v[i];
		}

		if(v[i]<cont2)
		{
			cont2=v[i];
		}

	}
		printf("el valor minimo es: %d\n",cont2);
		printf("el valor maximo es: %d\n",cont);
}



