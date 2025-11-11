#include <stdio.h>
float tinhTong(float a, float b) {
    return a + b;
}
int main() {
    float x, y;
    printf("Nhap so thu nhat: ");
    scanf("%f", &x);
    printf("Nhap so thu hai: ");
    scanf("%f", &y);
    float kq = tinhTong(x, y);
    printf("Tong cua %.2f va %.2f la: %.2f\n", x, y, kq);

    return 0;
}

