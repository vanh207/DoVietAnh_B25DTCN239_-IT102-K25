#include <stdio.h>
int main() {
    char name[100];
    
    printf("Vui long nhap ten cua ban: ");
    scanf("%99[^\n]", name); 
    
    printf("xin chao %s\n", name);
    
    return 0;
}
