/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade = 30;
    printf("O tamanho da variável 'idade' em bytes é: %zu\n", sizeof(idade));
    
    double salario = 45000.50;
    printf("O tamanho da variável 'salario' em bytes é: %zu\n", sizeof(salario));
    
    return 0;
}
