#include <stdio.h>			//Biblioteca padrão de C
#include <locale.h>			//Biblioteca necessária para usar acentuação em C

int main(){			//Função principal do código


	setlocale(LC_CTYPE, "Portuguese");			//Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int matriz [3][3];			//Declaração do tamanho da matriz qu
	
	//Coluna 0
	matriz[0][0] = 1;			//Atribuição de valor para a linha 0 e coluna 0 da matriz
	matriz[0][1] = 2;			//Atribuição de valor para a linha 0 e coluna 1 da matriz
	matriz[0][2] = 3;			//Atribuição de valor para a linha 0 e coluna 2 da matriz
	
	//Coluna 1
	matriz[1][0] = 4;			//Atribuição de valor para a linha 1 e coluna 0 da matriz
	matriz[1][1] = 5;			//Atribuição de valor para a linha 1 e coluna 1 da matriz
	matriz[1][2] = 6;			//Atribuição de valor para a linha 1 e coluna 2 da matriz
	
	//Coluna 2
	matriz[2][0] = 7;			//Atribuição de valor para a linha 2 e coluna 0 da matriz
	matriz[2][1] = 8;			//Atribuição de valor para a linha 2 e coluna 1 da matriz
	matriz[2][2] = 9;			//Atribuição de valor para a linha 2 e coluna 2 da matriz
	
	
	printf("Aqui estão todos os valores da diagonal principal:\n%d\n%d\n%d\n", matriz[0][0], matriz[1][1], matriz[2][2]);
	
	return 0;			//Finaliza o código	
}
