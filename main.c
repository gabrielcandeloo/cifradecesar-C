#include <stdio.h> // Bibliotecas utilizadas
#include <string.h> 

int main(void)

{
    // Variáveis utilizadas
    
    // Palavra
    char palavra_secreta[16];
    printf("Digite a palavra secreta: ");
    scanf("%15s", palavra_secreta);
    
    // Método SHIFT
    int shift;
    printf("Qual shift deseja: ");
    scanf("%d", &shift);
    
    // Métodos Matemáticos
    int sequencia_pa = 1;
    int razao_pa = 3;
    int sequencia_pg = 1;
    int razao_pg = 2;
    int fib_atual = 1;
    int fib_prox = 1;
    int fib_aux;
    
    // Gerador do arquivo .txt
    FILE *arq = fopen("resultado_criptografia.txt", "w");
    if (arq == NULL) {
    return 1;
    }

    // Interface     
    printf("1 - PA | 2 - PG | 3 - Fibonacci \n");
    int opcao;
    printf("Qual sequência deseja: ");
    scanf("%d" , &opcao);


    // Operações
    switch (opcao) {
        
        case 1:
        for (int i = 0; palavra_secreta[i] != '\0'; i++) {
        palavra_secreta[i] = ((palavra_secreta[i] - 'a' + shift + sequencia_pa) % 26) + 'a';
        sequencia_pa = sequencia_pa + razao_pa;
    }
        break;
        
        case 2:
        for (int i = 0; palavra_secreta[i] != '\0'; i++) {
        palavra_secreta[i] = ((palavra_secreta[i] - 'a' + shift + sequencia_pg) % 26) + 'a';
        sequencia_pg = sequencia_pg * razao_pg;
    }
        break;
        
        case 3:
        for (int i = 0; palavra_secreta[i] != '\0'; i++) {
        palavra_secreta[i] = ((palavra_secreta[i] - 'a' + shift + fib_atual) % 26) + 'a';
        fib_aux = fib_atual + fib_prox;
        fib_atual = fib_prox;
        fib_prox = fib_aux;
    }
        break;
        
        // Captura erros de digitação
        default: {
        printf("Opção Inválida!\n");
    }
    }

    // Geração da mensagem do arquivo
    
    fprintf(arq, "Palavra codificada: %s | SHIFT: %d | Tipo: %d | Letras: %d\n", palavra_secreta, shift, opcao, strlen(palavra_secreta));
    fclose(arq);
    
    // Prints no terminal para comprovar a geração do arquivo.
    printf("Arquivo gerado com sucesso!\n");
    printf("A string final na RAM é: %s\n", palavra_secreta);

return 0;
}
