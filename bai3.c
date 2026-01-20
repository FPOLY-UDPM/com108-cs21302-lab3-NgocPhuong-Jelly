/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main() {
    int kwh;
    float tien = 0.0;
    printf("Nhập số kWh sử dụng: ");
    scanf("%d", &kwh);

    if (kwh <= 50) {
        tien = kwh * 1678;
    } else if (kwh <= 100) {
        tien = 50 * 1678 + (kwh - 50) * 1734;
    } else if (kwh <= 200) {
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    } else if (kwh <= 300) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    } else if (kwh <= 400) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    } else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("Tổng tiền điện: %.0f đồng (chưa VAT)\n", tien);
    return 0;
}
