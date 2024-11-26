#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#define MAX 5

int main() {
    // Varijable za unos
    char ime[MAX], prezime[MAX];
    int visina[MAX], pokusaj[MAX];

    // Varijable za traženje rezultata
    int max_visina = 0, min_pokusaj = 9999;

    // Polja za praćenje rezultata
    int rezultat[MAX], broj_rezultata = 0;

    // Unos podataka
    for (int i = 0; i < MAX; i++) {
        scanf(" %c %c %d %d", &ime[i], &prezime[i], &visina[i], &pokusaj[i]);
    }

    // Pronalaženje maksimalne visine i minimalnih pokušaja
    for (int i = 0; i < MAX; i++) {
        if (visina[i] > max_visina) {
            max_visina = visina[i];
            min_pokusaj = pokusaj[i];
            broj_rezultata = 0; // Resetiraj broj rezultata
            rezultat[broj_rezultata++] = i; // Spremi indeks trenutne osobe
        }
        else if (visina[i] == max_visina) {
            if (pokusaj[i] < min_pokusaj) {
                min_pokusaj = pokusaj[i];
                broj_rezultata = 0; // Resetiraj broj rezultata
                rezultat[broj_rezultata++] = i; // Spremi indeks trenutne osobe
            }
            else if (pokusaj[i] == min_pokusaj) {
                rezultat[broj_rezultata++] = i; // Dodaj indeks osobe s istim uvjetima
            }
        }
    }

    // Ispis rezultata
    printf("\nOsoba(e) s najvišim skokom i najmanje pokušaja:\n");
    for (int i = 0; i < broj_rezultata; i++) {
        int indeks = rezultat[i];
        printf("%c %c %d %d\n", ime[indeks], prezime[indeks], visina[indeks], pokusaj[indeks]);
    }

    return 0;
}