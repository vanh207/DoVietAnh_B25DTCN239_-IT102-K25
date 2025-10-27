#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("- ");
        n = -n;
    }
    int temp = n;
    int reversed;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    while (reversed > 0) {
        printf("%d", reversed % 10);
        reversed /= 10;
    }
    
    printf("\n");
    
    return 0;
}
