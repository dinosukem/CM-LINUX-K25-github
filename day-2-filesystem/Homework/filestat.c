#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char *argv[])
{
    // get path from command line argument
    if (argc < 2)
    {
        printf("Usage: %s <file_path>\n", argv[0]);
        return 1;
    }

    // use lstat() to get file status
    struct stat fileStat;
    if (lstat(argv[1], &fileStat) < 0)
    {
        perror("lstat");
        return 1;
    }

    // print
    // - filepath
    // - filetype: directory, regular file, symlink using macro S_ISDIR, S_ISREG, S_ISLNK to check st_mode
    // - size
    // - last modified time: get time_t from st_mtime and convert to dd/mm/yyyy hh:mm:ss format using ctime() or strftime()
    printf("File: %s\n", argv[1]);
    if (S_ISDIR(fileStat.st_mode))
        printf("Type: Directory\n");
    else if (S_ISREG(fileStat.st_mode))
        printf("Type: Regular file\n");
    else if (S_ISLNK(fileStat.st_mode))
        printf("Type: Symbolic link\n");
    else
        printf("Type: Other\n");
    printf("Size: %lld bytes\n", (long long)fileStat.st_size);
    printf("Last modified: %s", ctime(&fileStat.st_mtime));

    printf("Hello, World!\n");
}
