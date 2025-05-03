// Accepts the following arguments: the first argument is a full path to a file (including filename) on the filesystem, referred to below as writefile; the second argument is a text string which will be written within this file, referred to below as writestr
// Exits with value 1 error and print statements if any of the arguments above were not specified
// Creates a new file with name and path writefile with content writestr, overwriting any existing file and creating the path if it doesn’t exist. Exits with value 1 and error print statement if the file could not be created.
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(int argc, char *argv[]) {
    if (argc != 3) { // one is the program name
        return 1;
    }
    // No need to create file
    // Open file and write string to it
    FILE* ptr;
    ptr = fopen(argv[1], "w+");
    if (ptr == NULL){
        syslog(LOG_ERR, "Cannot open file");
    }
    // char str[] = argv[2];
    fputs(argv[2], ptr);
    fclose(ptr);
    syslog(LOG_DEBUG, "Writing %s to %s", argv[2], argv[1]);
    return 0;
}
