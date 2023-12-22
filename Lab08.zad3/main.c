#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char koniec;

    printf("Podaj wielką litere, polecam użyć E : ");
    scanf(" %c", &koniec);
    if (koniec < 'A' || koniec > 'Z') {
        printf("Podano błedną wartość.\n");
        return 1;
    }
    for (char i = 'A'; i <= koniec; i++) {
        for (char j = i; j >= 'A'; j--) {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}
