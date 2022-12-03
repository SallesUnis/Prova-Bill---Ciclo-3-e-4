#include <bits/stdc++.h>
using namespace std;
 
// Verifica se a matriz está ou não classificada
bool isSorted(int a[], int n)
{
    while (--n > 1)
        if (a[n] < a[n - 1])
            return false;
    return true;
}
 
// Gera a modificação da matriz
void shuffle(int a[], int n)
{
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}
 
// Classifica a matriz [0..n-1] usando Bogo sort
void bogosort(int a[], int n)
{
    // Se a matriz não estiver classificada, misturar
    // a matriz novamente
    while (!isSorted(a, n))
        shuffle(a, n);
}
 
// Printa a matriz
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
 
// Driver code
int main()
{
    int a[] = { 3, 2, 5, 1, 0, 4 };
    int n = sizeof a / sizeof a[0];
    bogosort(a, n);
    printf("Sorted array :\n");
    printArray(a, n);
    return 0;
}