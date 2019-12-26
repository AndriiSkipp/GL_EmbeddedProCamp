
#include <stdio.h>

/* function, that receives pointer to other function as a parameter */

void write(){ // funktion that do print
    printf("hello!");
}

void okay(void(*pwrite)()){ // function use as parametr pointer to oter function
    pwrite(); // calling real printing function "write"
}


int main()
{
void (*pwrite)(); // create pointer of function to nothing
pwrite = write; // to assign adress of exist function "write" to pointer
okay(*pwrite); // calling with pointer at funktion as parametr

    return 0;
}