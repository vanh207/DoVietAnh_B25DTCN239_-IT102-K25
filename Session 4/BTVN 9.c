#include <stdio.h>
int main() {
    int day, month, year;
    
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);
    
    int valid = 1;
    
    if (month < 1 || month > 12) {
        valid = 0;
    } else {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (day < 1 || day > 31) valid = 0;
                break;
            case 4: case 6: case 9: case 11:
                if (day < 1 || day > 30) valid = 0;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    if (day < 1 || day > 29) valid = 0;
                } else {
                    if (day < 1 || day > 28) valid = 0;
                }
                break;
        }
    }
    
    if (valid) {
        printf("Ngay thang nam hop le\n");
    } else {
        printf("Ngay thang nam khong hop le\n");
    }
    
    return 0;
}
