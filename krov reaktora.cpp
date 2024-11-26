#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 10

int main() {
    int red, stupac, energija;
    char polje[MAX][MAX] = { 0 };

    // Učitavanje dimenzija i energije
    scanf("%d %d %d", &red, &stupac, &energija);

    // Učitavanje krova
    for (int i = 0; i < red; i++) {
        for (int j = 0; j < stupac; j++) {
            scanf(" %c", &polje[i][j]);
        }
    }

    int trenutni_red = 0, trenutni_stupac = 0;
    polje[trenutni_red][trenutni_stupac] = 'B'; // Robot kreće iz gornjeg lijevog kuta

    while (trenutni_red < red && energija > 0) {
        // Kretanje unutar trenutnog retka
        for (trenutni_stupac = 0; trenutni_stupac < stupac && energija > 0; trenutni_stupac++) {
            // Ako gura blokove, troši dodatnu energiju
            if (polje[trenutni_red][trenutni_stupac] == 'x') {
                energija--;
            }
            energija--; // Troši energiju za pomak

            // Ako ponestane energije, ostavi oznaku robota i prekini
            if (energija <= 0) {
                polje[trenutni_red][trenutni_stupac] = '#';
                break;
            }

            // Očisti trenutni stupac jer je blok izguran
            polje[trenutni_red][trenutni_stupac] = '.';
            // Postavi robota na trenutnu poziciju
            if (trenutni_stupac < stupac - 1) {
                polje[trenutni_red][trenutni_stupac + 1] = 'B';
            }
        }

        if (energija <= 0) break; // Ako je energija iscrpljena, prekini

        // Kraj retka, robot se vraća na početak
        if (trenutni_stupac == stupac) {
            trenutni_stupac = 0;
            trenutni_red++;
            energija -= stupac - 1; // Troši energiju za povratak
            if (energija <= 0) {
                polje[trenutni_red][0] = '#';
                break;
            }
            polje[trenutni_red][0] = 'B';
        }
    }

    // Ispis konačnog stanja krova
    for (int i = 0; i < red; i++) {
        for (int j = 0; j < stupac; j++) {
            printf("%c", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}
