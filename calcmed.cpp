#include <stdio.h>
#include <stdlib.h>

//Estudo de C, calculadora para fazer a media do aluno.

int main(int argc, char *argv[]) {
	
	float nota1,nota2,nota3,nota4,media;
	
	printf("MEDIA DO ALUNO\n");
	
	printf("\nDigite sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("\nDigite sua segunda nota: ");
	scanf("%f", &nota2);
	
	printf("\nDigite sua terceira nota: ");
	scanf("%f", &nota3);
	
	printf("\nDigite sua quarta nota: ");
	scanf("%f", &nota4);
	
	media=(nota1+nota2+nota3+nota4)/4;
	
	printf("\nA sua media e: %.2f\n", media);
	
	
	if(media<3){
		
		printf("\nReprovado.");
	}
	
	else if((media>=3) && (media<7)){
		
		printf("\nSelecionado para prova final.");
	} 
	
	else if(media>=7){
		
		printf("\nAprovado.");	
	}
	
	return 0;
}


