#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 6

int main() {
	int matrica[MAX][MAX], n, m;
	float prosjek[5] = { 0 };
	float pravi_prosjek[5] = { 0 };
	int manji_elementi[15] = { 0 };

	do {
		scanf(" %d", &n);
	} while (n < 0 || n > 100);

	do {
		scanf(" %d", &m);
	} while (m < 0 || m > 100);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %d", &matrica[i][j]);
		}
	}
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
				prosjek[i] += matrica[i][j];
			}
	}
	
	for (int z = 0; z < n; z++) {
		pravi_prosjek[z] = prosjek[z] / m;
	}
	int f = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrica[i][j] < pravi_prosjek[i]) {
				manji_elementi[f] = matrica[i][j];
				f++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d", matrica[i][j]);
		}
		printf("\n");
	}
	printf("Prosjek redaka: ");
	for (int v = 0; v < n; v++) {
		printf("%.2f ", pravi_prosjek[v]);
	}
	printf("\nIspis 1D polja: ");
	for (int l = 0; l < n; l++) {
		printf("%d ", manji_elementi[l]);
	}

	return 0;
}