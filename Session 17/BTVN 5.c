#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int i, giongNhau = 1;
    
    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    
    if(strlen(str1) != strlen(str2)) {
        giongNhau = 0;
    } else {
        for(i = 0; str1[i] != '\0'; i++) {
            if(tolower(str1[i]) != tolower(str2[i])) {
                giongNhau = 0;
                break;
            }
        }
    }
    
    if(giongNhau) {
        printf("Giong nhau");
    } else {
        printf("Khac nhau");
    }
    
    return 0;
}
