#include <stdio.h>
#include <windows.h>

int Dzielnik(int a, int b) {
    int temp;
    SetConsoleOutputCP(CP_UTF8);
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;

    do {

        printf("Podaj dwie liczby całkowite (0 aby zakończyć): ");
        scanf("%d", &m);


        if (m == 0) {
            printf("Koniec programu.\n");
            break;
        }

        scanf("%d", &n);


        int nwd = Dzielnik(m, n);


        printf("Największy wspólny dzielnik liczb %d i %d to: %d\n", m, n, nwd);

    } while (1);

    return 0;
}
