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
	float prolaznost[MAX] = { 0 };
	float suma = 0;


	scanf(" %d", &broj_studenata);
	while (broj_studenata < 2 || broj_studenata > 10){
		printf("pogresan broj studenata. unesite ponovo\n");
		scanf(" %d", &broj_studenata);
	} 

	for (int i = 0; i < broj_studenata; i++){
		for (int j = 0; j < k; j++){
			scanf(" %d", &matrica[i][j]);
		}
	}
	int d = 0;
	for (int j = 0; j < k; j++) {
		suma = 0;
		for (int i = 0; i < broj_studenata; i++) {
			if (matrica[i][j] < 50) {
				suma += 0;
			}
			if (matrica[i][j] >= 50) {
				suma += 1;
			}
		}
		prolaznost[d] = (suma/broj_studenata)*100;
		d++;
	}
	printf("===================================\n");
	for (int i = 0; i < broj_studenata; i++) {
		for (int j = 0; j < k; j++) {
			printf("%3d ", matrica[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < k; i++) {
			printf("%.f ", prolaznost[i]);
	}

	return 0;
}
