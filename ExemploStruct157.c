#include <stdio.h>
#include <string.h>

//Exemplo de struct - 03

struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} alunos[5];

int main()
{
    int i;
    for (i = 1; i < 5; i++){
        printf("Informe a matricula do aluno %d: ", i);
        fgets(alunos[i].matricula,10, stdin);

        printf("Informe o nome aluno: %c", i);
        fgets(alunos[i].nome,100, stdin);

        printf("Informe o curso do aluno: ");
        fgets(alunos[i].curso, 50, stdin);

        printf("Informe o ano de nascimento do aluno: ");
        scanf("%d", &alunos[i].ano_nascimento);
        printf("\n*************************************\n ");
        getchar();
    }

    for (int i = 1; i < 5; i ++){
        printf("\n ********** Dados dos Alunos ************\n");
        printf("Matricula: %s \n", alunos[i].matricula);
        printf("Nome: %s \n", alunos[i].nome);
        printf("Curso: %s \n", alunos[i].curso);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
    }


    return 0;
}
