/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

#include<stdio.h>
int main(int argc, char** argv)
{

	float soma,i,u,s,n,m;

	i=1;
	u=1;

	printf("Digite os parâmetros N e M:\n");
	scanf("%f %f", &n,&m);

	do{
		s=i/u;
		printf("|%.2f|", s);

		i=i+1;
		u=u+2;
		soma=soma+s;
	}
	while(s!=n/m);

	printf("\nA soma dos termos é: |%.2f|\n",soma);

	return 0;
}

