#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int arr[MAX];
int size = 0;

void nhapMang() {
    int i;
    printf("Nhap so phan tu: ");
    scanf("%d", &size);
    
    printf("Nhap gia tri cac phan tu:\n");
    for (i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void inMang() {
    int i;
    if (size == 0) {
        printf("Mang rong!\n");
        return;
    }
    
    printf("Cac phan tu trong mang: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu() {
    int i, value, position;
    if (size >= MAX) {
        printf("Mang da day, khong the them!\n");
        return;
    }
    
    printf("Nhap vi tri can them (1-%d): ", size + 1);
    scanf("%d", &position);
    
    if (position < 1 || position > size + 1) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    
    for (i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position - 1] = value;
    size++;
    printf("Them phan tu thanh cong!\n");
}

void suaPhanTu() {
    int position, value;
    if (size == 0) {
        printf("Mang rong!\n");
        return;
    }
    
    printf("Nhap vi tri can sua (1-%d): ", size);
    scanf("%d", &position);
    
    if (position < 1 || position > size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    
    arr[position - 1] = value;
    printf("Sua phan tu thanh cong!\n");
}

void xoaPhanTu() {
    int i, position;
    if (size == 0) {
        printf("Mang rong!\n");
        return;
    }
    
    printf("Nhap vi tri can xoa (1-%d): ", size);
    scanf("%d", &position);
    
    if (position < 1 || position > size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    
    for (i = position - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    size--;
    printf("Xoa phan tu thanh cong!\n");
}

void sapXepGiamDan() {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sap xep giam dan thanh cong!\n");
}

void sapXepTangDan() {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sap xep tang dan thanh cong!\n");
}

void menuSapXep() {
    char c;
    printf("\n--- MENU SAP XEP ---\n");
    printf("a. Giam dan\n");
    printf("b. Tang dan\n");
    printf("Lua chon cua ban: ");
    
    scanf(" %c", &c);
    
    switch (c) {
        case 'a':
            sapXepGiamDan();
            break;
        case 'b':
            sapXepTangDan();
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }
}

int timKiemTuyenTinh(int value) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int timKiemNhiPhan(int value) {
    int left = 0, right = size - 1;
    int mid;
    
    while (left <= right) {
        mid = (left + right) / 2;
        
        if (arr[mid] == value) {
            return mid;
        } else if (arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void menuTimKiem() {
    int value, result;
    char c;
    
    if (size == 0) {
        printf("Mang rong!\n");
        return;
    }
    
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    
    printf("\n--- MENU TIM KIEM ---\n");
    printf("a. Tim kiem tuyen tinh\n");
    printf("b. Tim kiem nhi phan\n");
    printf("Lua chon cua ban: ");
    
    scanf(" %c", &c);
    
    switch (c) {
        case 'a':
            result = timKiemTuyenTinh(value);
            break;
        case 'b':
            sapXepTangDan();
            result = timKiemNhiPhan(value);
            break;
        default:
            printf("Lua chon khong hop le!\n");
            return;
    }
    
    if (result != -1) {
        printf("Tim thay %d tai vi tri %d\n", value, result + 1);
    } else {
        printf("Khong tim thay %d trong mang\n", value);
    }
}

int main() {
    int choice;
    
    do {
        printf("\n--- QUAN LY MANG ---\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Sap xep\n");
        printf("7. Tim kiem\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                nhapMang();
                break;
            case 2:
                inMang();
                break;
            case 3:
                themPhanTu();
                break;
            case 4:
                suaPhanTu();
                break;
            case 5:
                xoaPhanTu();
                break;
            case 6:
                menuSapXep();
                break;
            case 7:
                menuTimKiem();
                break;
            case 8:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);
    
    return 0;
}
