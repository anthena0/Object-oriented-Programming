#include <cstdio>

int main() {
        printf("sizeof(char) = %lu\n", sizeof(char));
        printf("sizeof(unsigned char) = %lu\n", sizeof(unsigned char));
       
        printf("sizeof(short) = %lu\n", sizeof(short));
        printf("sizeof(unsigned short) = %lu\n", sizeof(unsigned short));
        
        printf("sizeof(int) = %lu\n", sizeof(int));
        printf("sizeof(unsigned int) = %lu\n", sizeof(unsigned int));
        
        printf("sizeof(long) = %lu\n", sizeof(long));
        printf("sizeof(unsigned long) = %lu\n", sizeof(unsigned long));
        
        printf("sizeof(long long) = %lu\n", sizeof(long long));
        printf("sizeof(unsigned long long) = %lu\n", sizeof(unsigned long long));
        
        printf("sizeof(float) = %lu\n", sizeof(float));
        printf("sizeof(double) = %lu\n", sizeof(double));
        printf("sizeof(long double) = %lu\n", sizeof(long double));
        
        printf("sizeof(wchar_t) = %lu\n", sizeof(wchar_t));
        printf("sizeof(char16_t) = %lu\n", sizeof(char16_t));
        printf("sizeof(char32_t) = %lu\n", sizeof(char32_t));

        return 0;
    }
