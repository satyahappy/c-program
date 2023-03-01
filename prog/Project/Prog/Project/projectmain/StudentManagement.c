#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student {
    int id;
    char name[50];
    int age;
};

struct student students[MAX_STUDENTS];
int num_students = 0;

void add_student() {
    if (num_students >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }
    
    struct student s;
    printf("Enter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter student age: ");
    scanf("%d", &s.age);
    
    students[num_students++] = s;
    printf("Student added.\n");
}

void delete_student() {
    int id, i, found = 0;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);
    
    for (i = 0; i < num_students; i++) {
        if (students[i].id == id) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        for (; i < num_students - 1; i++) {
            students[i] = students[i+1];
        }
        num_students--;
        printf("Student deleted.\n");
    } else {
        printf("Student not found.\n");
    }
}

void display_students() {
    int i;
    printf("ID\tName\tAge\n");
    for (i = 0; i < num_students; i++) {
        printf("%d\t%s\t%d\n", students[i].id, students[i].name, students[i].age);
    }
}

void modify_student() {
    int id, i, found = 0;
    printf("Enter student ID to modify: ");
    scanf("%d", &id);
    
    for (i = 0; i < num_students; i++) {
        if (students[i].id == id) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("Enter new name: ");
        scanf("%s", students[i].name);
        printf("Enter new age: ");
        scanf("%d", &students[i].age);
        printf("Student modified.\n");
    } else {
        printf("Student not found.\n");
    }
}

int main() {
    int choice;
    
    do {
        printf("\nStudent Management System\n");
        printf("-------------------------\n");
        printf("1. Add student\n");
        printf("2. Delete student\n");
        printf("3. Display students\n");
        printf("4. Modify student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                delete_student();
                break;
            case 3:
                display_students();
                break;
            case 4:
                modify_student();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 5);
    
    return 0;
}
