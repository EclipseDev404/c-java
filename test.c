/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    
    
}

int binarioADecimale(long long numeroBinario) {
    int decimale = 0, base = 1, resto;
    
    while (numeroBinario > 0) {
        resto = numeroBinario % 10;
        decimale += resto * base;
        numeroBinario /= 10;
        base *= 2;
    }
    return decimale;
}

void decimaleABinario(int numero) {
    if (numero > 1)
    {
        decimaleABinario(numero / 2);
    }
    printf("%d", numero % 2);
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // L'ultima posizione di ogni passata è già ordinata
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Scambia arr[j] e arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Trova l'indice del valore minimo nell'array non ordinato
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Scambia il valore minimo trovato con il primo elemento non ordinato
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}


//insertSort:

void shiftRight(int indice, int size, int vet[])
    {
    for(int i = size - 1; i > indice; i--)
    {
        vet[i] = vet[i - 1];
    }
}

int trovaIndex(int size, int n, int vet[])
{
    int index = 0;
    while(vet[index] < n && vet[index] != 0)
    {
        index++;
    }
    return index;
}

void insertSort(int size, int n, int vet[])
{
    int index = trovaIndex(size, n, vet);
    shiftRight(index,size,vet);
    vet[index]=n;
}

//quick sort

int partition(int vet[], int basso, int alto)
{
    int pivot = vet[alto];
    int i = basso - 1;

    for (int j = basso; j <= alto - 1; j++) {
        if (vet[j] < pivot) {
            i++;
            int temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
        }
    }
    
    int temp = vet[i + 1];
    vet[i + 1] = vet[alto];
    vet[alto] = temp;
    return (i + 1);
}


void quickSort(int vet[], int basso, int alto)
{
    if (basso < alto)
    {
        int pivot = partition(vet, basso, alto);
        quickSort(vet, basso, pivot - 1);
        quickSort(vet, pivot + 1, alto);
    }
}

//ricerca dicotomica:
int ricercaDicotomica(int vet[], int size, int valore)
{
    int basso = 0;
    int alto = size - 1;

    while (basso <= alto)
    {
        int medio = basso + (alto - basso) / 2;

        if (vet[medio] == valore)
        {
            return medio;
        }
        else if(vet[medio] < valore)
        {
            basso = medio + 1;
        }
        else
        {
            alto = medio - 1;
        }
    }

    return -1;
}
