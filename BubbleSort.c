#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n){
    int i, j, temp;
    for(i=0;i<n;i++){
        for(j=0; j<n-i-1;j++){
            if(arr[j] > arr[j + 1]){
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                temp = arr[j];
            }
        }
    }
}
int main(){
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        arr[i] = rand();
    }
    clock_t start, end;
    double elapsed_sec;
    start = clock();

    printf("Original Array:\n");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    BubbleSort(arr, n);
    printf("Sorted Array:\n");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    end = clock();
    elapsed_sec = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Time: %lf", elapsed_sec);
    return 0;
}