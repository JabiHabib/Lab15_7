#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>

#define SIZE 10

int main() {
    setlocale(LC_ALL, "Ukr");
    srand(time(NULL));

    int x[SIZE];

    for (int i = 0; i < SIZE; i++) {
        x[i] = rand() % 100;
    }

    printf("Елементи масиву: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", x[i]);
    }

    int b = 0;

    for (int i = 0; i < SIZE; i++) {
        b += x[i];
    }

    printf("\nНакопичене значення: %d\n", b);

    return 0;
}