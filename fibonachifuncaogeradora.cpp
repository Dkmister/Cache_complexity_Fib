#include <math.h>
#include <iostream>

#include <cstdlib>
// Programa Fibonacci usando formula fechada
using namespace std;
// Melhor complexidade:
// O(log n)
double fib_op(int x)
{
    double fibx =(1/sqrt(5))*((pow(((1+sqrt(5))/2),x)- pow(((1-sqrt(5))/2),x)));// fun��o matematica usada para a fun��o de recorrencia
    return fibx;//o intuito � n�o haver chamadas de recurs�o
}

/*O Programa main � apenas um teste para ver se o programa funciona certo com n�meros inteiros*/
int main()
{
    int n;
    double resultado;
    cout << "Digite um numero\n";
    cin >> n;
    cout << "Resultado: "<<fib_op(n)<<"";
    return 0;
}
