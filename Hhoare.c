#include "librerias.h"
int kSize=7;

void Imprime_Arreglo(int* arreglo, int size) {
    for(int i=0; i<size; ++i) {
        printf("%d, ", arreglo[i]);
    }
    printf("\n");
}

void swap(int* a, int* b){
    double t;
    t=*a;
    *a=*b;
    *b=t;
}

int hoare(int c[], int d, int e) {
    int x=c[d];
    int i=d-1;
    int j=e;
    while (1) {
        do j--;
        while (c[j]>x);
        do i++;
        while (c[i]<x);
        if (i<j) {
            swap(&c[i], &c[j]);
        } else {
            return j+1;
        }
    }
}

void quicksort(int a[],int size, int inicio, int fin) {
	int w;
	if (fin-inicio<2) return;
	w=hoare(a, inicio, fin);
	quicksort(a,kSize, inicio, w);
	quicksort(a,kSize, w, fin);
}

int main(int argc, char* argv[]) {
    int arreglo[] = {85, 24, 75, 1, 12, 63, 9};
    quicksort(arreglo, kSize, 0, kSize);
    Imprime_Arreglo(arreglo, kSize);
	return 0;
}