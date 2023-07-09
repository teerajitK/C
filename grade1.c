#include <stdio.h>
#include <stdlib.h>





int main() {
    char name[50];
    float grade1, grade2, gpa;
    
    // Get student name
    printf("Enter student name: ");
    scanf("%s", name);
    
    // Get first grade
    printf("Enter computer programming grade: ");
    scanf("%f", &grade1);
    
    // Validate first grade
    if (grade1 < 0 || grade1 > 4) {
        printf("Invalid grade. Exiting program.\n");
        return 0;
    }
    
    // Get second grade
    printf("Enter circuit grade: ");
    scanf("%f", &grade2);
    
    // Validate second grade
    if (grade2 < 0 || grade2 > 4) {
        printf("Invalid grade. Exiting program.\n");
        return 0;
    }
    
    // Calculate GPA
    gpa = (grade1 + grade2) / 2;
    
    // Display result
    printf("\nStudent: %s\n", name);
    printf("Computer programing: %.2f\n", grade1);
    printf("Circuit: %.2f\n", grade2);
    printf("GPA: %.2f\n", gpa);
    
    //check gap and print message
    if(gpa > 3.5) {
        printf("Great work, keep it up!\n");
    }
    else if(gpa < 2.5 ){
        printf("this is too bad,Try harder");
    }
    return 0;

}