#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void nhapMang(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void inSoChan(int *arr, int n) {
    printf("Cac phan tu la so chan: ");
    for(int i = 0; i < n; i++) {
        if(*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

bool laSoNguyenTo(int num) {
    if(num < 2) return false;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

void inSoNguyenTo(int *arr, int n) {
    printf("Cac phan tu la so nguyen to: ");
    for(int i = 0; i < n; i++) {
        if(laSoNguyenTo(*(arr + i))) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

void daoNguocMang(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Da dao nguoc mang thanh cong!\n");
}

void sapXepTangDan(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    printf("Da sap xep tang dan thanh cong!\n");
}

void sapXepGiamDan(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(*(arr + j) < *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    printf("Da sap xep giam dan thanh cong!\n");
}

void timKiemPhanTu(int *arr, int n) {
    int target;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);
    
    bool found = false;
    printf("Phan tu tim thay tai vi tri: ");
    for(int i = 0; i < n; i++) {
        if(*(arr + i) == target) {
            printf("%d ", i);
            found = true;
        }
    }
    if(!found) {
        printf("Khong tim thay!");
    }
    printf("\n");
}

void hienThiMang(int *arr, int n) {
    printf("Mang hien tai: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int n = 0;
    int *arr = NULL;
    int choice;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                if(arr != NULL) free(arr);
                arr = (int*)malloc(n * sizeof(int));
                nhapMang(arr, n);
                break;
                
            case 2:
                if(n > 0) {
                    inSoChan(arr, n);
                } else {
                    printf("Mang rong!\n");
                }
                break;
                
            case 3:
                if(n > 0) {
                    inSoNguyenTo(arr, n);
                } else {
                    printf("Mang rong!\n");
                }
                break;
                
            case 4:
                if(n > 0) {
                    daoNguocMang(arr, n);
                    hienThiMang(arr, n);
                } else {
                    printf("Mang rong!\n");
                }
                break;
                
            case 5:
                if(n > 0) {
                    int subChoice;
                    printf("\nMenu con - Sap xep mang:\n");
                    printf("1. Tang dan\n");
                    printf("2. Giam dan\n");
                    printf("Lua chon: ");
                    scanf("%d", &subChoice);
                    
                    if(subChoice == 1) {
                        sapXepTangDan(arr, n);
                    } else if(subChoice == 2) {
                        sapXepGiamDan(arr, n);
                    } else {
                        printf("Lua chon khong hop le!\n");
                    }
                    hienThiMang(arr, n);
                } else {
                    printf("Mang rong!\n");
                }
                break;
                
            case 6:
                if(n > 0) {
                    timKiemPhanTu(arr, n);
                } else {
                    printf("Mang rong!\n");
                }
                break;
                
            case 7:
                if(arr != NULL) free(arr);
                printf("Tam biet!\n");
                break;
                
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 7);
    
    return 0;
}
