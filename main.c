#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero1 ;
	int numero2;
	int total;
	printf("Digite um valor para o numero1:\n");
	scanf("%d",&numero1);
	printf ("Digite um valor para o numero2:\n");
	scanf("%d",&numero2);
	total = numero1 + numero2;
	
	if(total+10){
		printf("O Valor total e maior que 10");
	}else {
		if (total<0){
			printf("numero negativo");
		}
		else {
			printf("Valor menor que 10");
		}
	}
	return 0;
}


