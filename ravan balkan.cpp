#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 20

int main() {
	double glavna_matrica[MAX][MAX];
	double sporedna_matrica[MAX][MAX];
	int red, stupac;

	scanf(" %d %d", &red, &stupac);

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf(" %lf", &glavna_matrica[i][j]);
		}
	}

	while(1) {
		
		int d = 0, z = 0;
		int suma = 0, brojac = 0;
		for (int i = d - 1; i <= d + 1; i++) {
			for (int j = z - 1; j <= z + 1; j++) {
				if (i >= 0 && i < red && j >= 0 && j < stupac) {
					suma += glavna_matrica[i][j];
					brojac++;
					suma /= brojac;
				}
				suma /= brojac;
				sporedna_matrica[i][j] = suma;
			}

		}
		for (int i = 0; i < red; i++) {
			for (int j = 0; j < stupac; j++) {
				if ((glavna_matrica[i][j] - sporedna_matrica[i][j]) < 1) {
					glavna_matrica[i][j] = sporedna_matrica[i][j];
					continue;
				}
			}



	}

	return 0;
}
