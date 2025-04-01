#include <stdio.h>


typedef struct {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    
    Person person1 = {"Harsh Singh", 18, 175.5};

    
    printf("Person Information:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %f\n", person1.height);

    return 0;
}
