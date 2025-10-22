#include <stdio.h>

void bai4(){
    double van, toan, anhvan;
    printf("nhap diem van: ");
    if (scanf("%lf", &van) != 1) {
        printf("du lieu sai\n");
        return;
    }

    printf("nhap diem toan: ");
    if (scanf("%lf", &toan) != 1) {
        printf("du lieu sai\n");
        return;
    }

    printf("nhap diem anh van: ");
    if (scanf("%lf", &anhvan) != 1) {
        printf("du lieu sai\n");
        return;
    }

    double tb = (van * 2.0 + toan * 2.0 + anhvan) / 5.0;
    printf("diem cuoi ky: %.2f\n", tb);

    if (tb < 3.0) {
        printf("hoc luc: yeu\n");
    } else if (tb <= 5.0) {
        printf("hoc luc: trung binh\n");
    } else if (tb <= 7.9) {
        printf("hoc luc: kha\n");
    } else {
        printf("hoc luc: gioi\n");
    }
}