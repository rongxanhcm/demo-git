#include <stdio.h>

void bai5() {
    int soKy;
    long long tienDien = 0; // Dùng long long để tránh tràn số khi tính tiền

    printf("Nhap vao so ky dien tieu thu: ");
    scanf("%d", &soKy);

    if (soKy <= 0) {
        tienDien = 0;
    } else if (soKy <= 100) {
        tienDien = soKy * 500;
    } else if (soKy <= 350) {
        tienDien = 100 * 500 + (soKy - 100) * 650;
    } else {
        tienDien = 100 * 500 + 250 * 650 + (soKy - 350) * 850;
    }

    printf("Tong so tien dien phai tra la: %lld VND\n", tienDien);

}