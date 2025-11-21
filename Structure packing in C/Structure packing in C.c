#include <stdio.h>

#pragma pack(1)    // meaning no padding bytes will be inserted between members.


struct ahmad {
    int a;
    char b;
};

int main() {
    struct ahmad s1 = {0, 'a'};  

    printf("%zu\n", sizeof(s1));
    return 0;
}
