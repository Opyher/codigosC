#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, qntDiv = 0, cont = 0;
	int div[qntDiv];
	int dec[qntDiv];
	printf("Digite um numero: ");
	scanf("%d", &num);
	//DIVIDI O NUMERO AT� ELE SER 0
	//E COLOCA O RESULTADO DE CADA DIVIS�O EM UM VETOR
	while(num != 0){
		div[cont] = num;
		num = num / 2;
		qntDiv++;
		cont++;
	}
	printf("\n");
	//CONVERTE O NUMERO PARA DECIMAL
	for(int i = 0; i < qntDiv; i++){
		if(div[i] % 2 == 0){
			dec[i] = 0;
		} else {
			dec[i] = 1;
		}
	}
	//INVERTE A ORDEM DO VETOR
	printf("Em decimal �: ");
	for(int i = 0; i < qntDiv; i++){
		printf("%u", dec[qntDiv - i -1]);
	}
	
}

