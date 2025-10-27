#include <stdio.h>

int main() {
    float diem;
    
    printf("Nhap diem trung binh (0-10): ");
    scanf("%f", &diem);
    
    if (diem >= 8) {
        printf("Hoc luc gioi\n");
    } else if (diem >= 6.5) {
        printf("Hoc luc kha\n");
    } else if (diem >= 5) {
        printf("Hoc luc trung binh\n");
    } else {
        printf("Hoc luc yeu\n");
    }
    
    return 0;
}
