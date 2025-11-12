#include <stdio.h>
#include <stdbool.h>

bool kiemTraSoHoanHao(int number) {
    if (number <= 1) {
        return false;
    }
    
    int sum = 0, i;
    for (i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    
    return sum == number;
}

int main() {
    int num1, num2;
    
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    
    if (kiemTraSoHoanHao(num1)) {
        printf("%d la so hoan hao.\n", num1);
    } else {
        printf("%d khong phai la so hoan hao.\n", num1);
    }
    
    if (kiemTraSoHoanHao(num2)) {
        printf("%d la so hoan hao.\n", num2);
    } else {
        printf("%d khong phai la so hoan hao.\n", num2);
    }
    
    return 0;
}
