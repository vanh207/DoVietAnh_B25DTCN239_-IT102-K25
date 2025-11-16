#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    fgets(chuoi, sizeof(chuoi), stdin);
    
    int dai = strlen(chuoi);
    if (chuoi[dai - 1] == '\n') {
        chuoi[dai - 1] = '\0';
        dai--;
    }
    
    int trai = 0;
    int phai = dai - 1;
    int palindrome = 1;
    
    while (trai < phai) {
        if (chuoi[trai] != chuoi[phai]) {
            palindrome = 0;
            break;
        }
        trai++;
        phai--;
    }
    
    if (palindrome) {
        printf("La palindrome");
    } else {
        printf("Khong phai palindrome");
    }
    
    return 0;
}
