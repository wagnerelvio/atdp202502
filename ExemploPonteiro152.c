#include <stdio.h>

//Emdereços das variveis na memoria

int main() {
    int idade = 20;
    double y = 3.14;
    char z = 'A';
    float salario = 1320.20;

    printf("Endereço de x: %p\n", (void *)&idade);
    printf("Endereço de y: %p\n", (void *)&y);
    printf("Endereço de z: %p\n", (void *)&z);
    printf("Endereço de salario: %p\n", (void *)&salario);
    return 0;
}
