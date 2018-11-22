#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int opcao=1, z, c;
	
	while(opcao!=0) {
			
	printf("\t******** Seja bem vindo ao assistente da linguagem C! ********\n");
	printf("\n[0] Encerrar o programa\n[1] Tipos\n[2] Variáveis\n[3] Operadores\n[4] If/else\n[5] While\n[6] Vetor\n");
	printf("\nSelecione uma opção: ");
	scanf("%d", &opcao);
  	 if (opcao==0){      //Encerra
  	 	   system("cls"); 	
		   printf("\t******** Obrigado! ********\n\n");	    	 	
		   break;
	   }
	switch(opcao){
	
	case 1:
		system("cls");   //Limpa tela
		printf("Os dados manipulados em linguagem C são tipados, ou seja," 
		" para cada dado usado (nas variáveis, por exemplo) é preciso" 
		" \nespecificar o tipo de dado, o que permite conhecer a ocupação"
		" da memória (o número de bytes) dos dados, assim como a \nsua"
		" representação. Os principais tipos são:  \n"
		"\n->Inteiro (int) - usado para representar números."
		"\n->Flutuante (float) - usado principalmente para números fracionados."
		"\n->Caractere (char) - representa letras.");
		printf("\n\nPressione 1 para continuar: ");
		scanf("%d", &z);
		system("CLS");  
		printf("->Vamos ver se você entendeu, qual o tipo utilizado para "
		"representar principalmente números fracionados? ");
		printf("\n[1] Int\n[2] Float\n[3] Char\n");
		scanf("%d", &c);
			if (c==2){
				printf("\nResposta correta!");
			}else{
				printf("\nResposta incorreta! A resposta correta é Float!");
			}
		printf("\n\nPressione 1 para continuar: ");
		scanf("%d", &z);	
		system("cls");		
		break;
		case 2:
			system("cls");
		   	printf("Variável é um local reservado na memória para armazenar"
			" um tipo de dado. Além de ter um nome, a variável também"
			" precisa ter um tipo. Todas as variáveis tem que ser declaradas"
			" antes de serem usadas, e em C, exigem ponto e vírgula no fim."
			"\n Exemplos:" 
			" \n int idade = 12;     -A variável idade é do tipo int, e vale 12."
			" \n float dolar = 3.79; -A variável dolar é do tipo float, e vale 3.79.");
			printf("\n\nPressione 1 para continuar: ");
		    scanf("%d", &z);
		    system("CLS");
   			printf("->No caso a seguir, a variável distancia foi declarada corretamente?"
			"\n float distancia = 120.54; ");
			printf("\n[1] Sim\n[2] Não\n");
			scanf("%d", &c);
				if (c==1){
					printf("Certo! Ela possui tipo, valor correspondente, e ponto e vírgula ao final.");
				}else{
					printf("Errado! Ela possui tipo, valor correspondente, e ponto e vírgula ao final, declaração correta!");
				}
			printf("\n\nPressione 1 para continuar: ");
		    scanf("%d", &z);	
		    system("cls");		
			break;
			case 3:
				system("cls");
		   		printf("Operadores são ferramentas muito utilizadas em qualquer aplicação."
				" Existem três tipos de operadores, os operadores aritméticos,"
				" lógicos, e relacionais. "
				"\n\n Aritméticos: \n(-)Subtração\n(+)Adição\n(*)Multiplicação\n(/)Divisão"
				"\n\n Lógicos: \n(&&)E\n(||)Ou\n(!)Negação"
				"\n\n Relacionais: \n(==)Igual a\n(!=)Diferente\n(>)Maior que\n(<)Menor que"
				"\n(>=)Maior ou igual\n(<=)Menor ou igual");
				printf("\n\nPressione 1 para continuar: ");
		        scanf("%d", &z);
		        system("CLS");
		        printf("->Analise a seguinte linha de código e diga quais tipos de operadores"
				" foram usados:"
				"\n a+b >= b/a");
				printf("\n[1]Aritmético e lógico.\n[2]Lógico e Relacional.\n[3]Aritmético e relacional.\n");
			   	scanf("%d", &c);
			   		if (c==3){
						   printf("\nCorreto! Foram usados operadores aritméticos e relacionais.");
					}else{
						printf("\nIncorreto! Foram usados operadores aritméticos e relacionais.");
					}
               printf("\n\nPressione 1 para continuar: ");
		       scanf("%d", &z);	
		       system("cls");
			   break;
               case 4:
					system("cls");
		   			printf("São estruturas que controlam o fluxo do programa, executando"
					" tarefas de acordo com as condições declaradas. Podem ser\n"
					" encadeados para realizar diversas opções de caminhos."
					" \nExemplo: "
					"\n int a = 3 , b = 4;"
					"\n if (a>b){ \nprintf(A é maior que B)"
					"\n }else { \nprintf(A é menor que B)"
					"\n\n -Diante do teste, a é menor que b, logo, cai no else.");
					printf("\n\nPressione 1 para continuar: ");
		            scanf("%d", &z);
		            system("CLS");
		            printf("->Entendeu? Então responda corretamente qual printf foi executado diante"
					" do seguinte código: " 
					"\n int a = 10, b = 2;"
					"\n if ( a/b <= 5) {"
					"\nprintf (Resultado menor ou igual a 5!)"
					"\n} else {"
					"\nprintf (Resultado maior que 5!)\n");
					printf("\n[1] printf(Resultado menor ou igual a 5!)\n[2] printf (Resultado maior que 5!)\n");
					scanf("%d", &c);
						if (c==1){
							printf("\nResposta correta!");
						}else {
							printf("\nResposta incorreta! a/b é 5, e o primeiro printf representa isso.");
						}
	                printf("\n\nPressione 1 para continuar: ");
		            scanf("%d", &z);	
                    system("cls");	
					break;
					case 5:
						system("cls");
		   				printf("O while é uma estrutura de repetição que executa um bloco"
						" de instruções enquanto uma condição for verdadeira."
                        " Semelhanteao if, porém, executa mais de uma vez e até que a"
						" condição seja falsa. Se mal implementada, pode gerar loop infinito." 
						" \nExemplo: "
						"\n int rep=1; "
						"\n while (rep <=10 { "
						" \nprintf(d, rep);"
						"\nrep++; //Atualiza a variavel rep"
						"\n}");
						printf("\n -Exibe o valor de rep ( 1 a 10) até que a variável seja incrementada até 10, finalizando o while.");
						printf("\n\nPressione 1 para continuar: ");
		                scanf("%d", &z);
		                system("CLS");
		                printf("->Avalie se o seguinte código funciona corretamente: "
						"\n int contador = 1; "
						"\n while (contador <=10) {"
						"\nprintf(Contador vale )"
						"\n}");
						printf("\n[1] Funciona corretamente.\n[2] Não funciona corretamente.\n");
						scanf("%d", &c);
							if (c==2){
								printf("\nResposta correta! Sem a atualização da variável, essa estrutura cria um problema loop infinito.");
							}else{
								printf("\nResposta incorreta! Sem a atualização da variável, essa estrutura cria um problema loop infinito.");
							}
							 printf("\n\nPressione 1 para continuar: ");
		                     scanf("%d", &z);	
                             system("cls");	
						break;
						case 6:
							system("cls");
		   					printf("Vetor é uma estrutura que pode armazenar uma determinada quantidade"
							" de valores do mesmo tipo. Dados armazenados em um \nvetor são chamados de itens "
							" do vetor e possuem uma localização específica, que é representada por um número"
							"\ninteiro denominado índice do vetor." 
							" \n Exemplo: "
							" \n int notas[4] = {7,2,5,1}; "
							" \n -Declarando e inicializando valores para o vetor notas."
							" \n printf(notas[0] = d, notas[0]);"
							" \n -Mostrando na tela o valor de índice 0, número 7.");
							printf("\n\nPressione 1 para continuar: ");
		                    scanf("%d", &z);
		                    system("CLS");
		                    printf("->Diante do vetor a seguir, indique qual o índice dos números 2, 5, 7:"
							" \n int valores[5] = {2, 3, 4, 5, 7}\n");
							printf("\n[1] 0, 1, 2\n[2] 0, 2, 4\n[3] 0, 3, 4\n[4] 1, 4, 5\n");
							scanf("%d", &c);
								if (c==3){
									printf("\nResposta certa! O primeiro valor atribuído ao vetor sempre tem índice 0, seguido por ordem crescente.");
								}else{
									printf("\nResposta errada! O primeiro valor atribuído ao vetor sempre tem índice 0, seguido por ordem crescente."
									"\n A resposta certa é a [3] 0, 3, 4.");
								}
							printf("\n\nPressione 1 para continuar: ");
		                    scanf("%d", &z);	
                            system("cls");		
							break;
	
		default:
		printf("Valor digitado inválido!");
		printf("\n\nPressione 1 para continuar: ");
	    scanf("%d", &z);
		system("cls");
		break;
			}
		
		}
	return 0;
	
}

