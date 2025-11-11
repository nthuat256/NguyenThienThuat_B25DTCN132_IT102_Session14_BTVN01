#include <stdio.h>
#include <math.h>
int isPrime(int n) {
	int i;
    if (n < 2) return 0;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int size,i;
    printf("Enter length of arr: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang sau khi nhap la: ");
    for ( i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\ntong so nguyen to trong mang la: ");
    for ( i = 0; i < size; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    }
    printf("\n--------------------------\n");
    return 0;
}

