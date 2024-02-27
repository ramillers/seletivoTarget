/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o 
próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule 
a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

#include <stdio.h>

int verificaFibonacci(int num) {
    int a = 0, b = 1, temp;

    while (b < num) {
        temp = b;
        b = a + b;
        a = temp;
    }

    // Se o número fornecido for igual a b, então está na sequência de Fibonacci
    if (b == num)
        return 1; 
    else
        return 0; 
}

int main() {
    int num;
  
    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &num);

    if (verificaFibonacci(num))
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);

    return 0;
}