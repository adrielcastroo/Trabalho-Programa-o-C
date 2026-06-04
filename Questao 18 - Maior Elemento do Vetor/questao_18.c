#include <stdio.h>			//Biblioteca padrão de C
#include <locale.h>			//Biblioteca necessária para usar acentuação em C

int main(){			//Função principal do código


	setlocale(LC_CTYPE, "Portuguese");			//Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int vetor[10];			//Declaração do vetor com 10 posições
	
	vetor[0] = 4;			//Atribuição de valor para a posição 0 do vetor
	vetor[1] = 9;			//Atribuição de valor para a posição 1 do vetor
	vetor[2] = 5;			//Atribuição de valor para a posição 2 do vetor
	vetor[3] = 6;			//Atribuição de valor para a posição 3 do vetor
	vetor[4] = 2;			//Atribuição de valor para a posição 4 do vetor
	vetor[5] = 45;			//Atribuição de valor para a posição 5 do vetor
	vetor[6] = 15;			//Atribuição de valor para a posição 6 do vetor
	vetor[7] = 22;			//Atribuição de valor para a posição 7 do vetor
	vetor[8] = 67;			//Atribuição de valor para a posição 8 do vetor
	vetor[9] = 11;			//Atribuição de valor para a posição 9 do vetor
	
	int maior = vetor[0];			//Variável "maior" assume que o maior valor está na posição 0
	int vasculhar = 0;			//Váriavel que irá localizar o maior valor dentro do vetor e armazená-lo
	int posicao = 0;			//Variável para guardar a posição do maior número encontrado no vetor
	
	
	
	for(vasculhar = 0; vasculhar<10; vasculhar++){			//O valor de vasculhar começa em "0", a função ficará em loop enquanto valor do vetor for menor que 10, irá sendo implementado +1 até a função chegar na ultima posição que é "10"
		
		if(vetor[vasculhar]>maior){			//Toda vez que a função "for" encontrar um valor maior que o anterior ela guardará esse valor e irá comparar com o valor da variavel "maior"
			maior = vetor[vasculhar];			//Caso encontre um valor maior do que o anterior será armazenado no lugar do antigo valor
			posicao = vasculhar;			//A variável "posicao" recebe o número da posição que o maior valor foi encontrado
		}
	}
	
	
	
	
	//Mostra o valor de cada posição do vetor
	printf("Aqui está o valor de cada posição do vetor:\nPosição 0: %d\nPosição 1: %d\nPosição 2: %d\nPosição 3: %d\nPosição 4: %d\nPosição 5: %d\nPosição 6: %d\nPosição 7: %d\nPosição 8: %d\nPosição 9: %d\n", 
	vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6], vetor[7], vetor[8], vetor[9]);			//Mostra o valor de cada posição do vetor
	
	
	printf("O maior valor do vetor é: %d\n", maior);			//Mostra o maior valor do vetor
	printf("A posição do maior valor no vetor é: %d", posicao);			//Mostra a posição que está localizado o maior valor do vetor
	
	return 0;			//Finaliza o código
	
}
