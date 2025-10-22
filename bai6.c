#include <stdio.h>

void bai6() {
    int n;
    printf("Nhap so de in bang cuu chuong: ");
    scanf("%d", &n);

    printf("--- Bang cuu chuong %d ---\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}