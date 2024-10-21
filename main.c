#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    printf("I fattori primi di %d sono: ", n);

    while (n > 1) {
        if (n % i == 0) {
            printf("%d ", i);
            n /= i;
        } else {
            i++;
        }
    }
    return 0;
}
