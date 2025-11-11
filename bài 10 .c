#include <stdio.h>

#define MAX 100

void nhapMang(int arr[], int *n);
void inMang(int arr[], int n);
void themPhanTu(int arr[], int *n);
void suaPhanTu(int arr[], int n);
void xoaPhanTu(int arr[], int *n);
void sapXepTang(int arr[], int n);
void sapXepGiam(int arr[], int n);
void timKiemTuyenTinh(int arr[], int n);
void timKiemNhiPhan(int arr[], int n);

int main() {
    int arr[MAX];
    int n = 0;
    int chon;
    char chonPhu;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Sap xep\n");
        printf("7. Tim kiem\n");
        printf("8. Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: nhapMang(arr, &n); break;
            case 2: inMang(arr, n); break;
            case 3: themPhanTu(arr, &n); break;
            case 4: suaPhanTu(arr, n); break;
            case 5: xoaPhanTu(arr, &n); break;
            case 6:
                printf("a. Giam dan\n");
                printf("b. Tang dan\n");
                printf("Chon: ");
                scanf(" %c", &chonPhu);
                if (chonPhu == 'a') sapXepGiam(arr, n);
                else if (chonPhu == 'b') sapXepTang(arr, n);
                else printf("Lua chon khong hop le\n");
                break;
            case 7:
                printf("a. Tuyen tinh\n");
                printf("b. Nhi phan\n");
                printf("Chon: ");
                scanf(" %c", &chonPhu);
                if (chonPhu == 'a') timKiemTuyenTinh(arr, n);
                else if (chonPhu == 'b') timKiemNhiPhan(arr, n);
                else printf("Lua chon khong hop le\n");
                break;
            case 8:
                printf("Tam biet\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (chon != 8);
    return 0;
}

void nhapMang(int arr[], int *n) {
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    if (*n >= MAX) {
        printf("Mang da day\n");
        return;
    }
    int x, pos;
    printf("Nhap gia tri can them: ");
    scanf("%d", &x);
    printf("Nhap vi tri can them (0 -> %d): ", *n);
    scanf("%d", &pos);
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    for (int i = *n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = x;
    (*n)++;
    printf("Da them phan tu thanh cong\n");
}

void suaPhanTu(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong\n");
        return;
    }
    int pos, x;
    printf("Nhap vi tri can sua (0 -> %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &x);
    arr[pos] = x;
    printf("Da sua phan tu thanh cong\n");
}

void xoaPhanTu(int arr[], int *n) {
    if (*n == 0) {
        printf("Mang rong\n");
        return;
    }
    int pos;
    printf("Nhap vi tri can xoa (0 -> %d): ", *n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) arr[i] = arr[i + 1];
    (*n)--;
    printf("Da xoa phan tu thanh cong\n");
}

void sapXepTang(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
    printf("Da sap xep tang dan\n");
}

void sapXepGiam(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] < arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
    printf("Da sap xep giam dan\n");
}

void timKiemTuyenTinh(int arr[], int n) {
    int x, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Tim thay %d tai vi tri %d\n", x, i);
            found = 1;
        }
    }
    if (!found) printf("Khong tim thay phan tu\n");
}

void timKiemNhiPhan(int arr[], int n) {
    int x, left = 0, right = n - 1, mid, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Tim thay %d tai vi tri %d\n", x, mid);
            found = 1;
            break;
        } else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (!found) printf("Khong tim thay phan tu\n");
}

