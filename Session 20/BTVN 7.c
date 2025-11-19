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
    int idCanXoa;
    
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &idCanXoa);
    
    int timThay = 0;
    int viTri = -1;
    
    for(int i = 0; i < soLuong; i++) {
        if(ds[i].id == idCanXoa) {
            timThay = 1;
            viTri = i;
            break;
        }
    }
    
    if(!timThay) {
        printf("Khong tim thay sinh vien co ID %d\n", idCanXoa);
        return 0;
    }
    
    for(int i = viTri; i < soLuong - 1; i++) {
        ds[i] = ds[i + 1];
    }
    
    soLuong--;
    
    printf("Da xoa sinh vien co ID %d thanh cong!\n\n", idCanXoa);
    
    printf("Danh sach sinh vien sau khi xoa:\n");
    for(int i = 0; i < soLuong; i++) {
        printf("ID: %d\n", ds[i].id);
        printf("Ten: %s", ds[i].name);
        printf("Tuoi: %d\n", ds[i].age);
        printf("So dien thoai: %s", ds[i].phoneNumber);
        printf("\n");
    }
    
    return 0;
}
