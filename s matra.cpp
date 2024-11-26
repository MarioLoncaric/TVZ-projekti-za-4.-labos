#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 15
int main()
{

    int matrica[MAX][MAX], red, stupac;
    int zbroj_stupca[MAX] = { 0 };
    int najveci_element[MAX] = { 0 };
    int konacno_rjesenje[MAX] = { 0 };

  
      scanf(" %d %d", &red, &stupac);

      if (stupac > 10) {
          printf("Nema stupaca koji zadovoljavaju kriterij\n");
          scanf(" %d %d", &red, &stupac);
      }


    

    for (int i = 0; i < red; i++) {
        for (int j = 0; j < stupac; j++) {
            scanf(" %d", &matrica[i][j]);
        }
    }
    int b = 0;
    for (int j = 1; j < stupac; j++) {
        for (int i = 0; i < red; i++) {
            zbroj_stupca[b] += matrica[i][j];
            
        }
        b++;
    }

    for (int j = 0; j < stupac - 1; j++) {
        for (int i = 0; i < red; i++) {
            if (matrica[i][j] > najveci_element[j]) {
                najveci_element[j] = matrica[i][j];
            }
        }
    }
    int d = 0;
    for (int i = 0; i < stupac; i++) {
        if (zbroj_stupca[i] > najveci_element[i]) {
            konacno_rjesenje[d] = i+1;
            d++;
        }
    }

    int e = 0;
    if (konacno_rjesenje[e] == 0) {
        printf("Nema rjesenja");
    }

    else {
        printf("Stupci koji zadovoljavaju kriterij:");
        for (int i = 0; i < d; i++) {
            printf(" %d", konacno_rjesenje[i] + 1);
        }
    }
    

    return 0;
}


