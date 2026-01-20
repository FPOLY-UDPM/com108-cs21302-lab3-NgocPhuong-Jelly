/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main() {
    int lua_chon;
    
    do {
        // Hiển thị menu
        printf("\n=== MENU CHƯƠNG TRÌNH ===\n");
        printf("1. Tính học lực\n");
        printf("2. Giải phương trình bậc 1\n");
        printf("3. Giải phương trình bậc 2\n");
        printf("4. Tính tiền điện\n");
        printf("0. Thoát\n");
        printf("============================\n");
        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &lua_chon);
        
        // Xử lý lựa chọn
        switch(lua_chon) {
            case 1:
                printf("--- BẠN ĐÃ CHỌN: Tính học lực ---\n");
                printf("Chức năng sẽ được thực hiện tại đây...\n");
                break;
                
            case 2:
                printf("--- BẠN ĐÃ CHỌN: Giải PT bậc 1 ---\n");
                printf("Chức năng sẽ được thực hiện tại đây...\n");
                break;
                
            case 3:
                printf("--- BẠN ĐÃ CHỌN: Giải PT bậc 2 ---\n");
                printf("Chức năng sẽ được thực hiện tại đây...\n");
                break;
                
            case 4:
                printf("--- BẠN ĐÃ CHỌN: Tính tiền điện ---\n");
                printf("Chức năng sẽ được thức hiện tại đây...\n");
                break;
                
            case 0:
                printf("Cám ơn bạn đã sử dụng chương trình!\n");
                printf("Tạm biệt!\n");
                break;
                
            default:
                printf("Lựa chọn không hợp lệ! Vui lòng chọn lại.\n");
                break;
        }
        
        if (lua_chon != 0) {
            printf("Nhấn Enter để tiếp tục...");
            getchar();// Xóa buffer
            getchar();// Đợi Enter
        }
        
    } while (lua_chon != 0);
    
    return 0;
}
 