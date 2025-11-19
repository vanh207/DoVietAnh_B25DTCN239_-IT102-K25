#include <stdio.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv;
    
    printf("Nhap ten sinh vien: ");
    fgets(sv.name, 50, stdin);
    
    printf("Nhap tuoi: ");
    scanf("%d", &sv.age);
    getchar();
    
    printf("Nhap so dien thoai: ");
    fgets(sv.phoneNumber, 15, stdin);
    
    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s", sv.phoneNumber);
    
    return 0;
}
