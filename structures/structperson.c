#include <stdio.h>
#include <string.h>

// Define the structure
struct Person {
    int age;
    char name[50];
};

// Function to display the structure
void displayPerson(struct Person p) {
    printf("Name: %s, Age: %d\n", p.name, p.age);
}

// Function to create and return a new structure
struct Person createPerson(int age, const char *name) {
    struct Person p;
    p.age = age;
    strncpy(p.name, name, sizeof(p.name) - 1);
    p.name[sizeof(p.name) - 1] = '\0'; // Ensure null-termination
    return p;
}

int main() {
    // Create a Person structure
    struct Person person1;
    person1.age = 25;
    strncpy(person1.name, "Alice", sizeof(person1.name) - 1);
    person1.name[sizeof(person1.name) - 1] = '\0'; // Ensure null-termination

    // Display the original person
    printf("Original person:\n");
    displayPerson(person1);

    // Pass the structure to a function
    printf("\nPassing the structure to a function:\n");
    displayPerson(person1);

    // Create a new person using the function
    struct Person person2 = createPerson(30, "Bob");

    // Display the new person
    printf("\nNew person created and returned from function:\n");
    displayPerson(person2);

    return 0;
}
