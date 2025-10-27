#include <stdio.h>

int main() {
    int secret = 7;
    int guess;
    
    do {
        printf("Nhap so du doan: ");
        scanf("%d", &guess);
    } while(guess != secret);
    
    printf("Chuc mung, ban da doan dung!\n");
    
    return 0;
}
