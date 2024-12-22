#include <stdio.h>

int main() {
    int arr[100], n, val, pos;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri muon them: ");
    scanf("%d", &val);
    printf("Nhap vi tri muon them: ");
    scanf("%d", &pos);
    if (pos >= 0 && pos <= n) {
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;
        n++;
    } else {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

