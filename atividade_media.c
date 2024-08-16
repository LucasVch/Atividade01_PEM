#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n > 0) {
        double notas[n];
        for (int i = 0; i < n; i++) {
            scanf("%lf", &notas[i]);
        }

        double max = notas[0];
        double min = notas[0];
        double sum = 0;
        for (int i = 0; i < n; i++) {
            if (notas[i] > max) {
                max = notas[i];
            }
            if (notas[i] < min) {
                min = notas[i];
            }
            sum += notas[i];
        }

        sum -= max;
        sum -= min;

        printf("Nota = %.0f\n", sum);
    }

    return 0;
}