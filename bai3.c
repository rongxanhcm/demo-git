#include <stdio.h>
#include <math.h>
void bai3() {
    float a, b, c;
    printf("Giai phuong trinh bac 2 (ax^2 + bx + c = 0)\n");
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", -c / b);
        }
    } else {
        float delta = b*b - 4*a*c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", -b / (2 * a));
        } else {
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2 * a));
            printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2 * a));
        }
    }

    return 0;
}