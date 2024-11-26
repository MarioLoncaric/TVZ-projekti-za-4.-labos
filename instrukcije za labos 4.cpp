#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


/*
Napisati program koji učitava dimenzije matrice (dvodimenzionalnog polja) N i M, te nakon toga i njene cjelobrojne elemente.
Definirati da matrica smije biti maksimalne veličine 5x5. U slučaju da se za N i M unesu dimenzije izvan opsega zatražiti
ponovni unos dimenzija.
Program treba izračunati prosjek elemenata u svakom retku, te u novo jednodimenzionalno polje upisati samo one elemente
svakog retka koji su manji od izračunatog prosjeka za taj redak. Program treba ispisati matricu i tako dobiveno polje.
*/

/*
Test case #1
Prvo se unose dimenzije matrice N (retci) i M (stupci), a nakon toga elementi.
Primjer ulaza:
7
5
3
4
0 1 3 6 3 4 3 2 1 2 5 3

Ocekivani izlaz:
Dimenzije matrice ne odgovaraju rasponu!
Ponovo unesite dimenzije.

Ispis matrice:
0    1    3    6
3    4    3    2
1    2    5    3

Prosjek redaka: 2.50, 3.00, 2.75

Ispis 1D polja:
0, 1, 2, 1, 2


Test case #2
Prvo se unose dimenzije matrice N (retci) i M (stupci), a nakon toga elementi.
Primjer ulaza:
3
4
0 1 3 6 3 4 3 2 1 2 5 3

Ocekivani izlaz:
Ispis matrice:
0    1    3    6
3    4    3    2
1    2    5    3

Prosjek redaka: 2.50, 3.00, 2.75

Ispis 1D polja:
0, 1, 2, 1, 2


Test case #3
Prvo se unose dimenzije matrice N (retci) i M (stupci), a nakon toga elementi.
Primjer ulaza:
4
3
2 1 3 6 2 4 3 2 1 2 5 3

Ocekivani izlaz:
Ispis matrice:
2    1    3
6    2    4
3    2    1
2    5    3

Prosjek redaka: 2.00, 4.00, 2.00, 3.33

Ispis 1D polja:
1, 2, 1, 2, 3

*/

int main() {
    int r, c;

    do {
        scanf(" %d %d", &r, &c);
    } while (r > 5 || c > 5);

    int p[5][5];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf(" %d", &p[i][j]);
        }
    }
    printf("Prosjek brojeva za svaki redak je: ");
    for (int i = 0; i < r; i++) {
        float prosjek = 0;

        for (int j = 0; j < c; j++) {
            prosjek += p[i][j];
        }
        prosjek = prosjek / c;
        printf(" %.2f", prosjek);
    }
    printf("\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}


