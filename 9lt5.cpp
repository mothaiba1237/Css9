#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    int choice, value, position, sum, primeSum, count;

    while (1) {
        printf("MENU\n");
        printf("1 Nhap so phan tu va gia tri cac phan tu\n");
        printf("2 In ra gia tri cac phan tu\n");
        printf("3 In ra phan tu chan va tinh tong\n");
        printf("4 In ra gia tri lon nhat va nho nhat\n");
        printf("5 In ra phan tu nguyen to va tinh tong\n");
        printf("6 Thong ke so lan xuat hien mot gia tri\n");
        printf("7 Them phan tu vao vi tri\n");
        printf("8 Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &currentLength);
                for (int i = 0; i < currentLength; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                sum = 0;
                for (int i = 0; i < currentLength; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong: %d\n", sum);
                break;

            case 4:
                if (currentLength == 0) {
                    printf("Mang rong\n");
                } else {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < currentLength; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Max: %d\nMin: %d\n", max, min);
                }
                break;

            case 5:
                primeSum = 0;
                for (int i = 0; i < currentLength; i++) {
                    int isPrime = 1;
                    if (arr[i] <= 1) isPrime = 0;
                    for (int j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) {
                        printf("%d ", arr[i]);
                        primeSum += arr[i];
                    }
                }
                printf("\nTong: %d\n", primeSum);
                break;

            case 6:
                printf("Nhap so can thong ke: ");
                scanf("%d", &value);
                count = 0;
                for (int i = 0; i < currentLength; i++) {
                    if (arr[i] == value) count++;
                }
                printf("%d xuat hien %d lan\n", value, count);
                break;

            case 7:
                printf("Nhap vi tri: ");
                scanf("%d", &position);
                if (position < 0 || position > currentLength) {
                    printf("Vi tri khong hop le\n");
                } else {
                    printf("Nhap gia tri: ");
                    scanf("%d", &value);
                    for (int i = currentLength; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    currentLength++;
                }
                break;

            case 8:
                return 0;

            default:
                printf("Lua chon sai\n");
        }
    }

    return 0;
}

