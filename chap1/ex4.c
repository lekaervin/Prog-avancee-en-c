#include <stdio.h>

#define NB 3 

int main(int argc, char const *argv[])
{
	int n , somme =0, i =0;
	while(i < NB){
		printf("Entrez un entier : ");
		scanf("%d",&n);
		somme += n;
		i++;
	}
	printf("Somme des entiers entré : %d\n",somme);
	return 0;
}