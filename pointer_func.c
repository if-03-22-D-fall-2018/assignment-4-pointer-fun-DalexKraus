#include <stdio.h>

void print_integers(int int_value, int* int_pointer);
void change_integers(int int_value, int* int_pointer);

int main(int argc, const char *argv[])
{
    int int_value = 12;

    int* int_pointer = &int_value;
    /*
        Possible ways to assign a value to a pointer:
        1.) == Using the address operator ('&') ==
            You can use this operator followed by a variable, to read the
            address of that specific variable. You can then store this address
            in the pointer.
            Example:
                int* pointer_to_age = &age;

        2.) == Arrays ==
            You can assign an array to a pointer!
            Why? Because a declared array in code is basically just a pointer
            to the array's first element in memory. If you'd now assign the
            array to a pointer, nothing would change at all
        3.) == Direct assignment ==
            Although this isn't really supported, you are able to do it.
            You can assign a pointer a value in code, but the compiler will
            think that he has to assign an integer value to a pointer.
            If you then run the program, your pointer literally points anywhere,
            so you might be lucky and point to an address that doesn't belong to
            you. If that is the case, your program will crash due to a
            segmentation fault.
    */

    print_integers(int_value, int_pointer);
    change_integers(int_value, int_pointer);
    print_integers(int_value, int_pointer
    /*
        None of the two values has changed, because only
        the values of the variables are copied.
        This also counts for the pointer, only the address is copied, but
        the pointer as a parameter is only 'alive' while the program counter
        is inside this method. So changing this pointer would result in an
        useless operation, because you change the pointer only locally!
    */
}

void print_integers(int int_value, int* int_pointer)
{
    printf("Got an integer value %d and an address to an integer with value %d\n", int_value, *int_pointer);
}

void change_integers(int int_value, int* int_pointer)
{
    int_value = 16;
    int_pointer = &int_value;
}
