//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;  // Structure variable
    struct Student *ptr = &s;  // Pointer to structure

    // Taking input using -> operator
    printf("Enter Name, Roll number and Marks: ");
    scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->marks);

    // Displaying modified data using -> operator
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.2f\n", 
            ptr->name, ptr->roll, ptr->marks);

    return 0;
}
