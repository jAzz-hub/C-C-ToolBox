# C/C++ToolBox
Construindo minha biblioteca de funções para C e C++

## Funções e suas respectivas assinaturas

### [Função 1: Mensurando um arquivo](https://github.com/jAzz-hub/C-ToolBox/blob/main/Fun%C3%A7%C3%A3o1_FileMeasute.cpp)
*Fonte* - [StackOverFlow - Move the file pointer back after fseek](https://stackoverflow.com/questions/55777956/move-the-file-pointer-back-after-fseek)
~~~C++
/// @brief Recebe um ponteiro do tipo FILE e retorna o tamanho deste arquivo em caracteres
/// @return O tamanho de um arquivo em long int
long int SizeOfFile(FILE *PointerToFile)
~~~

### [Função 2: Contando arquivos de um diretório](https://github.com/jAzz-hub/C-ToolBox/blob/main/Fun%C3%A7%C3%A3o2_FileCounterInDir.c)
*Fonte* - [StackOverFlow - Counting the number of files in a directory using C](https://stackoverflow.com/questions/1121383/counting-the-number-of-files-in-a-directory-using-c)
~~~C
/// @brief Recebe uma string ou ponteiro de char denominado(a) path
/// @return Número de arquivos em contidos no diretório path
int fileCounter(char* path)
~~~
