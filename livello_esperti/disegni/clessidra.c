#include <stdio.h>

int main() {
    int n, i, j;
    char c;
    printf("Inserire un intero dispari e un carattere: ");
    scanf("%d %c", &n, &c);
    for (i = 0 ; i < n ; i++) {
        int s = (i <= n/2 ? i : n - 1 - i);
        for (j = 0 ; j < s ; j++)
            printf(" ");
        for (j = 0 ; j < n - 2*s ; j++)
            printf("%c", c);
        printf("\n");
    }
    return 0;
}
