#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
	int opc=0;
	int cont=0;
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTitle("Abrir programas do computador");

	printf ("Escolha um programa para abrir:\n\n");
	printf ("\t1 - Bloco de notas;\n");
	printf ("\t2 - Paint;\n");
	printf ("\t3 - Microsoft Word;\n");
	printf ("\t4 - Notepad++;\n");
	printf ("\t5 - Explorador de Arquivos;\n");
	printf ("\t6 - Google Chrome;\n");
	printf ("\t7 - Monzila Firefox;\n");
	printf ("\t8 - Prompt de comando;\n\n");
	
	printf ("Sua Opção:\n");
	scanf ("%d", &opc);
	
	switch (opc){
		case 1:
			system ("start notepad");
			break;
		case 2:
			system ("start mspaint");
			break;
		case 3:
			system ("start winword");
			break;
		case 4:
			system ("start notepad++");
			break;
		case 5:
			system ("start explorer");
			break;
		case 6:
			system ("start chrome");
			break;
		case 7:
			system ("start firefox");
			break;
		case 8:
			system ("start cmd");
			break;
		case 0:
			system ("start control");
			break;
		default:
			printf ("\n\n Desculpe, esta opção é inválida.\n\n");
	}
	printf ("Deseja inicializar outro programa? (1 -> SIM, 0 -> NãO)\n\n");
	scanf ("%d", &cont);
	switch (cont){
		case 1:
			system ("start main");
			break;
		case 0:
			break;
	}
}