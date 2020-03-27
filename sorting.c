#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubble_sort(int *a, int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1; j++)
            if (a[j] > a[j+1])
                swap(&a[j], &a[j+1]);
}

void selection_sort(int *a, int size) {
    int *min;
    for (int i = 0; i < size; i++) {
        min = &a[i];
        for (int j = i; j < size; j++)
            if (*min > a[j])
                min = &a[j];
        swap(min, &a[i]);
    }
}

void insertion_sort(int *a, int size) {
    int aux;
    for (int i = 0; i < size; i++) {
        aux = a[i];
        for (int j = i + 1; j > 0; j--) {
            if (a[j] > aux) {
                break;
            } else {
                
            }
        }
    }
    int h = 0;
}

int main()
{
    
    int a[] = { 5, 6, 1, 0, 7, 4, 9, 2, 3, 8 };
    insertion_sort(a, 10);
    print_array(a, 10);

    return 0;
}
