#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    char c1, c2;
    int i;
    
    printf("Nhap chuoi 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    printf("Nhap chuoi 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  
    
    if(strlen(str1) != strlen(str2)){
        printf("Khac nhau");
        return 0;
    }
    
    for(i = 0; str1[i] != '\0'; i++){
        c1 = str1[i];
        c2 = str2[i];
        
        if(c1 >= 'A' && c1 <= 'Z'){
            c1 += 32;
        }
        if(c2 >= 'A' && c2 <= 'Z'){
            c2 += 32;
        }
        
        if(c1 != c2){
            printf("Khac nhau");
            return 0;
        }
    }
    
    printf("Giong nhau");
    return 0;
}
