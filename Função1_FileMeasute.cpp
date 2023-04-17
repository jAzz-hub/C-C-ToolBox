#include <iostream>
using namespace std;

/// @brief Recebe um ponteiro do tipo FILE e retorna o tamanho deste arquivo em caracteres
/// @return O tamanho de um arquivo em long int
long int SizeOfFile(FILE *PointerToFile)
  {
    long int Size;
    long int Position;

    if(PointerToFile==NULL) return -2;

    Position = ftell(PointerToFile);

    fseek (PointerToFile, 0, SEEK_END);
    Size = ftell(PointerToFile);
    fseek (PointerToFile, Position, SEEK_SET);

    return Size;
}

int main()
{
    FILE *data = fopen("dataset/input.data","r");
    cout<<SizeOfFile(data);

    return 0;
}
