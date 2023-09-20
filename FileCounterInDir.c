#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>


/// @brief Conta quantos arquivos existe em determinado diretório
/// @param path caminho até o diretório em específico
/// @return número de arquivos no diretório escrito em path
int fileCounter(char* path)
{
    int fileCounter = 0;
    DIR *dirPointer;

    struct dirent * entry;

    dirPointer = opendir(path);

    while ( (entry = readdir(dirPointer)) != NULL)
    {
        if(entry->d_type == DT_REG)
        {
            fileCounter ++;
        }
    }

    closedir(dirPointer);

    return fileCounter;
}

int main()
{
	char *path = "diretório_atual/dataset";
	int a = entriesCount(path);

  printf(" foram encontrados %d arquivos no diretório %s", a, path);
	return 0;
}

