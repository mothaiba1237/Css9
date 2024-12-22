#include <stdio.h>
#define MAX 100

int main() {
    int arr[MAX];
    int len = 0;
    int n, val, pos;

    printf("Nhap so phan tu muon nhap (toi da %d): ", MAX);
    scanf("%d", &n);
    if (n < 0 || n > MAX) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    len = n;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &val);
    printf("Nhap vi tri muon them (0 - %d): ", MAX - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= MAX) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    if (pos >= len) {
        arr[pos] = val;
        len = pos + 1;
    } else {
        for (int i = len; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;
        len++;
    }
    printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

