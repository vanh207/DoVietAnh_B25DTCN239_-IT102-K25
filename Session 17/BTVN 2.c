#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    int luaChon;
    
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    
    printf("Menu:\n");
    printf("1. In chuoi chu hoa\n");
    printf("2. In chuoi chu thuong\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &luaChon);
    
    switch(luaChon) {
        case 1:
            for(int i = 0; chuoi[i] != '\0'; i++) {
                chuoi[i] = toupper(chuoi[i]);
            }
            printf("Chuoi chu hoa: %s", chuoi);
            break;
            
        case 2:
            for(int i = 0; chuoi[i] != '\0'; i++) {
                chuoi[i] = tolower(chuoi[i]);
            }
            printf("Chuoi chu thuong: %s", chuoi);
            break;
            
        default:
            printf("Lua chon khong hop le");
    }
    
    return 0;
}
