#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter a string to write into file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(fp, "%s", str); 
    fclose(fp);          
    printf("Data written to file successfully.\n");
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Reading data from file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}
