#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 10

int main() {
	int broj_studenata, k = 4;
	int matrica[MAX][MAX] = { 0 };
	int prolaznost[MAX] = { 0 };
	int suma = 0;


	scanf(" %d", &broj_studenata);
	while (broj_studenata < 2 || broj_studenata > 10) {
		printf("pogresan broj studenata. unesite ponovo\n");
		scanf(" %d", &broj_studenata);
	}

	for (int i = 0; i < broj_studenata; i++) {
		for (int j = 0; j < k; j++) {
			scanf(" %d", &matrica[i][j]);
		}
	}
	int d = 0;
	for (int j = 0; j < k; j++) {
		suma = 0;
		for (int i = 0; i < broj_studenata; i++) {
			suma += matrica[i][j];
		}
		if (suma < 50) {
			prolaznost[d] = 1;
		}
		if (suma >= 50 && suma < 60) {
			prolaznost[d] = 2;
		}
		if (suma >= 60 && suma < 75) {
			prolaznost[d] = 3;
		}
		if (suma >= 75 && suma < 90) {
			prolaznost[d] = 4;
		}
		if (suma >= 90) {
			prolaznost[d] = 5;
		}
		d++;
	}
	
	printf("===================================\n");
	for (int i = 0; i < broj_studenata; i++) {
		for (int j = 0; j < k; j++) {
			printf("%d\t ", matrica[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < k; i++) {
		printf("%d\t ", prolaznost[i]);
	}
		
	return 0;
}