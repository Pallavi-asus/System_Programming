#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    char fname;
    int fd;

    printf("Enter file name: ");
    scanf("%s", fname);

    fd = open(fname, O_RDONLY);

    if (fd == -1)
    {
        perror("Error opening file");
    }
    else
    {
        printf("File opened successfully\n");
        printf("File Descriptor = %d\n", fd);
        close(fd);
    }

    return 0;
}
