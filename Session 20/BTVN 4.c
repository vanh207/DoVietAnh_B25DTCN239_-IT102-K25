#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien ds[50];
    
    for(int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        
        ds[i].id = i + 1;
        
        printf("Ten: ");
        fgets(ds[i].name, 50, stdin);
        
        printf("Tuoi: ");
        scanf("%d", &ds[i].age);
        getchar();
        
        printf("So dien thoai: ");
        fgets(ds[i].phoneNumber, 15, stdin);
        printf("\n");
    }
    
    printf("Danh sach sinh vien:\n");
    for(int i = 0; i < 5; i++) {
        printf("ID: %d\n", ds[i].id);
        printf("Ten: %s", ds[i].name);
        printf("Tuoi: %d\n", ds[i].age);
        printf("So dien thoai: %s\n", ds[i].phoneNumber);
        printf("\n");
    }
    
    return 0;
}
