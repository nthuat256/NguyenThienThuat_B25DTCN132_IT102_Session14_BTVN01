#include <stdio.h>
int timUCLN(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
int main() {
    int x = 24, y = 36;
    int ucln = timUCLN(x, y);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ucln);
    return 0;
}

