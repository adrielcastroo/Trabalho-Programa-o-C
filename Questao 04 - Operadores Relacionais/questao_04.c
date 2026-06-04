#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main(){ //Função principal do código
	
	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	int num0, num1; //Váriaveis dos dois numeros
	
	printf("Digite dois números: \n"); //Solicita inserção de dois números inteiros
	scanf("%d" "%d", &num0 , &num1);	//Armazena os dois números inteiros
	
	printf("Os dois números são IGUAIS?\nResultado:%d\n", num0==num1); //Identifica se os dois valores são iguais
	printf("O PRIMEIRO número é maior que o segundo?\nResultado:%d\n", num0>num1); //Identifica se o PRIMEIRO valor é maior
	printf("O SEGUNDO número é maior que o primeiro?\nResultado:%d\n\n0=Não\n1=Sim", num0<num1); //Identifica se o SEGUNDO valor é maior
	
	return 0; //Finalização do código
	
}
