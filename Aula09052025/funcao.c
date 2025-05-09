 #include<stdio.h>
 #include<stdlib.h>
 #define Q '#'
 #define V ' '
 //Programa-- funcao-1004- 09/05/2022
 //Inicio da funcao imagem
 void imagem()
 {

printf("%c%c%c%c%c%c%c%c\n", Q,Q,Q,Q,Q,Q,Q,Q);
printf("%c%c%c%c%c%c%c%c\n", Q,V,Q,Q,Q,Q,V,Q);
printf("%c%c%c%c%c%c%c%c\n", Q,V,Q,Q,Q,Q,V,Q);
printf("%c%c%c%c%c%c%c%c\n", Q,Q,Q,Q,Q,Q,Q,Q);
printf("\n");

}
//Funcao main
int main()
{

imagem();
return 0;
}
