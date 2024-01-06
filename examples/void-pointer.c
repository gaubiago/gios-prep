#include <stdio.h>
int main() {
    int intValue = 42;
    float floatValue = 3.14;

    void* genericPtr;
    float* floatPtr;

    // Assign the int pointer to a float pointer requires a cast to float *
    floatPtr = (float *) &intValue;

    // Now you can use the float pointer to access the value
    printf("With Casting: Value through float pointer: %f\n", *floatPtr);

    // Assigning the address of an int to a void pointer
    genericPtr = &intValue;

    // No need to cast the void pointer to the appropriate type before assigning
    floatPtr = genericPtr;

    // Now you can use the float pointer to access the value
    printf("Without Casting: Value through float pointer: %f\n", *floatPtr);

    return 0;
}
