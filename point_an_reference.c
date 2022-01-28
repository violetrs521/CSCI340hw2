#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]){

    // gets the ascii of an int from the command 
    // line of the block size of memory you 
    // would like to allocate
    char* a = argv[1];

    //casts it as an integer
    int num = atoi(a);

    //prints the value you entered
    printf("you have entered %d\n", num);

    //allocates and initializes the memory block to 0
    int* mem = (int*)calloc(num, sizeof(int));


    //prints the address of the memory block
    printf("This is the memory block address: %p\n", mem);

    //prints the value in hex (which is the same as int because it is 0)
    printf("This is the value: %d \n", *mem);


    // frees the memory
    free(mem);

    return 0;
}   