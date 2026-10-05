#include<stdio.h>
#include<stdbool.h>
int main (){
	int menu;
	bool cont = true;
	float saldo =129;
	float deposito;
	float saque;
	
	
	while (cont){
		printf ("1 consultar saldo\n");
	printf ("2 realizar deposito\n");
	printf ("3 realizar saque\n");
	printf ("4 sair\n");
	scanf ("%d",&menu);
		if (menu == 1){
	
		printf ("saldo disponivel eh %.2f\n",saldo);
		} 
		if (menu == 2){
			printf ("faca o seu deposito\n");
			scanf ("%f",&deposito);
			saldo = deposito + saldo;
			printf ("novo saldo eh %.2f\n",saldo);
			
		}
		if (menu == 3){
			printf ("faca seu saque\n");
			scanf ("%f",&saque);
			if (saque>saldo){
				printf ("saldo insuficiente\n");
			} else if (saque<=0){
				printf ("digite um valor valido\n");
			} else{
				saldo = saldo - saque;
				printf ("saque efetuado, novo saldo eh %.2f\n", saldo);
			}
			
	}
	if (menu == 4){
		cont = false;
		printf ("saindo\n");
	}
}
		
	
	
	
	return 0;
}
