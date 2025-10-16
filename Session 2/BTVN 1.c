#include <stdio.h>
int main(){
	short s = 100;                    // short: so nguyen co kich thuoc nho, 2 byte
	int i = 100000;                   // int: so nguyen co kich thuoc trung binh, 4 byte  
	long l = 1000000L;                // long: so nguyen co kich thuoc lon, 4 hoac 8 byte
	long long ll = 10000000000LL;     // long long: so nguyen co kich thuoc rat lon, 8 byte
	
	unsigned short us = 500;          // unsigned short: so nguyen duong nho, 2 byte
	unsigned int ui = 4000000000;     // unsigned int: so nguyen duong trung binh, 4 byte
	unsigned long ul = 3000000000UL;  // unsigned long: so nguyen duong lon, 4 hoac 8 byte
	unsigned long long ull = 10000000000000000000ULL; // unsigned long long: so nguyen duong rat lon, 8 byte
	
	char c = 'A';                     // char: ky tu, 1 byte
	return 0;
}
