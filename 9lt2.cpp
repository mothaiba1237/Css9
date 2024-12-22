#include <stdio.h>

int main() {
    int arr[100], n, p, val;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri can sua: ");
    scanf("%d", &p);
    printf("Nhap gia tri moi: ");
    scanf("%d", &val);
    if (p >= 0 && p < n) {
        arr[p] = val;
        printf("Mang sau khi sua:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Vi tri khong hop le!\n");
    }

    return 0;
}

