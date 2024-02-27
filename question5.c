#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

int main() {
    char str[100];
  
    printf("Digite a string que deseja inverter: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    printf("String original: %s\n", str);

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}