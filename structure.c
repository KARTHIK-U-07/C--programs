#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student s1;
    printf("Enter student ID: ");
    scanf("%d", &s1.id);
    getchar();  
    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter student marks: ");
    scanf("%f", &s1.marks);
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s", s1.name);  
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}
