/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    // Khai báo biến float:
    // a,b,c: hệ số phương trình
    // delta: biệt thức Delta = b^2 - 4ac  
    // x1,x2: nghiệm phương trình
    printf("Nhập hệ số a: ");
    scanf("%f", &a);
    printf("Nhập hệ số b: ");
    scanf("%f", &b);
    printf("Nhập hệ số c: ");
    scanf("%f", &c);

    if (a == 0) {// TRƯỜNG HỢP a = 0 → PT BẬC 1: bx + c = 0
        if (b == 0) {// Nếu b = 0 nữa → PT: c = 0
            if (c == 0) {// c = 0 → 0 = 0 (đúng mọi x)
                printf("Phương trình có vô số nghiệm\n");
            } else {// c != 0 → 0 = số khác 0 (sai)
                printf("Phương trình vô nghiệm\n");
            }
        } else {// b != 0 → PT bậc 1 có nghiệm
            float x = -c / b;// Nghiệm: x = -c/b
            printf("Nghiệm x = %.2f\n", x);
        }
    } 
    else {// TRƯỜNG HỢP a != 0 → PT BẬC 2: ax^2 + bx + c = 0
        delta = b*b - 4*a*c;
        
        printf("Delta = %.2f\n", delta);
        
        if (delta < 0) {// Delta < 0 → VÔ NGHIỆM (không có nghiệm thực)
            printf("Phương trình vô nghiệm\n");
        } 
        else if (delta == 0) {// Delta = 0 → NGHIỆM KÉP
            float x = -b / (2*a);   // Nghiệm kép: x = -b/(2a)
            printf("Nghiệm kép x = %.2f\n", x);
        } 
        else {// Delta > 0 → 2 NGHIỆM PHÂN BIỆT
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Nghiệm x1 = %.2f\n", x1);// In nghiệm x1
            printf("Nghiẹmej x2 = %.2f\n", x2);// In nghiệm x2
        }
    }
    
    return 0;
}
