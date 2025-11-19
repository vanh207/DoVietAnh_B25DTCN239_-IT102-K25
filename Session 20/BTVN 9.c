#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Dish {
    int id;
    char name[50];
    float price;
};

struct Dish menu[100];
int soLuong = 0;

void capNhatID() {
    for(int i = 0; i < soLuong; i++) {
        menu[i].id = i + 1;
    }
}

void hienThiDanhSach() {
    if(soLuong == 0) {
        printf("Danh sach menu trong!\n");
        return;
    }
    
    printf("\n--- DANH SACH MON AN ---\n");
    for(int i = 0; i < soLuong; i++) {
        printf("%d. ID: %d, Ten: %s, Gia: %.0f VND\n", 
               i + 1, menu[i].id, menu[i].name, menu[i].price);
    }
}

void nhapMonAn() {
    if(soLuong >= 100) {
        printf("Danh sach da day, khong the them moi!\n");
        return;
    }
    
    printf("Nhap so luong mon an can them: ");
    int n;
    scanf("%d", &n);
    getchar();
    
    int batDau = soLuong;
    for(int i = 0; i < n; i++) {
        if(soLuong >= 100) {
            printf("Danh sach da day!\n");
            break;
        }
        
        printf("\nNhap thong tin mon an thu %d:\n", soLuong + 1);
        
        printf("Ten mon: ");
        fgets(menu[soLuong].name, 50, stdin);
        menu[soLuong].name[strcspn(menu[soLuong].name, "\n")] = 0;
        
        printf("Gia: ");
        scanf("%f", &menu[soLuong].price);
        getchar();
        
        soLuong++;
    }
    
    capNhatID();
    
    printf("\n--- DANH SACH MON AN VUA NHAP ---\n");
    for(int i = batDau; i < soLuong; i++) {
        printf("%d. ID: %d, Ten: %s, Gia: %.0f VND\n", 
               i + 1, menu[i].id, menu[i].name, menu[i].price);
    }
}

void themMonAnViTri() {
    if(soLuong >= 100) {
        printf("Danh sach da day, khong the them moi!\n");
        return;
    }
    
    int viTri;
    printf("Nhap vi tri can them (0 - %d): ", soLuong);
    scanf("%d", &viTri);
    getchar();
    
    if(viTri < 0 || viTri > soLuong) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    for(int i = soLuong; i > viTri; i--) {
        menu[i] = menu[i - 1];
    }
    
    printf("Nhap thong tin mon an moi:\n");
    
    printf("Ten mon: ");
    fgets(menu[viTri].name, 50, stdin);
    menu[viTri].name[strcspn(menu[viTri].name, "\n")] = 0;
    
    printf("Gia: ");
    scanf("%f", &menu[viTri].price);
    getchar();
    
    soLuong++;
    capNhatID();
    
    printf("Them mon an thanh cong!\n");
    hienThiDanhSach();
}

void suaMonAn() {
    if(soLuong == 0) {
        printf("Danh sach menu trong!\n");
        return;
    }
    
    int viTri;
    printf("Nhap vi tri can sua (0 - %d): ", soLuong - 1);
    scanf("%d", &viTri);
    getchar();
    
    if(viTri < 0 || viTri >= soLuong) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    printf("Sua thong tin mon an tai vi tri %d:\n", viTri);
    printf("Ten moi: ");
    fgets(menu[viTri].name, 50, stdin);
    menu[viTri].name[strcspn(menu[viTri].name, "\n")] = 0;
    
    printf("Gia moi: ");
    scanf("%f", &menu[viTri].price);
    getchar();
    
    printf("Sua mon an thanh cong!\n");
    hienThiDanhSach();
}

void xoaMonAn() {
    if(soLuong == 0) {
        printf("Danh sach menu trong!\n");
        return;
    }
    
    int viTri;
    printf("Nhap vi tri can xoa (0 - %d): ", soLuong - 1);
    scanf("%d", &viTri);
    getchar();
    
    if(viTri < 0 || viTri >= soLuong) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    for(int i = viTri; i < soLuong - 1; i++) {
        menu[i] = menu[i + 1];
    }
    
    soLuong--;
    capNhatID();
    
    printf("Xoa mon an thanh cong!\n");
    hienThiDanhSach();
}

void sapXepTangDan() {
    if(soLuong == 0) {
        printf("Danh sach menu trong!\n");
        return;
    }
    
    for(int i = 0; i < soLuong - 1; i++) {
        for(int j = 0; j < soLuong - i - 1; j++) {
            if(menu[j].price > menu[j + 1].price) {
                struct Dish temp = menu[j];
                menu[j] = menu[j + 1];
                menu[j + 1] = temp;
            }
        }
    }
    capNhatID();
    printf("Da sap xep tang dan theo gia!\n");
    hienThiDanhSach();
}

void sapXepGiamDan() {
    if(soLuong == 0) {
        printf("Danh sach menu trong!\n");
        return;
    }
    
    for(int i = 0; i < soLuong - 1; i++) {
        for(int j = 0; j < soLuong - i - 1; j++) {
            if(menu[j].price < menu[j + 1].price) {
                struct Dish temp = menu[j];
                menu[j] = menu[j + 1];
                menu[j + 1] = temp;
            }
        }
    }
    capNhatID();
    printf("Da sap xep giam dan theo gia!\n");
    hienThiDanhSach();
}

void timKiemTuyenTinh() {
    if(soLuong == 0) {
        printf("Danh sach menu trong!\n");
        return;
    }
    
    char tenCanTim[50];
    printf("Nhap ten mon an can tim: ");
    getchar();
    fgets(tenCanTim, 50, stdin);
    tenCanTim[strcspn(tenCanTim, "\n")] = 0;
    
    int timThay = 0;
    printf("\nKet qua tim kiem:\n");
    for(int i = 0; i < soLuong; i++) {
        if(strstr(menu[i].name, tenCanTim) != NULL) {
            printf("%d. ID: %d, Ten: %s, Gia: %.0f VND\n", 
                   i + 1, menu[i].id, menu[i].name, menu[i].price);
            timThay = 1;
        }
    }
    
    if(!timThay) {
        printf("Khong tim thay mon an co ten: %s\n", tenCanTim);
    }
}

void timKiemNhiPhan() {
    if(soLuong == 0) {
        printf("Danh sach menu trong!\n");
        return;
    }
    
    char tenCanTim[50];
    printf("Nhap ten mon an can tim: ");
    getchar();
    fgets(tenCanTim, 50, stdin);
    tenCanTim[strcspn(tenCanTim, "\n")] = 0;
    
    int timThay = 0;
    printf("\nKet qua tim kiem:\n");
    for(int i = 0; i < soLuong; i++) {
        if(strcmp(menu[i].name, tenCanTim) == 0) {
            printf("%d. ID: %d, Ten: %s, Gia: %.0f VND\n", 
                   i + 1, menu[i].id, menu[i].name, menu[i].price);
            timThay = 1;
        }
    }
    
    if(!timThay) {
        printf("Khong tim thay mon an co ten: %s\n", tenCanTim);
    }
}

int main() {
    int choice;
    
    do {
        printf("\n=== MENU QUAN LY MON AN ===\n");
        printf("1. Nhap mon an va hien thi\n");
        printf("2. In danh sach mon an\n");
        printf("3. Them mon an vao vi tri chi dinh\n");
        printf("4. Sua mon an o vi tri chi dinh\n");
        printf("5. Xoa mon an o vi tri chi dinh\n");
        printf("6. Sap xep mon an\n");
        printf("7. Tim kiem mon an\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                nhapMonAn();
                break;
            case 2:
                hienThiDanhSach();
                break;
            case 3:
                themMonAnViTri();
                break;
            case 4:
                suaMonAn();
                break;
            case 5:
                xoaMonAn();
                break;
            case 6:
                {
                    int subChoice;
                    printf("\n--- SAP XEP MON AN ---\n");
                    printf("1. Tang dan theo gia\n");
                    printf("2. Giam dan theo gia\n");
                    printf("Lua chon: ");
                    scanf("%d", &subChoice);
                    
                    if(subChoice == 1) {
                        sapXepTangDan();
                    } else if(subChoice == 2) {
                        sapXepGiamDan();
                    } else {
                        printf("Lua chon khong hop le!\n");
                    }
                }
                break;
            case 7:
                {
                    int subChoice;
                    printf("\n--- TIM KIEM MON AN ---\n");
                    printf("1. Tim kiem tuyen tinh\n");
                    printf("2. Tim kiem nhi phan\n");
                    printf("Lua chon: ");
                    scanf("%d", &subChoice);
                    
                    if(subChoice == 1) {
                        timKiemTuyenTinh();
                    } else if(subChoice == 2) {
                        timKiemNhiPhan();
                    } else {
                        printf("Lua chon khong hop le!\n");
                    }
                }
                break;
            case 8:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 8);
    
    return 0;
}
