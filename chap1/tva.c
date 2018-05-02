#include "stdio.h"

#define TVA 15.0

float prix_TTC;

float ajoute_TVA(float prix_HT){
	return prix_HT * (1.0 + (TVA/100.0));
}
int main(int argc, char const *argv[])
{
	float HT =0.0;
	printf("Entrez le prix H.T. : ");
	scanf("%f",&HT);
	prix_TTC=ajoute_TVA(HT);
	printf("prix T.T.C : %.2f (TVA : %f%%)\n",prix_TTC,TVA);
	return 0;
}