#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien ds[50] = {
        {1, "Nguyen Van A\n", 20, "0123456789\n"},
        {2, "Tran Thi B\n", 21, "0987654321\n"},
        {3, "Le Van C\n", 19, "0369852147\n"},
        {4, "Pham Thi D\n", 22, "0912345678\n"},
        {5, "Hoang Van E\n", 20, "0978123456\n"}
    };
    
    int soLuong = 5;
    
    printf("Nhap thong tin sinh vien moi:\n");
    
    ds[soLuong].id = soLuong + 1;
    
    printf("Ten: ");
    fgets(ds[soLuong].name, 50, stdin);
    
    printf("Tuoi: ");
    scanf("%d", &ds[soLuong].age);
    getchar();
    
    printf("So dien thoai: ");
    fgets(ds[soLuong].phoneNumber, 15, stdin);
    
    soLuong++;
    
    printf("\nDanh sach sinh vien sau khi them moi:\n");
    for(int i = 0; i < soLuong; i++) {
        printf("ID: %d\n", ds[i].id);
        printf("Ten: %s", ds[i].name);
        printf("Tuoi: %d\n", ds[i].age);
        printf("So dien thoai: %s", ds[i].phoneNumber);
        printf("\n");
    }
    
    return 0;
}
