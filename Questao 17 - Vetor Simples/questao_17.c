#include <stdio.h>			//Biblioteca padrão de C
#include <locale.h>			//Biblioteca necessária para usar acentuação em C

int main(){			//Função principal do código


	setlocale(LC_CTYPE, "Portuguese");		//Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int vetor[5];			//Declaração do vetor com 5 posições
	
	vetor[0] = 4;			//Atribuição de valor para a posição 0 do vetor
	vetor[1] = 9;			//Atribuição de valor para a posição 1 do vetor
	vetor[2] = 5;			//Atribuição de valor para a posição 2 do vetor
	vetor[3] = 6;			//Atribuição de valor para a posição 3 do vetor
	vetor[4] = 2;			//Atribuição de valor para a posição 4 do vetor
	
	
	
	printf("Aqui está o valor de cada posição do vetor:\nPosição 0: %d\nPosição 1: %d\nPosição 2: %d\nPosição 3: %d\nPosição 4: %d\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);			//Mostra o valor de cada posição do vetor
	
	
	return 0;			//Finaliza o código
	
}
