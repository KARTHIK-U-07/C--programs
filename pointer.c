#include <stdio.h>
int main() {
    int num = 10;       
    int *ptr;           
    ptr = &num;        
    printf("Value of num: %d\n", num);           
    printf("Address of num: %p\n", &num);        
    printf("Value stored in pointer ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);  
    *ptr = 20;         
    printf("New value of num after updating via pointer: %d\n", num);
    return 0;
}
