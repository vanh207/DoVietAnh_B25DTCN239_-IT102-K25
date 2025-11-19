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
    int viTriChen;
    
    printf("Nhap vi tri can chen (0 - %d): ", soLuong);
    scanf("%d", &viTriChen);
    getchar();
    
    if(viTriChen < 0 || viTriChen > soLuong) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    
    for(int i = soLuong; i > viTriChen; i--) {
        ds[i] = ds[i - 1];
    }
    
    printf("Nhap thong tin sinh vien moi:\n");
    ds[viTriChen].id = viTriChen + 1;
    
    printf("Ten: ");
    fgets(ds[viTriChen].name, 50, stdin);
    
    printf("Tuoi: ");
    scanf("%d", &ds[viTriChen].age);
    getchar();
    
    printf("So dien thoai: ");
    fgets(ds[viTriChen].phoneNumber, 15, stdin);
    
    for(int i = viTriChen + 1; i <= soLuong; i++) {
        ds[i].id = i + 1;
    }
    
    soLuong++;
    
    printf("\nDanh sach sinh vien sau khi chen:\n");
    for(int i = 0; i < soLuong; i++) {
        printf("ID: %d\n", ds[i].id);
        printf("Ten: %s", ds[i].name);
        printf("Tuoi: %d\n", ds[i].age);
        printf("So dien thoai: %s", ds[i].phoneNumber);
        printf("\n");
    }
    
    return 0;
}
