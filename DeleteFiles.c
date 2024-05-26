#include <stdio.h>
#include <string.h>

int main()
{
    char filePath[256];
    int numFiles;

    printf("\nEnter the number of files to delete: ");
    scanf("%d", &numFiles);
    getchar();

    for (int i = 1; i <= numFiles; i++) 
    {
        printf("\nEnter the full file path of file %d: ", i);
        fgets(filePath, sizeof(filePath), stdin);
        filePath[strcspn(filePath, "\n")] = '\0';

        if (remove(filePath) == 0) 
        {
            printf("\nFile %d deleted successfully.\n", i);
        } 
        
        else 
        {
            perror("Error deleting file");
        }
    }
    return 0;
}
