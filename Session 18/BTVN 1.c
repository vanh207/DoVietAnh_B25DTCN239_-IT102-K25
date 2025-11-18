#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;
    
    printf("Gia tri cua num: %d\n", num);
    printf("Dia chi cua num: %p\n", &num);
    
    printf("Gia tri cua num (qua con tro): %d\n", *ptr);
    printf("Dia chi cua num (qua con tro): %p\n", ptr);
    
    return 0;
}
