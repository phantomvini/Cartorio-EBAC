#include <stdio.h> //comunica��o com usu�rio
#include <stdlib.h> //aloca��o de espa�o em mem�ria
#include <locale.h> //aloca��o de texto por regi�o
#include <string.h> //strings

int registro ()
{
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf ("Digite o CPF a ser cadastrado: ");
	scanf ("%s", cpf);
	
	strcpy (arquivo, cpf); //Respons�vel por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen (arquivo, "w"); //cria o arquivo
	fprintf (file,cpf); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf ("Digite o nome a ser cadastrado:");
	scanf ("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf ("Digite o sobrenome a ser cadastrado:");
	scanf ("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf ("Digite o cargo a ser cadastrado:");
	scanf ("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	system ("pause");
	
}

int consulta ()
{
	setlocale (LC_ALL, "Portuguese"); //Linguagem
	
	char cpf [40];
	char conteudo [200];
	
	printf ("Digite o CPF a ser consultado: ");
	scanf ("%s", cpf);
	
	FILE *file;
	file = fopen (cpf, "r");
	
	if(file == NULL)
	{
		printf("Arquivo n�o localizado\n");
	}
	
	
	while (fgets(conteudo, 200, file) != NULL)
	{
		printf ("\nEssas s�o as informa��es do usu�rio: ");
		printf ("%s", conteudo);
		printf ("\n\n");
	}
	system ("pause");
}

int deletar ()
{
	char cpf [40];
	
	printf ("Digite o CPF do usu�rio a ser deletado: ");
	scanf ("%s", cpf);
	
	remove (cpf);
	
	FILE *file;
	file = fopen (cpf, "r");
	
	if(file == NULL)
	{
		printf ("O usu�rio n�o se encontra no sistema!\n");
		system ("pause");
	}
	
}


int main ()
{
		int opcao=0;//Definindo vari�veis!
	int x=1;
	
	for (x=1;x=1;)
	{

	
	setlocale (LC_ALL, "Portuguese"); //Linguagem
	
	system ("cls");
	
	printf ("### Cart�rio da EBAC ###\n\n");
	printf ("Escolha a op��o desejada do menu\n\n");
	printf ("\t1 - Registrar nomes\n");
	printf ("\t2 - Consultar nomes\n");
	printf ("\t3 - Deletar nomes\n\n");
	printf ("\t4 - Sair do sistema\n\n");
	printf ("Este software � de livre propriedade dos alunos\n");
	printf ("Op��o:");
	scanf ("%d", &opcao);//Armazenando escolha
	
	system("cls");
	
	switch(opcao)
	{
	
		case 1:
		registro();
		break;
	
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf ("Muito obrigado por utilizar o sistema!");
		return 0;
		break;
		
		default:
     	printf ("Escolha uma op��o v�lida\n");
		system ("pause");	
		break;	
	
}
	

	
}
}


