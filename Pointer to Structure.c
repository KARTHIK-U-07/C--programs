#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student s1;
    struct Student *ptr;
    ptr = &s1;  
    printf("Enter student ID: ");
    scanf("%d", &ptr->id);
    getchar(); 
    printf("Enter student name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    printf("Enter student marks: ");
    scanf("%f", &ptr->marks);
    printf("\nStudent Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
