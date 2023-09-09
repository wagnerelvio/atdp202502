#include <stdio.h>
#include <string.h>

//Exemplo de struct - 02

struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
};

int main()
{
    struct st_aluno aluno1;

    printf("Informe a matricula do aluno: ");
    fgets(aluno1.matricula,10, stdin);

    printf("Informe o nome aluno: ");
    fgets(aluno1.nome,100, stdin);

    printf("Informe o curso do aluno: ");
    fgets(aluno1.curso, 50, stdin);

    printf("Informe o nao de nascimento do aluno: ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("\n\n\n\n ********** Dados dos Alunos ************\n\n");
    printf("Matricula: %s \n", aluno1.matricula);
    printf("Nome: %s \n", aluno1.nome);
    printf("Curso: %s \n", aluno1.curso);
    printf("Ano de Nascimento: %d\n", aluno1.ano_nascimento);

    return 0;
}
