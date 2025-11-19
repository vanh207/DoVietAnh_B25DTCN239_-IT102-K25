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
    int idCanSua;
    
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &idCanSua);
    getchar();
    
    int timThay = 0;
    int viTri = -1;
    
    for(int i = 0; i < soLuong; i++) {
        if(ds[i].id == idCanSua) {
            timThay = 1;
            viTri = i;
            break;
        }
    }
    
    if(!timThay) {
        printf("Khong tim thay sinh vien co ID %d\n", idCanSua);
        return 0;
    }
    
    printf("Tim thay sinh vien:\n");
    printf("ID: %d\n", ds[viTri].id);
    printf("Ten: %s", ds[viTri].name);
    printf("Tuoi: %d\n", ds[viTri].age);
    printf("So dien thoai: %s\n", ds[viTri].phoneNumber);
    
    printf("\nNhap thong tin moi:\n");
    printf("Ten moi: ");
    fgets(ds[viTri].name, 50, stdin);
    
    printf("Tuoi moi: ");
    scanf("%d", &ds[viTri].age);
    getchar();
    
    printf("Da cap nhat thong tin thanh cong!\n\n");
    
    printf("Danh sach sinh vien sau khi chinh sua:\n");
    for(int i = 0; i < soLuong; i++) {
        printf("ID: %d\n", ds[i].id);
        printf("Ten: %s", ds[i].name);
        printf("Tuoi: %d\n", ds[i].age);
        printf("So dien thoai: %s", ds[i].phoneNumber);
        printf("\n");
    }
    
    return 0;
}
