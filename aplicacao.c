#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int opcao=1, z, c;
	
	while(opcao!=0) {
			
	printf("\t******** Seja bem vindo ao assistente da linguagem C! ********\n");
	printf("\n[0] Encerrar o programa\n[1] Tipos\n[2] Vari�veis\n[3] Operadores\n[4] If/else\n[5] While\n[6] Vetor\n");
	printf("\nSelecione uma op��o: ");
	scanf("%d", &opcao);
  	 if (opcao==0){      //Encerra
  	 	   system("cls"); 	
		   printf("\t******** Obrigado! ********\n\n");	    	 	
		   break;
	   }
	switch(opcao){
	
	case 1:
		system("cls");   //Limpa tela
		printf("Os dados manipulados em linguagem C s�o tipados, ou seja," 
		" para cada dado usado (nas vari�veis, por exemplo) � preciso" 
		" \nespecificar o tipo de dado, o que permite conhecer a ocupa��o"
		" da mem�ria (o n�mero de bytes) dos dados, assim como a \nsua"
		" representa��o. Os principais tipos s�o:  \n"
		"\n->Inteiro (int) - usado para representar n�meros."
		"\n->Flutuante (float) - usado principalmente para n�meros fracionados."
		"\n->Caractere (char) - representa letras.");
		printf("\n\nPressione 1 para continuar: ");
		scanf("%d", &z);
		system("CLS");  
		printf("->Vamos ver se voc� entendeu, qual o tipo utilizado para "
		"representar principalmente n�meros fracionados? ");
		printf("\n[1] Int\n[2] Float\n[3] Char\n");
		scanf("%d", &c);
			if (c==2){
				printf("\nResposta correta!");
			}else{
				printf("\nResposta incorreta! A resposta correta � Float!");
			}
		printf("\n\nPressione 1 para continuar: ");
		scanf("%d", &z);	
		system("cls");		
		break;
		case 2:
			system("cls");
		   	printf("Vari�vel � um local reservado na mem�ria para armazenar"
			" um tipo de dado. Al�m de ter um nome, a vari�vel tamb�m"
			" precisa ter um tipo. Todas as vari�veis�tem que ser declaradas"
			" antes�de serem usadas, e em C, exigem ponto e v�rgula no fim."
			"\n Exemplos:" 
			" \n int idade = 12;     -A vari�vel idade � do tipo int, e vale 12."
			" \n float dolar = 3.79; -A vari�vel dolar � do tipo float, e vale 3.79.");
			printf("\n\nPressione 1 para continuar: ");
		    scanf("%d", &z);
		    system("CLS");
   			printf("->No caso a seguir, a vari�vel distancia foi declarada corretamente?"
			"\n float distancia = 120.54; ");
			printf("\n[1] Sim\n[2] N�o\n");
			scanf("%d", &c);
				if (c==1){
					printf("Certo! Ela possui tipo, valor correspondente, e ponto e v�rgula ao final.");
				}else{
					printf("Errado! Ela possui tipo, valor correspondente, e ponto e v�rgula ao final, declara��o correta!");
				}
			printf("\n\nPressione 1 para continuar: ");
		    scanf("%d", &z);	
		    system("cls");		
			break;
			case 3:
				system("cls");
		   		printf("Operadores s�o ferramentas muito utilizadas em qualquer aplica��o."
				" Existem tr�s tipos de operadores, os operadores aritm�ticos,"
				" l�gicos, e relacionais. "
				"\n\n Aritm�ticos: \n(-)Subtra��o\n(+)Adi��o\n(*)Multiplica��o\n(/)Divis�o"
				"\n\n L�gicos: \n(&&)E\n(||)Ou\n(!)Nega��o"
				"\n\n Relacionais: \n(==)Igual a\n(!=)Diferente\n(>)Maior que\n(<)Menor que"
				"\n(>=)Maior ou igual\n(<=)Menor ou igual");
				printf("\n\nPressione 1 para continuar: ");
		        scanf("%d", &z);
		        system("CLS");
		        printf("->Analise a seguinte linha de c�digo e diga quais tipos de operadores"
				" foram usados:"
				"\n a+b >= b/a");
				printf("\n[1]Aritm�tico e l�gico.\n[2]L�gico e Relacional.\n[3]Aritm�tico e relacional.\n");
			   	scanf("%d", &c);
			   		if (c==3){
						   printf("\nCorreto! Foram usados operadores aritm�ticos e relacionais.");
					}else{
						printf("\nIncorreto! Foram usados operadores aritm�ticos e relacionais.");
					}
               printf("\n\nPressione 1 para continuar: ");
		       scanf("%d", &z);	
		       system("cls");
			   break;
               case 4:
					system("cls");
		   			printf("S�o estruturas que controlam o fluxo do programa, executando"
					" tarefas de acordo com as condi��es declaradas. Podem ser\n"
					" encadeados para realizar diversas op��es de caminhos."
					" \nExemplo: "
					"\n int a = 3 , b = 4;"
					"\n if (a>b){ \nprintf(A � maior que B)"
					"\n }else { \nprintf(A � menor que B)"
					"\n\n -Diante do teste, a � menor que b, logo, cai no else.");
					printf("\n\nPressione 1 para continuar: ");
		            scanf("%d", &z);
		            system("CLS");
		            printf("->Entendeu? Ent�o responda corretamente qual printf foi executado diante"
					" do seguinte c�digo: " 
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
							printf("\nResposta incorreta! a/b � 5, e o primeiro printf representa isso.");
						}
	                printf("\n\nPressione 1 para continuar: ");
		            scanf("%d", &z);	
                    system("cls");	
					break;
					case 5:
						system("cls");
		   				printf("O while � uma estrutura de repeti��o que executa um bloco"
						" de instru��es enquanto uma condi��o for verdadeira."
                        " Semelhanteao if, por�m, executa mais de uma vez e at� que a"
						" condi��o seja falsa. Se mal implementada, pode gerar loop infinito." 
						" \nExemplo: "
						"\n int rep=1; "
						"\n while (rep <=10 { "
						" \nprintf(d, rep);"
						"\nrep++; //Atualiza a variavel rep"
						"\n}");
						printf("\n -Exibe o valor de rep ( 1 a 10) at� que a vari�vel seja incrementada at� 10, finalizando o while.");
						printf("\n\nPressione 1 para continuar: ");
		                scanf("%d", &z);
		                system("CLS");
		                printf("->Avalie se o seguinte c�digo funciona corretamente: "
						"\n int contador = 1; "
						"\n while (contador <=10) {"
						"\nprintf(Contador vale )"
						"\n}");
						printf("\n[1] Funciona corretamente.\n[2] N�o funciona corretamente.\n");
						scanf("%d", &c);
							if (c==2){
								printf("\nResposta correta! Sem a atualiza��o da vari�vel, essa estrutura cria um problema loop infinito.");
							}else{
								printf("\nResposta incorreta! Sem a atualiza��o da vari�vel, essa estrutura cria um problema loop infinito.");
							}
							 printf("\n\nPressione 1 para continuar: ");
		                     scanf("%d", &z);	
                             system("cls");	
						break;
						case 6:
							system("cls");
		   					printf("Vetor � uma estrutura que pode armazenar uma determinada quantidade"
							" de valores do mesmo tipo. Dados armazenados em um \nvetor s�o chamados de itens "
							" do vetor e possuem uma localiza��o espec�fica, que � representada por um n�mero"
							"\ninteiro denominado �ndice do vetor." 
							" \n Exemplo: "
							" \n int notas[4] = {7,2,5,1}; "
							" \n -Declarando e inicializando valores para o vetor notas."
							" \n printf(notas[0] = d, notas[0]);"
							" \n -Mostrando na tela o valor de �ndice 0, n�mero 7.");
							printf("\n\nPressione 1 para continuar: ");
		                    scanf("%d", &z);
		                    system("CLS");
		                    printf("->Diante do vetor a seguir, indique qual o �ndice dos n�meros 2, 5, 7:"
							" \n int valores[5] = {2, 3, 4, 5, 7}\n");
							printf("\n[1] 0, 1, 2\n[2] 0, 2, 4\n[3] 0, 3, 4\n[4] 1, 4, 5\n");
							scanf("%d", &c);
								if (c==3){
									printf("\nResposta certa! O primeiro valor atribu�do ao vetor sempre tem �ndice 0, seguido por ordem crescente.");
								}else{
									printf("\nResposta errada! O primeiro valor atribu�do ao vetor sempre tem �ndice 0, seguido por ordem crescente."
									"\n A resposta certa � a [3] 0, 3, 4.");
								}
							printf("\n\nPressione 1 para continuar: ");
		                    scanf("%d", &z);	
                            system("cls");		
							break;
	
		default:
		printf("Valor digitado inv�lido!");
		printf("\n\nPressione 1 para continuar: ");
	    scanf("%d", &z);
		system("cls");
		break;
			}
		
		}
	return 0;
	
}

