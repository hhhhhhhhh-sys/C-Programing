#include <stdio.h>
int main() {
    int size = 5;  
    int array[] = {1, 2, 3, 4, 5};  
    int *ptr = array;  
    int evenCount = 0, oddCount = 0;    
    for (int i = 0; i < size; i++) {
        
        if (*ptr % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

                ptr++;
    }    
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
    return 0;
}
