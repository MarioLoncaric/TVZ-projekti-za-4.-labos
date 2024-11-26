#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 10


int main() {
	int matrica[MAX][MAX] = { 0 };
	int broj_postaja;
	int nova_kategorija = 5;
	int nova_matrica[MAX][MAX] = { 0 };
	int prosjek = 0;

	scanf(" %d", &broj_postaja);
	while (broj_postaja < 3 || broj_postaja > 10) {
		printf("Krivi unos");
		scanf(" %d", &broj_postaja);
	}

	for (int i = 0; i < broj_postaja; i++) {
		for (int j = 0; j < nova_kategorija; j++) {
			scanf(" %d", &matrica[i][j]);
		}
	}

	int brojac = 0;
	for (int i = 0; i < broj_postaja; i++) {
		int j = 3;
		prosjek += matrica[i][j];
		brojac++;
	}
	prosjek /= brojac;

	for (int i = 0; i < broj_postaja; i++) {
		for (int j = 0; j < nova_kategorija; j++){
		int d = 3;
		if (matrica[i][d] < prosjek) {
			int p = 0, v = 0;
			nova_matrica[p][v] = matrica[i][j];
			p++;
			v++;
			}
		}
	}
	


return 0;
}