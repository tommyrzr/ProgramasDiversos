#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void MediaEnemComPeso(){
	
	int pesototal=0, pesoch, pesoce, pesolig, pesocn, pesore; /*Pesos referentes as materias do enem*/
	float notatotal, notach, notace, notalig, notacn, notare; /*Notas referentes a cada materia do enem e a media final dividida pela quantidade de materias do enem*/
	
	/*Inicio Linguagens*/
	
	printf("Digite a nota de Linguagens, C�digos e suas Tecnologias: \n");
	scanf("%f", &notalig);
	printf("Qual o peso?: \n");
	scanf("%d", &pesolig);
	notatotal = (notalig*pesolig)+notatotal;
	pesototal = pesototal+pesolig;
	
	/*Fim Linguagens*/
	
	/*Inicio Ciencias humanas*/
	
	printf("Digite a nota de Ci�ncias Humanas e suas Tecnologias: \n");
	scanf("%f", &notach);
	printf("Qual o peso?: \n");
	scanf("%d", &pesoch);
	notatotal = (notach*pesoch)+notatotal;
	pesototal = pesototal+pesoch;
	
	/*Fim ciencias humanas*/
	
	/*Inicio Ciencias humanas*/
	
	printf("Digite a nota de Ci�ncias da Natureza e suas Tecnologias: \n");
	scanf("%f", &notacn);
	printf("Qual o peso?: \n");
	scanf("%d", &pesocn);
	notatotal = (notacn*pesocn)+notatotal;
	pesototal = pesototal+pesocn;
	
	/*Fim ciencias humanas*/
	
	/*Inicio Matem�tica*/
	
	printf("Digite a nota de Matem�tica e suas Tecnologias: \n");
	scanf("%f", &notace);
	printf("Qual o peso?: \n");
	scanf("%d", &pesoce);
	notatotal = (notace*pesoce)+notatotal;
	pesototal = pesototal+pesoce;
	
	/*Fim Matem�tica*/
	
	/*Inicio Reda��o*/
	
	printf("Digite a nota de Reda��o: \n");
	scanf("%f", &notare);
	printf("Qual o peso?: \n");
	scanf("%d", &pesore);
	notatotal = (notare*pesore)+notatotal;
	pesototal = pesototal+pesore;
	
	/*Fim Reda��o*/
	
	notatotal = notatotal/pesototal;
	
	printf("A sua media do enem com os pesos adicionados �: %2.f \n", notatotal);

	
}

void MediaEnemSemPeso(){
	
	float notatotal, notach, notace, notalig, notacn, notare;
	
	/*Inicio Linguagens*/
	
	printf("Digite a nota de Linguagens, C�digos e suas Tecnologias: \n");
	scanf("%f", &notalig);
	notatotal = notalig+notatotal;
	
	/*Fim Linguagens*/
	
	/*Inicio Ciencias humanas*/
	
	printf("Digite a nota de Ci�ncias Humanas e suas Tecnologias: \n");
	scanf("%f", &notach);
	notatotal = notach+notatotal;
	
	/*Fim ciencias humanas*/
	
	/*Inicio Ciencias humanas*/
	
	printf("Digite a nota de Ci�ncias da Natureza e suas Tecnologias: \n");
	scanf("%f", &notacn);
	notatotal = notacn+notatotal;
	
	/*Fim ciencias humanas*/
	
	/*Inicio Matem�tica*/
	
	printf("Digite a nota de Matem�tica e suas Tecnologias: \n");
	scanf("%f", &notace);
	notatotal = notace+notatotal;
	
	/*Fim Matem�tica*/
	
	/*Inicio Reda��o*/
	
	printf("Digite a nota de Reda��o: \n");
	scanf("%f", &notare);
	notatotal = notare+notatotal;
	
	/*Fim Reda��o*/
	
	notatotal = notatotal/5;
	
	printf("A sua media do enem sem pesos �: %2.f \n", notatotal);
	
	
	
}

main() {
	
	int op=0, escolha;
	
	setlocale(LC_ALL,"portuguese");

	while(op==0){
		
		printf("Ol� estudante! \nComo voc� gostaria de calcular a sua nota do enem? \nDigite o numero da op��o correspondente a sua escolha: \n1 - Media com peso. \n2 - Media sem peso. \n3 - Sair. \nDigite: \n");
		scanf("%d", &escolha);
		if(escolha==1){
			MediaEnemComPeso();
			system("pause");
			system("cls");
		}
		else if(escolha==2){
			MediaEnemSemPeso();
			system("pause");
			system("cls");
		}
		else{
			printf("Voc� escolheu sair. Obrigada por usar o programa! \n");
			op=1;
		}
		
	}
	
	return 0;
}
