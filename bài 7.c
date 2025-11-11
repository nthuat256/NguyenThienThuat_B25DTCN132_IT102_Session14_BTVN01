#include <stdio.h>
#include <math.h>
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (laSoNguyenTo(n))
        printf("%d la so nguyen to\n", n);
    else
        printf("%d khong phai la so nguyen to\n", n);
    return 0;
}

