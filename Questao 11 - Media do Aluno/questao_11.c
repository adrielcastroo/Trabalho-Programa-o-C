#include <stdio.h> //Biblioteca padrão de C
#include <locale.h> //Biblioteca necessária para usar acentuação em C

int main(){ //Função principal do código

	setlocale(LC_CTYPE, "Portuguese"); //Comando para usar português no programa. CTYPE é para restringir o português somente à variável do tipo CHAR.
	
	float nota1,nota2,nota3; //Váriaveis que irão receber os valores inseridos pelos usuários

	printf("Digite a nota da sua primeira prova:\n"); //Mostra a mensagem para o usuário inserir a nota da primeira prova
	scanf("%f", &nota1); //Armazena o valor da nota1

	printf("Digite a nota da sua primeira prova:\n"); //Mostra a mensagem para o usuário inserir a nota da segunda prova
	scanf("%f", &nota2); //Armazena o valor da nota2
	
	
	printf("Digite a nota da sua primeira prova:\n"); //Mostra a mensagem para o usuário inserir a nota da terceira prova
	scanf("%f", &nota3); //Armazena o valor da nota3
	
	float media = (nota1+nota2+nota3)/3; //calcula a média das notas do usuário
	
	if(media>=7){ //A condição irá verificar se a média é maior ou igual a 7.
		
		printf("APROVADO!!!"); //Se a média for maior ou igual a 7, mostra ao usuário que ele está aprovado.
		
	} else if(media<5){ //A condição irá verificar se a média é menor que 5.
		
		printf("REPROVADO!!!"); //Se a média for menor que 5, mostra ao usuário que ele está reprovado.
		
	} else { //Se não se encaixar em nenhuma condição, automáticamente ele está de recuperação.
	
		printf("RECUPERAÇÃO!!!"); //E se a nota estiver entre 5 e 6.9, mostra ao usuário que ele está de recuperação.
	}

	return 0; //Finaliza o código
}
