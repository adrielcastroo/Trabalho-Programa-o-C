#include <stdio.h>			//Biblioteca padrão de C
#include <locale.h>			//Biblioteca necessária para usar acentuação em C

int main(){			//Função principal do código


	setlocale(LC_CTYPE, "Portuguese");			//Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int matriz [2][2];			//Declaração do tamanho da matriz que terá 2 linhas e 2 colunas
	
	matriz[0][0] = 1;			//Atribuição de valor para a linha 0 e coluna 0 da matriz
	matriz[0][1] = 2;			//Atribuição de valor para a linha 0 e coluna 1 da matriz
	matriz[1][0] = 3;			//Atribuição de valor para a linha 1 e coluna 0 da matriz
	matriz[1][1] = 4;			//Atribuição de valor para a linha 1 e coluna 1 da matriz
	
	int soma_matriz = matriz[0][0] + matriz[0][1] + matriz[1][0] + matriz[1][1];			//Soma o valor de todas as posições da matriz
	
	printf("Aqui está o valor de cada posição da matriz:\nLinha 0 e Coluna 0: %d\nLinha 1 e Coluna 0: %d\nLinha 0 e Coluna 1: %d\nLinha 1 e Coluna 1: %d\n", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);			////Mostra o valor de todas as posições da matriz
	
	printf("A soma de todos os valores da matriz é: %d", soma_matriz);			//Mostra a soma de todas as posições da matriz
	
	
	return 0;			//Finaliza o código
}
