#include <stdio.h>
long long tinhGiaiThua(int n) {
    long long gt = 1;
    int i;
    for(i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}
int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    printf("Giai thua cua %d la: %lld", n, tinhGiaiThua(n));
    return 0;
}

