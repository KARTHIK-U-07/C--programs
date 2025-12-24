#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];
    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter a string to append to file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(fp, "%s", str); // Append string to file
    fclose(fp);
    printf("Data appended to file successfully.\n");
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
