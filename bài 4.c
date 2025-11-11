#include <stdio.h>
void inMang(float arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}
int main() {
    float arr[100];
    int n, i;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    printf("Cac phan tu trong mang la: ");
    inMang(arr, n);
    return 0;
}

