#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    printf("Begin ....\n");

    execlp("ls", "ls", ".", NULL);

    printf("End ....\n");
    return 0;
}
