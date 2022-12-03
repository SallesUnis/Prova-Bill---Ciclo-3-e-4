// Selection Sort - Algoritimo Um Prova Alberane
#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // De um para um, move o limite do subarray não classificado 
    for (i = 0; i < n-1; i++)
    {
        // Encontra o elemento mínimo na matriz não classificada
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Troca o elemento mínimno que foi encontrado pelo primeiro elemento
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}
 
/* Função para imprimir um array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Programa para testar as funções existentes no código
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}