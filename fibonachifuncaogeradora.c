#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Programa Fibonacci usando formula fechada
// Melhor complexidade:
// O(log n)
int fib_op(int x)
{
    double fibx =(1/sqrt(5))*((pow(((1+sqrt(5))/2),x)- pow(((1-sqrt(5))/2),x)));// fun��o matematica usada para a fun��o de recorrencia
    return fibx;//o intuito � n�o haver chamadas de recurs�o
}

/*O Programa main � apenas um teste para ver se o programa funciona certo com n�meros inteiros*/
int main ( int argc, char *argv[] )
{
    int n = atoi(argv[1]);
    printf("%d\n", fib_op(n));
    return 0;
}
