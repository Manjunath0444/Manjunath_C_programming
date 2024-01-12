#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *source_file, *destination_file;
    char ch;
    source_file = fopen(argv[1], "r");
    if (source_file == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    destination_file = fopen(argv[2], "w");
    if (destination_file == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(source_file);
        return 1;
    }
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }
    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully.\n");
    return 0;
}
