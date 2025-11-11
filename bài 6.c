#include <stdio.h>
int timMax(int arr[], int n) {
    int max = arr[0];
    int i;
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main() {
    int arr[100];
    int n, i;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Phan tu lon nhat trong mang la: %d\n", timMax(arr, n));
    return 0;
}

