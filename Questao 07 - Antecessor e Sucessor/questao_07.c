#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main (){ //Função principal do código
	
	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int num; //Váriavel do número que será incluído
	int sub = 1; //Variável para fazer a subtração e soma. para mostrar o antecessor e sucessor do número
	
	printf("Digite um número: \n"); //Solicita inserção de um número inteiro
	scanf("%d", &num); //Armazena o número inteiro
	
	printf("Aqui está o antecessor do seu número: %d\n", num-sub); //Mostra o antecessor após subtrair o valor por 1
	printf("Aqui está o sucessor do seu número: %d\n", num+sub); //Mostra o sucessor após somar o valor por 1
	
	
	return 0; //Finaliza o código
}
