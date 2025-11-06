/*
NAME: Gladys Opondo
Reg no: PA106/G/28789/25
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char title[100];
    char choice;
    
    
    file = fopen("borrowed_books.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("=== Library Book Title Recorder ===\n");
    
    do {
        printf("\nEnter book title: ");
        fgets(title, sizeof(title), stdin);
        
        
        title[strcspn(title, "\n")] = 0;
        
        fprintf(file, "%s\n", title);
        
        
        printf("✓ Title '%s' successfully stored in borrowed_books.txt\n", title);
        
        printf("Do you want to enter another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); 
        
    } while (choice == 'y' || choice == 'Y');
    
    fclose(file);
    printf("\nAll book titles have been saved. Thank you!\n");
    
    return 0;
}
