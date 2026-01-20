/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main() {
    float diem;
    printf("Nhập điểm của sinh viên (0-10): ");
    scanf("%f", &diem);
    
    if (diem < 0 || diem > 10) {
        printf("Điểm không hợp lệ!\n");
    } else {
        if (diem >= 9) {
            printf("Học lực xuất sắc\n");
        } else if (diem >= 8) {
            printf("Học lực giỏi\n");
        } else if (diem >= 6.5) {
            printf("Học lực khá\n");
        } else if (diem >= 5) {
            printf("Học lực trung bình\n");
        } else if (diem >= 3.5) {
            printf("Học lực yếu\n");
        } else {
            printf("Học lực kém\n");
        }
    }
    return 0;
}
