#include <stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};
int main() {
    union Data data;
    data.i = 10;
    printf("Data.i = %d\n", data.i);    
    data.f = 220.5;
    printf("Data.f = %.2f\n", data.f);   
    strcpy(data.str, "Hello");
    printf("Data.str = %s\n", data.str);    
    printf("Now Data.i = %d (may be garbage)\n", data.i);
    printf("Now Data.f = %.2f (may be garbage)\n", data.f);
    return 0;
}
