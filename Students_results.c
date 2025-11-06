/*
Name:Gladys Opondo
Reg no: PA106//G/28789/25
*/

#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    char regNumber[20];
    int totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    
    
    file = fopen("results.dat", "rb");
    
    if (file == NULL) {
        printf("Error opening results.dat file!\n");
        printf("Please ensure the file exists.\n");
        return 1;
    }
    
    printf("=== Student Examination Results ===\n");
    printf("------\n");
    
    
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", student.name);
        printf("Registration Number: %s\n", student.regNumber);
        printf("Total Marks: %d\n", student.totalMarks);
        printf("------\n");
    }
    
    fclose(file);
    
    return 0;
}
