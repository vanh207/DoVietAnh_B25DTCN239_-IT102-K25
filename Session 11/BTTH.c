#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n = 0;
    int isSorted = 0;
    int choice, index, value, i, j, temp;
    
    do {
        printf("\n***************MENU*******************\n");
        printf("1. Nhap gia tri n phan tu\n");
        printf("2. In gia tri cac phan tu cua mang\n");
        printf("3. Tinh va in tong, trung binh cong\n");
        printf("4. In gia tri lon nhat va nho nhat\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu\n");
        printf("7. Xoa phan tu theo chi so\n");
        printf("8. Chen phan tu vao mang\n");
        printf("9. Xoa cac phan tu theo gia tri\n");
        printf("10. Thoat\n");
        printf("Chon chuc nang (1-10): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Nhap kich thuoc phan tu trong mang: ");
                do {
                    fflush(stdin);
                    scanf("%d", &n);
                    if(n <= 0 || n > MAX) {
                        printf("Loi! Vui long nhap lai (1-%d): ", MAX);
                    }
                } while(n <= 0 || n > MAX);
                
                printf("Nhap gia tri trong mang: \n");
                for(i = 0; i < n; i++) {
                    printf("Phan tu thu %d: ", i);
                    scanf("%d", &arr[i]);
                }
                isSorted = 0;
                break;
                
            case 2:
                if(n == 0) {
                    printf("Mang rong!\n");
                } else {
                    printf("Cac phan tu trong mang: ");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
                
            case 3:
                if(n == 0) {
                    printf("Mang rong!\n");
                } else {
                    int sum = 0;
                    for(i = 0; i < n; i++) {
                        sum += arr[i];
                    }
                    float average = (float)sum / n;
                    printf("Tong cac phan tu: %d\n", sum);
                    printf("Trung binh cong: %.2f\n", average);
                }
                break;
                
            case 4:
                if(n == 0) {
                    printf("Mang rong!\n");
                } else {
                    int min = arr[0];
                    int max = arr[0];
                    for(i = 1; i < n; i++) {
                        if(arr[i] < min) min = arr[i];
                        if(arr[i] > max) max = arr[i];
                    }
                    printf("Gia tri nho nhat: %d\n", min);
                    printf("Gia tri lon nhat: %d\n", max);
                }
                break;
                
            case 5:
                if(n == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                int sortChoice;
                printf("a. Bubble Sort (tang dan)\n");
                printf("b. Selection Sort (giam dan)\n");
                printf("c. Insertion Sort (tang dan)\n");
                printf("Chon thuat toan sap xep: ");
                fflush(stdin);
                scanf("%d", &sortChoice);
                
                switch(sortChoice) {
                    case 1:
                        for(i = 0; i < n - 1; i++) {
                            for(j = 0; j < n - i - 1; j++) {
                                if(arr[j] > arr[j + 1]) {
                                    temp = arr[j];
                                    arr[j] = arr[j + 1];
                                    arr[j + 1] = temp;
                                }
                            }
                        }
                        isSorted = 1;
                        printf("Mang da duoc sap xep tang dan bang Bubble Sort!\n");
                        break;
                        
                    case 2:
                        for(i = 0; i < n - 1; i++) {
                            int maxIndex = i;
                            for(j = i + 1; j < n; j++) {
                                if(arr[j] > arr[maxIndex]) {
                                    maxIndex = j;
                                }
                            }
                            temp = arr[i];
                            arr[i] = arr[maxIndex];
                            arr[maxIndex] = temp;
                        }
                        isSorted = 1;
                        printf("Mang da duoc sap xep giam dan bang Selection Sort!\n");
                        break;
                        
                    case 3:
                        for(i = 1; i < n; i++) {
                            int key = arr[i];
                            j = i - 1;
                            while(j >= 0 && arr[j] > key) {
                                arr[j + 1] = arr[j];
                                j = j - 1;
                            }
                            arr[j + 1] = key;
                        }
                        isSorted = 1;
                        printf("Mang da duoc sap xep tang dan bang Insertion Sort!\n");
                        break;
                        
                    default:
                        printf("Lua chon khong hop le!\n");
                }
                break;
                
            case 6:
                if(n == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                
                if(isSorted) {
                    int left = 0, right = n - 1;
                    int found = 0;
                    while(left <= right) {
                        int mid = left + (right - left) / 2;
                        if(arr[mid] == value) {
                            printf("Tim thay %d tai vi tri %d\n", value, mid);
                            found = 1;
                            break;
                        } else if(arr[mid] < value) {
                            left = mid + 1;
                        } else {
                            right = mid - 1;
                        }
                    }
                    if(!found) {
                        printf("Khong tim thay %d trong mang\n", value);
                    }
                } else {
                    int found = 0;
                    for(i = 0; i < n; i++) {
                        if(arr[i] == value) {
                            printf("Tim thay %d tai vi tri %d\n", value, i);
                            found = 1;
                        }
                    }
                    if(!found) {
                        printf("Khong tim thay %d trong mang\n", value);
                    }
                }
                break;
                
            case 7:
                if(n == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                printf("Nhap chi so can xoa (0-%d): ", n-1);
                scanf("%d", &index);
                
                if(index < 0 || index >= n) {
                    printf("Chi so khong hop le!\n");
                } else {
                    for(i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai chi so %d\n", index);
                }
                break;
                
            case 8:
                if(n >= MAX) {
                    printf("Mang da day, khong the chen them!\n");
                    break;
                }
                printf("Nhap chi so can chen (0-%d): ", n);
                scanf("%d", &index);
                printf("Nhap gia tri can chen: ");
                scanf("%d", &value);
                
                if(index < 0 || index > n) {
                    printf("Chi so khong hop le!\n");
                } else {
                    for(i = n; i > index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = value;
                    n++;
                    printf("Da chen %d vao vi tri %d\n", value, index);
                }
                break;
                
            case 9:
                if(n == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                printf("Nhap gia tri can xoa: ");
                scanf("%d", &value);
                
                int count = 0;
                i = 0;
                while(i < n) {
                    if(arr[i] == value) {
                        for(j = i; j < n - 1; j++) {
                            arr[j] = arr[j + 1];
                        }
                        n--;
                        count++;
                    } else {
                        i++;
                    }
                }
                printf("Da xoa %d phan tu co gia tri %d\n", count, value);
                break;
                
            case 10:
                printf("Thoat chuong trinh!\n");
                break;
                
            default:
                printf("Lua chon khong hop le! Vui long chon 1-10.\n");
        }
        
    } while(choice != 10);
    
    return 0;
}
