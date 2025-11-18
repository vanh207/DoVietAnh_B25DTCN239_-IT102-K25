#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];
    
    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0;
    
    char *start = inputString;
    char *end = inputString + strlen(inputString) - 1;
    char *rev = reverseString;
    
    while (end >= start) {
        *rev = *end;
        rev++;
        end--;
    }
    *rev = '\0';
    
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
    
    return 0;
}
