/******************************************************************************

Crie um programa que solicita, inicialmente, o saldo (em reais) de determinada conta corrente. 
Em seguida, apresente duas opções para o usuário escolher:
1. Realizar um saque
2. Realizar um depósito
Em ambos os casos (saque ou depósito), 
solicite o valor a ser utilizado na operação (valor a sacar ou valor a depositar). 
Sabendo que não é possível depositar mais do que R$300,00 de uma vez e que a conta não possui cheque especial, 
mostre na tela o resultado da operação realizada (sucesso ou insucesso) e o saldo final da conta após a operação.


*******************************************************************************/
#include <stdio.h>


int main() {
    float saldo, valor_operacao;
    int opcao;

    printf("Digite o saldo inicial da conta (em reais): ");
    scanf("%f", &saldo);

    printf("\nEscolha uma opção:\n");
    printf("1. Realizar um saque\n");
    printf("2. Realizar um depósito\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor a ser sacado: ");
            scanf("%f", &valor_operacao);
            if (valor_operacao > saldo) {
                printf("Saldo insuficiente. Saque não realizado.\n");
            } else {
                saldo -= valor_operacao;
                printf("Saque realizado com sucesso.\n");
            }
            break;
        case 2:
            printf("Digite o valor a ser depositado: ");
            scanf("%f", &valor_operacao);
            if (valor_operacao > 300.0) {
                printf("Valor máximo de depósito excedido. Depósito não realizado.\n");
            } else {
                saldo += valor_operacao;
                printf("Depósito realizado com sucesso.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            return 1; 
    }

    printf("Saldo final da conta: R$%.2f\n", saldo);


    return 0;
}
