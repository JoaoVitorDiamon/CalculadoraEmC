#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	int opcao;
	int operacao;
	float numero1;
	float numero2;
	float total;
	
	opcao=1;
 	while (opcao==1){
 		//operaçoes
 		printf ("Digite 1 para Multiplicacao \n");
 		printf ("Digite 2 para Adicao \n");
 		printf ("Digite 3 para Subtracao \n");
 		printf ("Digite 4 para Divisao \n");
 		scanf("%d", &operacao);
 		
 		//numeros
 		printf("Digite um Numero: ");
 		scanf("%f", &numero1);
 		printf("Digite outro Numero: ");
 		scanf ("%f", &numero2);
 		
 
 		//switch
 		switch (operacao){
 			case 1:
 			total = numero1 * numero2;
 			break;
 			
 			case 2:
 			total = numero1 + numero2;
 			break;
 			
 			case 3:
 			total = numero1 - numero2;
 			break;
 			
 			case 4:
 			total = numero1 / numero2;
 			break;
		 }
		 
		 //resultados
		 printf("o total de sua operacao: %.2f \n", total);
		 	printf("Se quiser continuar digite 1,caso queira terminar sua operaçao digite 2 \n");
		 	scanf("%d", &opcao);
	 }
	 	

		 return 0;
}


